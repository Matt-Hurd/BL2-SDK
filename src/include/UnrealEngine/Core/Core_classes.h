#pragma once
#ifndef CORECLASSES_H
#define CORECLASSES_H

#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_MAX_OBJECT_PATH_COMPONENTS                         6
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EAspectRatioAxisConstraint
/*enum EAspectRatioAxisConstraint
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_MAX                                    = 3
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_MAX                                             = 5
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_MAX                                            = 7
};*/

// Enum Core.AttributeModifier.EModifierType
/*enum EModifierType
{
	MT_Scale                                           = 0,
	MT_PreAdd                                          = 1,
	MT_PostAdd                                         = 2,
	MT_MAX                                             = 3
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

struct FHelper {
public:
	struct FStruct GetStructProperty(class UStructProperty *Prop);
	struct FString* GetStrProperty(class UProperty *Prop);
	class UObject* GetObjectProperty(class UProperty *Prop);
	class UComponent* GetComponentProperty(class UProperty *Prop);
	class UClass* GetClassProperty(class UProperty *Prop);
	struct FName* GetNameProperty(class UProperty *Prop);
	int GetIntProperty(class UProperty * Prop);
	struct FScriptInterface* GetInterfaceProperty(class UProperty *Prop);
	float GetFloatProperty(class UProperty *Prop);
	struct FScriptDelegate* GetDelegateProperty(class UProperty *Prop);
	unsigned char GetByteProperty(class UProperty * Prop);
	bool GetBoolProperty(class UBoolProperty *Prop);
	void* GetPropertyAddress(class UProperty* Prop);
	py::object GetArrayProperty(class UArrayProperty *Prop);
	pybind11::object GetProperty(class UProperty * Prop);

	void SetProperty(class UStructProperty *Prop, const py::object& Val);
	void SetProperty(class UStrProperty *Prop, const py::object& Val);
	void SetProperty(class UObjectProperty *Prop, const py::object& Val);
	void SetProperty(class UComponentProperty *Prop, const py::object& Val);
	void SetProperty(class UClassProperty *Prop, const py::object& Val);
	void SetProperty(class UNameProperty *Prop, const py::object& Val);
	void SetProperty(class UInterfaceProperty *Prop, const py::object& Val);
	void SetProperty(class UDelegateProperty *Prop, const py::object& Val);
	void SetProperty(class UFloatProperty *Prop, const py::object& Val);
	void SetProperty(class UIntProperty *Prop, const py::object& Val);
	void SetProperty(class UByteProperty *Prop, const py::object& Val);
	void SetProperty(class UBoolProperty *boolProp, const py::object& Val);
	void SetProperty(class UArrayProperty *Prop, const py::object& Val);
	void SetProperty(class UProperty *Prop, const py::object& val);
};

template<typename Fn>
inline Fn GetVFunction(const void* instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	__debugbreak();
	return reinterpret_cast<Fn>(vtable[index]);
}


struct FUObjectItem
{
	// Pointer to the allocated object
	class UObject* Object;
	// Internal flags
	int Flags;
	// UObject Owner Cluster Index
	int ClusterRootIndex;
	// Weak Object Pointer Serial number associated with the object
	int SerialNumber;
	// Weak Object Pointer Serial number associated with the object
	int Unknown;
};

struct FChunkedFixedUObjectArray
{
	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};

	/** Master table to chunks of pointers **/
	FUObjectItem** Objects;
	/** If requested, a contiguous memory where all objects are allocated **/
	FUObjectItem* PreAllocatedObjects;
	/** Maximum number of elements **/
	int Max;
	/** Number of elements we currently have **/
	int Count;
	/** Maximum number of chunks **/
	int MaxChunks;
	/** Number of chunks we currently have **/
	int NumChunks;

	UObject* Get(size_t index) {
		return Objects[index / NumElementsPerChunk][index % NumElementsPerChunk].Object;
	}

	UObject* operator()(size_t index)
	{
		return Get(index);
	}
};

// 0x003C
class UObject : FHelper
{
public:
#ifdef ENVIRONMENT64
	// 0x28
	//void*												Vtable;
	int													ObjectFlags;
	int													InternalIndex; 
	class UClass*										Class;
	FName												Name;
	class UObject*										Outer;
	static FChunkedFixedUObjectArray* GObjects();
#else
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    HashNext;                                         		// 0x0004 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x0018 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                InternalIndex;											// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	static TArray< UObject* >* GObjects();
#endif

	const char *GetName() const;
	std::string GetNameCpp() const;
	std::string GetFullName();
	std::string GetObjectName();
	void DumpObject();
	static UObject* Load(UClass* ClassToLoad, const char* ObjectFullName);
	static UObject* Load(const char* ClassName, const char* ObjectFullName);
	static UObject* Find(UClass* Class, const char* ObjectFullName);
	static UObject* Find(const char* ClassName, const char* ObjectFullName);
	static std::vector<UObject*> FindObjectsRegex(const std::string& RegexString);
	static std::vector<UObject*> FindObjectsContaining(const std::string& StringLookup);
	static UClass* FindClass(const char* ClassName, bool Lookup = false);
	bool IsA(UClass* PClass) const;
	class UPackage* GetPackageObject() const;
	static UClass* StaticClass();
	static std::vector<UObject*> FindAll(char* InStr);

	py::object GetProperty(std::string PropName);
	void SetProperty(std::string& PropName, const py::object& Val);
	struct FFunction GetFunction(std::string& PropName);
	//struct FScriptArray GetArrayProperty(std::string& PropName);
	//struct FScriptMap GetMapProperty(std::string& PropName);

	bool IsRelevantForDebugging(class UObject* Source);
	class UObject* GetGlobalDebugTarget();
	void SetGlobalDebugTarget(class UObject* Target);
	void LogContentDebug(const struct FString& Message);
	static struct FString GetLanguage();
	int GetRandomOptionSumFrequency(TArray<float>* FreqList);
	static int GetBuildChangelistNumber();
	static int GetEngineVersion();
	void GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(unsigned char inputByte, bool bSigned);
	unsigned char FloatToByte(float inputFloat, bool bSigned);
	static float UnwindHeading(float A);
	static float FindDeltaAngle(float A1, float A2);
	static float GetHeadingAngle(const struct FVector& Dir);
	static void GetAngularDegreesFromRadians(struct FVector2D* OutFOV);
	static void GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist);
	static bool GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist);
	static bool GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist);
	static struct FVector PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint);
	static bool GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames);
	static void StaticSaveConfig();
	void SaveConfig();
	struct FString GetAttributeModiferDescriptor(const struct FName& AttributeName);
	float GetAttributeValueByName(const struct FName& AttributeName);
	bool RemoveModifier(class UAttributeModifier* mod, const struct FName& AttributeName, bool bSuppressNotify);
	bool AddModifier(class UAttributeModifier* mod, const struct FName& AttributeName, bool bSuppressNotify);
	static class UObject* FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	static class UObject* DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	static struct FName GetEnum(class UObject* E, int I);
	void Disable(const struct FName& ProbeFunc);
	void Enable(const struct FName& ProbeFunc);
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState(const struct FName& NextStateName);
	void BeginState(const struct FName& PreviousStateName);
	void BreakPoint(class UObject* SomeObject);
	void PrintScriptStack();
	void DumpStateStack();
	void PopState(bool bPopAll);
	void PushState(const struct FName& NewState, const struct FName& NewLabel);
	struct FName GetStateName();
	bool IsChildState(const struct FName& TestState, const struct FName& TestParentState);
	bool IsInState(const struct FName& TestState, bool bTestStateStack);
	void GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack);
	static bool IsUTracing();
	static void SetUTracing(bool bShouldUTrace);
	static struct FName GetFuncName();
	static void DebugBreak(int UserFlags, unsigned char DebuggerType);
	static struct FString GetScriptTrace();
	static void ScriptTrace();
	static struct FString ParseLocalizedPropertyPath(const struct FString& PathName);
	static struct FString Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName);
	static void LogIndentedInternal(const struct FString& S, const struct FName& LogTag, int IndentationLevelChange);
	static void WarnInternal(const struct FString& S);
	static void LogInternal(const struct FString& S, const struct FName& Tag);
	static struct FString GetStringForNameBasedObjectPath(const struct FNameBasedObjectPath& ObjectPath);
	static void SetNameBasedObjectPath(class UObject* Object, struct FNameBasedObjectPath* ObjectPath);
	bool FlagHasBeenTrueFor(float TimeSeconds, struct FFlag* theFlag);
	float FlagTimeRemaining(struct FFlag* theFlag);
	float FlagTimeSinceRaised(struct FFlag* theFlag);
	void FlagSetValue(bool bNewValue, bool bForceTimeStamp, struct FFlag* theFlag);
	bool FlagIsLowered(struct FFlag* theFlag);
	bool FlagIsRaised(struct FFlag* theFlag);
	bool FlagIsFalse(struct FFlag* theFlag);
	bool FlagIsTrue(struct FFlag* theFlag);
	void FlagSetTrueTimed(float Duration, struct FFlag* theFlag);
	float SmartVectTimeRemaining(struct FSmartVector* theSV);
	float SmartVectTimeSinceSet(struct FSmartVector* theSV);
	bool SmartVectGetVector(struct FSmartVector* theSV, struct FVector* OutVector);
	bool SmartVectIsSet(struct FSmartVector* theSV);
	void SmartVectSetVectorTimed(const struct FVector& InVector, float Duration, struct FSmartVector* theSV);
	struct FVector SmartVectValue(struct FSmartVector* theSV);
	void SmartVectReset(struct FSmartVector* theSV);
	void SmartVectSetVector(const struct FVector& InVector, bool bUpdateTime, struct FSmartVector* theSV);
	static struct FLinearColor Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	static struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	static struct FLinearColor ColorToLinearColor(const struct FColor& OldColor);
	static struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	static struct FString GetHTMLColor(struct FColor* C);
	static struct FColor LerpColor(const struct FColor& A, const struct FColor& B, float Alpha);
	static struct FColor MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	static struct FColor Add_ColorColor(const struct FColor& A, const struct FColor& B);
	static struct FColor Multiply_ColorFloat(const struct FColor& A, float B);
	static struct FColor Multiply_FloatColor(float A, const struct FColor& B);
	static struct FColor Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FVector2D EvalInterpCurveVector2D(const struct FInterpCurveVector2D& Vector2DCurve, float InVal);
	struct FVector EvalInterpCurveVector(const struct FInterpCurveVector& VectorCurve, float InVal);
	float EvalInterpCurveFloat(const struct FInterpCurveFloat& FloatCurve, float InVal);
	static struct FVector2D vect2d(float InX, float InY);
	static float GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	static float GetRangePctByValue(const struct FVector2D& Range, float Value);
	static float GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	static struct FVector2D SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	static struct FVector2D AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	static struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D* A);
	static struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A);
	static struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	static struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	static struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	static struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	static struct FQuat Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath);
	static struct FRotator QuatToRotator(const struct FQuat& A);
	static struct FQuat QuatFromRotator(const struct FRotator& A);
	static struct FQuat QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	static struct FQuat QuatFindBetween(const struct FVector& A, const struct FVector& B);
	static struct FVector QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	static struct FQuat QuatInvert(const struct FQuat& A);
	static float QuatDot(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat QuatProduct(const struct FQuat& A, const struct FQuat& B);
	static struct FVector MatrixGetAxis(const struct FMatrix& TM, unsigned char Axis);
	static struct FVector MatrixGetOrigin(const struct FMatrix& TM);
	static struct FRotator MatrixGetRotator(const struct FMatrix& TM);
	static struct FMatrix MakeRotationMatrix(const struct FRotator& Rotation);
	static struct FMatrix MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	static struct FVector InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector TransformVector(const struct FMatrix& TM, const struct FVector& A);
	static struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	static bool NotEqual_NameName(const struct FName& A, const struct FName& B);
	static bool EqualEqual_NameName(const struct FName& A, const struct FName& B);
	FScriptInterface QueryInterface(class UClass* InterfaceClass);
	bool IsA(const struct FName& ClassName);
	static bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	static bool NotEqual_InterfaceInterface(const FScriptInterface& A, const FScriptInterface& B);
	static bool EqualEqual_InterfaceInterface(const FScriptInterface& A, const FScriptInterface& B);
	static bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	static bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	static struct FString GuidToString(struct FGuid* G);
	static struct FString PathName(class UObject* CheckObject);
	static TArray<struct FString> SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty);
	static void ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, bool bCullEmpty, TArray<struct FString>* Pieces);
	static void JoinArray(TArray<struct FString> StringArray, const struct FString& delim, bool bIgnoreBlanks, struct FString* out_Result);
	static struct FString GetRightMost(const struct FString& Text);
	static struct FString Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr);
	static int StringHash(const struct FString& S);
	static struct FString Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive);
	static int Asc(const struct FString& S);
	static struct FString Chr(int I);
	static struct FString Locs(const struct FString& S);
	static struct FString Caps(const struct FString& S);
	static struct FString Right(const struct FString& S, int I);
	static struct FString Left(const struct FString& S, int I);
	static struct FString Mid(const struct FString& S, int I, int J);
	static int InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos);
	static int Len(const struct FString& S);
	static struct FString SubtractEqual_StrStr(const struct FString& B, struct FString* A);
	static struct FString AtEqual_StrStr(const struct FString& B, struct FString* A);
	static struct FString ConcatEqual_StrStr(const struct FString& B, struct FString* A);
	static bool ComplementEqual_StrStr(const struct FString& A, const struct FString& B);
	static bool NotEqual_StrStr(const struct FString& A, const struct FString& B);
	static bool EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	static bool GreaterEqual_StrStr(const struct FString& A, const struct FString& B);
	static bool LessEqual_StrStr(const struct FString& A, const struct FString& B);
	static bool Greater_StrStr(const struct FString& A, const struct FString& B);
	static bool Less_StrStr(const struct FString& A, const struct FString& B);
	static struct FString At_StrStr(const struct FString& A, const struct FString& B);
	static struct FString Concat_StrStr(const struct FString& A, const struct FString& B);
	static struct FRotator MakeRotator(int Pitch, int Yaw, int Roll);
	static bool SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis);
	static int ClampRotAxisFromRange(int Current, int Min, int Max);
	static int ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	static void ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis);
	static float RSize(const struct FRotator& R);
	static float RDiff(const struct FRotator& A, const struct FRotator& B);
	static int NormalizeRotAxis(int Angle);
	static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed);
	static struct FRotator RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	static struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	static struct FRotator Normalize(const struct FRotator& Rot);
	static struct FRotator OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	static struct FRotator RotRand(bool bRoll);
	static struct FVector GetRotatorAxis(const struct FRotator& A, int Axis);
	static void GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	static void GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	static bool ClockwiseFrom_IntInt(int A, int B);
	static struct FRotator SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	static struct FRotator AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	static struct FRotator Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator* A);
	static struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator* A);
	static struct FRotator Divide_RotatorFloat(const struct FRotator& A, float B);
	static struct FRotator Multiply_FloatRotator(float A, const struct FRotator& B);
	static struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	static bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ);
	static float NoZDot(const struct FVector& A, const struct FVector& B);
	static struct FVector ClampLength(const struct FVector& V, float MaxLength);
	static struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	static bool IsZero(const struct FVector& A);
	static struct FVector ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	static struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	static struct FVector VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	static struct FVector VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	static struct FVector VRand();
	static struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	static struct FVector Normal(const struct FVector& A);
	static float VSizeSq2D(const struct FVector& A);
	static float VSizeSq(const struct FVector& A);
	static float VSize2D(const struct FVector& A);
	static float VSize(const struct FVector& A);
	static struct FVector SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A);
	static struct FVector AddEqual_VectorVector(const struct FVector& B, struct FVector* A);
	static struct FVector DivideEqual_VectorFloat(float B, struct FVector* A);
	static struct FVector MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A);
	static struct FVector MultiplyEqual_VectorFloat(float B, struct FVector* A);
	static struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	static float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	static bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	static bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	static struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	static struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	static struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Multiply_FloatVector(float A, const struct FVector& B);
	static struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	static struct FVector Subtract_PreVector(const struct FVector& A);
	static float SmoothInterp(float DeltaTime, float InterpSpeed, float deltaDist, float overallDist);
	static float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FPctByRange(float Value, float InMin, float InMax);
	static float RandRange(float InMin, float InMax);
	static float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	static float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	static int FCeil(float A);
	static int FFloor(float A);
	static int Round(float A);
	static float Lerp(float A, float B, float Alpha);
	static float FClamp(float V, float A, float B);
	static float FMax(float A, float B);
	static float FMin(float A, float B);
	static float FRand();
	static float Square(float A);
	static float Sqrt(float A);
	static float Loge(float A);
	static float Exp(float A);
	static float Atan2(float A, float B);
	static float Atan(float A);
	static float Tan(float A);
	static float Acos(float A);
	static float Cos(float A);
	static float Asin(float A);
	static float Sin(float A);
	static float Abs(float A);
	static float SubtractEqual_FloatFloat(float B, float* A);
	static float AddEqual_FloatFloat(float B, float* A);
	static float DivideEqual_FloatFloat(float B, float* A);
	static float MultiplyEqual_FloatFloat(float B, float* A);
	static bool NotEqual_FloatFloat(float A, float B);
	static bool ComplementEqual_FloatFloat(float A, float B);
	static bool EqualEqual_FloatFloat(float A, float B);
	static bool GreaterEqual_FloatFloat(float A, float B);
	static bool LessEqual_FloatFloat(float A, float B);
	static bool Greater_FloatFloat(float A, float B);
	static bool Less_FloatFloat(float A, float B);
	static float Subtract_FloatFloat(float A, float B);
	static float Add_FloatFloat(float A, float B);
	static float Percent_FloatFloat(float A, float B);
	static float Divide_FloatFloat(float A, float B);
	static float Multiply_FloatFloat(float A, float B);
	static float MultiplyMultiply_FloatFloat(float Base, float Exp);
	static float Subtract_PreFloat(float A);
	static struct FString ToHex(int A);
	static int Clamp(int V, int A, int B);
	static int Max(int A, int B);
	static int Min(int A, int B);
	static int Rand(int Max);
	static int SubtractSubtract_Int(int* A);
	static int AddAdd_Int(int* A);
	static int SubtractSubtract_PreInt(int* A);
	static int AddAdd_PreInt(int* A);
	static int SubtractEqual_IntInt(int B, int* A);
	static int AddEqual_IntInt(int B, int* A);
	static int DivideEqual_IntFloat(float B, int* A);
	static int MultiplyEqual_IntFloat(float B, int* A);
	static int Or_IntInt(int A, int B);
	static int Xor_IntInt(int A, int B);
	static int And_IntInt(int A, int B);
	static bool NotEqual_IntInt(int A, int B);
	static bool EqualEqual_IntInt(int A, int B);
	static bool GreaterEqual_IntInt(int A, int B);
	static bool LessEqual_IntInt(int A, int B);
	static bool Greater_IntInt(int A, int B);
	static bool Less_IntInt(int A, int B);
	static int GreaterGreaterGreater_IntInt(int A, int B);
	static int GreaterGreater_IntInt(int A, int B);
	static int LessLess_IntInt(int A, int B);
	static int Subtract_IntInt(int A, int B);
	static int Add_IntInt(int A, int B);
	static int Percent_IntInt(int A, int B);
	static int Divide_IntInt(int A, int B);
	static int Multiply_IntInt(int A, int B);
	static int Subtract_PreInt(int A);
	static int Complement_PreInt(int A);
	static unsigned char SubtractSubtract_Byte(unsigned char* A);
	static unsigned char AddAdd_Byte(unsigned char* A);
	static unsigned char SubtractSubtract_PreByte(unsigned char* A);
	static unsigned char AddAdd_PreByte(unsigned char* A);
	static unsigned char SubtractEqual_ByteByte(unsigned char B, unsigned char* A);
	static unsigned char AddEqual_ByteByte(unsigned char B, unsigned char* A);
	static unsigned char DivideEqual_ByteByte(unsigned char B, unsigned char* A);
	static unsigned char MultiplyEqual_ByteFloat(float B, unsigned char* A);
	static unsigned char MultiplyEqual_ByteByte(unsigned char B, unsigned char* A);
	static bool OrOr_BoolBool(bool A, bool B);
	static bool XorXor_BoolBool(bool A, bool B);
	static bool AndAnd_BoolBool(bool A, bool B);
	static bool NotEqual_BoolBool(bool A, bool B);
	static bool EqualEqual_BoolBool(bool A, bool B);
	static bool Not_PreBool(bool A);
	// Virtual Functions

	inline void PostEditChangeProperty(FPropertyChangedEvent* PropertyChangedEvent)
	{
		return GetVFunction<void(*)(UObject *, FPropertyChangedEvent * PropertyChangedEvent)>(this, 19)(this, PropertyChangedEvent);
	}

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
#ifdef ENVIRONMENT64
		return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 65)(this, function, parms);
#else
		return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 67)(this, function, parms);
#endif
	}

	virtual void Dummy() {};
};

// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                            		// 0x003C (0x0024) MISSED OFFSET
};

// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
};

// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                            		// 0x003C (0x0084) MISSED OFFSET
};

// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x003C (0x000C) MISSED OFFSET
};

// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x003C (0x0004) MISSED OFFSET
};

// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                            		// 0x003C (0x003C) MISSED OFFSET
};

// 0x0534 (0x0570 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x534];                           		// 0x003C (0x0534) MISSED OFFSET
};

// 0x00A8 (0x0618 - 0x0570)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xA8];                            		// 0x0570 (0x00A8) MISSED OFFSET
};

// 0x05C4 (0x0B34 - 0x0570)
/*
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x5C4];                           		// 0x0570 (0x05C4) MISSED OFFSET
};
*/

// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject {

};

// 0x0004 (0x0040 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY
};

// 0x0040 (0x0080 - 0x0040)
class UProperty : public UField
{
public:
	int					ArrayDim;
	int					ElementSize;
	unsigned int		PropertyFlags;
	unsigned char		UnknownData00[0x14];
	int					Offset_Internal;
	UProperty*			PropertyLinkNext;
	unsigned char		UnknownData01[0x18];
};

// 0x004C (0x008C - 0x0040)
class UStruct : public UField
{
public:
#ifndef ENVIRONMENT64
	unsigned char			UnknownData00[0x8];
#endif
	class UStruct*			SuperField;
	class UField*			Children;
#ifndef ENVIRONMENT64
	unsigned short			PropertySize;
	char					UnknownData01[0x3A];
#else
	int						PropertySize;
	int						MinAlignment;
	char					UnknownData01[0x40];
#endif

	UObject* FindChildByName(FName InName) const
	{
		const UStruct *thisField = this;
		while (thisField)
		{
			for (UField* Child = thisField->Children; Child != NULL; Child = Child->Next)
				if (Child->Name == InName)
					return Child;
			thisField = thisField->SuperField;
		}

		return NULL;
	}
};

// 0x001C (0x00A8 - 0x008C)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1C];                            		// 0x008C (0x001C) MISSED OFFSET
};

class UFunction : public UStruct
{
public:
#ifdef ENVIRONMENT64
	int												FunctionFlags;
	short                                           RepOffset;
	char                                            NumParams;
	short                                           ParamsSize;
	short											ReturnValueOffset;
	short											RPCResponseId;
	class UProperty*								FirstPropertyToInit;
	class UFunction*								EventGraphFunction;
	int												EventGraphCallOffset;
	void* Func;
#else
	unsigned long		FunctionFlags;
	unsigned short		iNative;
	unsigned short		RepOffset;
	struct FName		FriendlyName;
	unsigned char		OperPrecedence;
	unsigned char		NumParams;
	unsigned short		ParamsSize;
	unsigned long		ReturnValueOffset;
	void*				Func;
#endif
};

// 0x0004 (0x0084 - 0x0080)
class UStructProperty : public UProperty
{
public:
	UScriptStruct* Struct_DONOTUSE;
	UScriptStruct *GetStruct() {
		if (UnrealSDK::EngineVersion <= 8630)
			return ((UScriptStruct **)(((char *)this) + 0x74))[0];
		else
			return Struct_DONOTUSE;
	}
};

// 0x0000 (0x0080 - 0x0080)
class UStrProperty : public UProperty {};

// 0x0004 (0x0084 - 0x0080)
class UObjectProperty : public UProperty
{
public:
	UObject* Object_DONOTUSE;
	UObject *GetObject() {
		if (UnrealSDK::EngineVersion <= 8630)
			return ((UObject **)(((char *)this) + 0x74))[0];
		else
			return Object_DONOTUSE;
	}
};

// 0x0000 (0x0084 - 0x0084)
class UComponentProperty : public UObjectProperty {};

// 0x0004 (0x0088 - 0x0084)
class UClassProperty : public UObjectProperty
{
public:
	UClass* MetaClass;
};

// 0x0000 (0x0080 - 0x0080)
class UNameProperty : public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0000 (0x0080 - 0x0080)
class UIntProperty : public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UIntAttributeProperty : public UIntProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UInterfaceProperty : public UProperty
{
public:
	UClass *InterfaceClass_DONOTUSE;
	UClass *GetInterfaceClass() {
		if (UnrealSDK::EngineVersion <= 8630)
			return ((UClass **)(((char *)this) + 0x74))[0];
		else
			return InterfaceClass_DONOTUSE;
	}
};

// 0x0000 (0x0080 - 0x0080)
class UFloatProperty : public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UFloatAttributeProperty : public UFloatProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0008 (0x0088 - 0x0080)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET
};

// 0x0008 (0x008C - 0x0084)
class UByteAttributeProperty : public UByteProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0084 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UBoolProperty : public UProperty
{
public:
	unsigned int Mask_DONOTUSE;
	unsigned int GetMask() {
		if (UnrealSDK::EngineVersion <= 8630)
			return ((unsigned int *)(((char *)this) + 0x74))[0];
		else
			return Mask_DONOTUSE;
	}
};

// 0x0004 (0x0084 - 0x0080)
class UArrayProperty : public UProperty
{
public:
	UProperty *Inner_DONOTUSE;
	UProperty *GetInner() {
		if (UnrealSDK::EngineVersion <= 8630)
			return ((UProperty **)(((char *)this) + 0x74))[0];
		else
			return Inner_DONOTUSE;
	}
};

// 0x000C (0x004C - 0x0040)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET
};

// 0x000C (0x004C - 0x0040)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET
};

// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                   		// 0x003C (0x0004) [0x0000000000000000]
	class UClass*                                      ContextClass;                                     		// 0x0040 (0x0004) [0x0000000000000000]
	struct FString                                     Description;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCreateNew : 1;                                   		// 0x005C (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      bEditAfterNew : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000002]
	unsigned long                                      bEditorImport : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000004]
	unsigned long                                      bText : 1;                                        		// 0x005C (0x0004) [0x0000000000000000] [0x00000008]
	int                                                AutoPriority;                                     		// 0x0060 (0x0004) [0x0000000000000000]
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory {};

// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[0xC];                             		// 0x0058 (0x000C) MISSED OFFSET
};

// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002]

public:
	struct FVector GetVectorValue(float F, int LastExtreme);
};

// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002]

public:
	float GetFloatValue(float F);
};

// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002]
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004]
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008]
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010]

public:
	int Main(struct FString Params);
};

// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:
	int Main(struct FString Params);
};

// 0x0008 (0x0044 - 0x003C)
class UAttributeModifier : public UObject
{
public:
	unsigned char                                      Type;                                             		// 0x003C (0x0001) [0x0000000000000000]
	float                                              Value;                                            		// 0x0040 (0x0004) [0x0000000000000000]
};

// 0x0044 (0x00D0 - 0x008C)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x44];                            		// 0x008C (0x0044) MISSED OFFSET
};

// 0x00A8 (0x00E4 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                            		// 0x003C (0x00A8) MISSED OFFSET
};

// 0x0100 (0x01D0 - 0x00D0)
class UClass : public UState
{
public:
	unsigned long		bCooked : 1;
	FPointer			ClassAddReferencedObjects;
	unsigned long		ClassCastFlags;
	FName				ClassConfigName;
	FPointer			ClassConstructor;
	UObject				*ClassDefaultObject;
	unsigned int		ClassFlags;
	unsigned char       UnknownData00[0xD8];                           		// 0x00D0 (0x0100) MISSED OFFSET

	UObject* CreateDefaultObject()
	{
		return UnrealSDK::pGetDefaultObject(this, 0);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class");
		return ptr;
	}
};

struct FFunction
{
	UObject *obj;
	UFunction *func;

private:
	FHelper* GenerateParams(const py::args& args, const py::kwargs& kwargs, FHelper* params);

public:
	py::object GetReturn(FHelper* params);
	py::object Call(py::args args, py::kwargs kwargs);
};

struct FOutParmRec
{
	UProperty		*Property;
	unsigned char	*PropAddr;
	FOutParmRec		*NextOutParm;
};

struct FFrame : public FOutputDevice
{
	class UFunction* Node;
	class UObject* Object;
	unsigned char* Code;
	unsigned char* Locals;

	struct FFrame* PreviousFrame;
	struct FOutParmRec* Outparams;

public:
	void SkipFunction();
};

struct FStruct
{
	UStruct		*structType;
	void		*base;
	FStruct(UStruct* s, void* b);

	pybind11::object GetProperty(const std::string& PropName) const;
	void SetProperty(std::string& PropName, py::object value) const;
	py::str Repr() const;
};

struct FArray {
	TArray <char> *arr;
	UProperty *type;
	unsigned int IterCounter;

	FArray(TArray <char>* array, UProperty* s);

	py::object GetItem(unsigned int i) const;
	void SetItem(unsigned int I, py::object Obj) const;
	long GetAddress() const;
	FArray* Iter();
	py::object Next();
	py::str Repr();
};

typedef void* (__thiscall* tMalloc)(void***, unsigned long, unsigned int);
typedef void(__thiscall* tFree)(void***, void*);

#ifdef _MSC_VER
#pragma pack ( pop )
#endif

#endif