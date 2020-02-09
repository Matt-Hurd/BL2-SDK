#pragma once

#define VERSION_MAJOR	0
#define VERSION_MINOR	8
#define VERSION_PATCH	0

// Check windows
#if _WIN32 || _WIN64
#if _WIN64
#define ENVIRONMENT64
#else
#define ENVIRONMENT32
#endif
#endif

// Check GCC
#if __GNUC__
#if __x86_64__ || __ppc64__
#define ENVIRONMENT64
#else
#define ENVIRONMENT32
#endif
#endif


#include <SDKDDKVer.h>
#include <pybind11/pybind11.h>
#include <pybind11/embed.h>
#include <pybind11/stl.h>
#include <Python.h>

#include <windows.h>
#include <cstdio>
#include <iostream>
#include <ShlObj.h>
#include <string>
#include <map>
#include <regex>
#include <typeinfo>

#include <Shlwapi.h>
#pragma comment (lib, "Shlwapi.lib")

namespace UnrealSDK
{
	extern void* pGObjects;
	extern void* pGNames;
	extern void* pGObjHash;
	extern void* pGCRCTable;
	extern void* pNameHash;
}

#include "gamedefines.h"

#include "logging.h"

#include "UnrealEngine/Core/Core_structs.h"
#include "UnrealEngine/Core/Core_f_structs.h"
#include "UnrealEngine/Core/Core_classes.h"

#include "UnrealEngine/Engine/Engine_structs.h"
#include "UnrealEngine/Engine/Engine_f_structs.h"
#include "UnrealEngine/Engine/Engine_classes.h"

#include "TypeMap.h"

#include "Games.h"

namespace pybind11
{
	template <typename itype>
	struct polymorphic_type_hook<itype, detail::enable_if_t<std::is_base_of<UObject, itype>::value>>
	{
		static const void* get(const itype* src, const std::type_info*& type)
		{
			if (src)
			{
				if (((UObject *)src)->Class)
				{
					std::string type_name = ((UObject *)src)->Class->GetName();
					if (uobject_type_map.count(type_name))
						type = uobject_type_map[type_name];
				}
				return src;
			}
			type = nullptr;
			return dynamic_cast<const void*>(src);
		}
	};
}


namespace pybind11
{
	namespace detail
	{
		template <>
		struct type_caster<struct FString>
		{
		public:
		PYBIND11_TYPE_CASTER(FString, _("FString"));

			bool load(handle src, bool)
			{
				if (!isinstance<sequence>(src))
					return false;
				PyObject* source = src.ptr();
				const char* tmp = PyUnicode_AsUTF8AndSize(source, nullptr);
				if (!tmp)
					return false;
				value = FString(tmp);
				return true;
			}

			static handle cast(FString src, return_value_policy /* policy */, handle /* parent */)
			{
				Logging::LogD("FString cast %p %d\n", src.Data, src.Count);
				if (src.Data && src.Count)
					return PyUnicode_FromWideChar(src.Data, src.Count - 1);
				return none();
			}
		};
	}
}

namespace pybind11
{
	namespace detail
	{
		template <>
		struct type_caster<UClass *>
		{
			using value_conv = make_caster<UObject *>;
		public:
		PYBIND11_TYPE_CASTER(UClass *, _("UClass"));

			bool load(handle src, bool)
			{
				if (!isinstance<sequence>(src))
					return false;
				PyObject* source = src.ptr();
				const char* tmp = PyUnicode_AsUTF8AndSize(source, nullptr);
				if (!tmp)
					return false;
				value = UObject::FindClass(tmp, false);
				return value != nullptr;
			}

			static handle cast(UClass* src, return_value_policy policy, handle parent)
			{
				return value_conv::cast(forward_like<UObject *>(src), policy, parent);
			}
		};
	}
}


namespace pybind11
{
	namespace detail
	{
		template <>
		struct type_caster<struct FName>
		{
		public:
		PYBIND11_TYPE_CASTER(FName, _("FName"));

			bool load(handle src, bool)
			{
				if (!isinstance<sequence>(src))
					return false;
				PyObject* source = src.ptr();
				const char* tmp = PyUnicode_AsUTF8AndSize(source, nullptr);
				if (!tmp)
					return false;
				value = FName(tmp);
				return true;
			}

			static handle cast(FName src, return_value_policy /* policy */, handle /* parent */)
			{
				return PyUnicode_FromString(src.GetName());
			}
		};
	}
}

#include "pydef.h"
