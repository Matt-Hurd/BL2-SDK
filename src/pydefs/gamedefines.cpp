#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_gamedefines(py::module &m)
{
	py::class_< FName >(m, "FName")
		.def(py::init<>())
		.def(py::init<const std::string&>())
		.def(py::init<const std::string&, int>())
		.def_static("Names", &FName::Names, py::return_value_policy::reference)
		.def_readwrite("Index", &FName::Index)
		.def_readwrite("Number", &FName::Number)
		.def("GetName", &FName::GetName, py::return_value_policy::reference)
		;
	py::class_< FNameEntry >(m, "FNameEntry")
		.def(py::init<>())
		.def_readonly("Name", &FNameEntry::AnsiName)
		;
	py::class_< FOutputDevice >(m, "FOutputDevice")
		.def(py::init<>())
		.def_readwrite("VfTable", &FOutputDevice::VfTable, py::return_value_policy::reference)
		.def_readwrite("bAllowSuppression", &FOutputDevice::bAllowSuppression, py::return_value_policy::reference)
		.def_readwrite("bSuppressEventTag", &FOutputDevice::bSuppressEventTag, py::return_value_policy::reference)
		.def_readwrite("bAutoEmitLineTerminator", &FOutputDevice::bAutoEmitLineTerminator, py::return_value_policy::reference)
		;
	py::class_< FFrame, FOutputDevice >(m, "FFrame")
		.def_readwrite("Node", &FFrame::Node, py::return_value_policy::reference)
		.def_readwrite("Object", &FFrame::Object, py::return_value_policy::reference)
		.def_readwrite("PreviousFrame", &FFrame::PreviousFrame, py::return_value_policy::reference)
		.def_property("Code", [](FFrame &self) { return (int)self.Code; }, [](FFrame &self, int value) {self.Code = (unsigned char *)value; })
		.def_property("Locals", [](FFrame &self) { return (int)self.Locals; }, [](FFrame &self, int value) {self.Locals = (unsigned char *)value; })
		.def("SkipFunction", &FFrame::SkipFunction, py::return_value_policy::reference)
		;

	py::class_< FString >(m, "FString")
		.def(py::init<wchar_t*>())
		.def_readwrite("Count", &FString::Count)
		.def_readwrite("Max", &FString::Max)
		.def_readwrite("Data", &FString::Data)
		.def("AsString", &FString::AsString)
		;

	py::class_< FScriptDelegate >(m, "FScriptDelegate")
		.def(py::init<>())
		;
}