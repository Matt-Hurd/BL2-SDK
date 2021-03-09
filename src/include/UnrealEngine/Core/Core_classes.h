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

struct FHelper
{
	struct FStruct GetStructProperty(class UStructProperty* Prop);
	struct FString* GetStrProperty(class UProperty* Prop);
	class UObject* GetObjectProperty(class UProperty* Prop);
	class UComponent* GetComponentProperty(class UProperty* Prop);
	class UClass* GetClassProperty(class UProperty* Prop);
	struct FName* GetNameProperty(class UProperty* Prop);
	int GetIntProperty(class UProperty* Prop);
	struct FScriptInterface* GetInterfaceProperty(class UProperty* Prop);
	float GetFloatProperty(class UProperty* Prop);
	struct FScriptDelegate* GetDelegateProperty(class UProperty* Prop);
	unsigned char GetByteProperty(class UProperty* Prop);
	bool GetBoolProperty(class UBoolProperty* Prop);
	void* GetPropertyAddress(class UProperty* Prop);
	py::object GetArrayProperty(class UArrayProperty* Prop);
	pybind11::object GetProperty(class UProperty* Prop);

	void SetProperty(class UStructProperty* Prop, const py::object& Val);
	void SetProperty(class UStrProperty* Prop, const py::object& Val);
	void SetProperty(class UObjectProperty* Prop, const py::object& Val);
	void SetProperty(class UComponentProperty* Prop, const py::object& Val);
	void SetProperty(class UClassProperty* Prop, const py::object& Val);
	void SetProperty(class UNameProperty* Prop, const py::object& Val);
	void SetProperty(class UInterfaceProperty* Prop, const py::object& Val);
	void SetProperty(class UDelegateProperty* Prop, const py::object& Val);
	void SetProperty(class UFloatProperty* Prop, const py::object& Val);
	void SetProperty(class UIntProperty* Prop, const py::object& Val);
	void SetProperty(class UByteProperty* Prop, const py::object& Val);
	void SetProperty(class UBoolProperty* boolProp, const py::object& Val);
	void SetProperty(class UArrayProperty* Prop, const py::object& Val);
	void SetProperty(class UProperty* Prop, const py::object& val);
};

// 0x003C
class UObject: FHelper
{
public:
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    HashNext;                                         		// 0x0004 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject* Linker;                                           		// 0x0018 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject* Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass* Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject* ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

public:
	static TArray< UObject* >* GObjects();
	const char* GetName() const;
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
	virtual void VirtualFunction00() {};																			// 0x005838A0 (0x00)
	virtual void VirtualFunction01() {};																			// 0x005FC030 (0x04)
	virtual void VirtualFunction02() {};																			// 0x005953C0 (0x08)
	virtual void VirtualFunction03() {};																			// 0x00FBA130 (0x0C)
	virtual void VirtualFunction04() {};																			// 0x01218070 (0x10)
	virtual void VirtualFunction05() {};																			// 0x00F90510 (0x14)
	virtual void VirtualFunction06() {};																			// 0x0073DA00 (0x18)
	virtual void VirtualFunction07() {};																			// 0x0040C150 (0x1C)
	virtual void VirtualFunction08() {};																			// 0x00BD3FF0 (0x20)
	virtual void VirtualFunction09() {};																			// 0x0100ACD0 (0x24)
	virtual void VirtualFunction10() {};																			// 0x005838A0 (0x28)
	virtual void VirtualFunction11() {};																			// 0x008C0E10 (0x2C)
	virtual void VirtualFunction12() {};																			// 0x00F64D40 (0x30)
	virtual void VirtualFunction13() {};																			// 0x009A7490 (0x34)
	virtual void VirtualFunction14() {};																			// 0x00271DD0 (0x38)
	virtual void VirtualFunction15() {};																			// 0x0053CE50 (0x3C)
	virtual void VirtualFunction16() {};																			// 0x00F90510 (0x40)
	virtual void VirtualFunction17() {};																			// 0x00C6EB60 (0x44)
	virtual void VirtualFunction18() {};																			// 0x009CBC30 (0x48)
	virtual void PostEditChangeProperty(FPropertyChangedEvent* PropertyChangedEvent) {};							// 0x00AEAFA0 (0x4C)
	virtual void VirtualFunction20() {};																			// 0x00A28430 (0x50)
	virtual void VirtualFunction21() {};																			// 0x00601380 (0x54)
	virtual void VirtualFunction22() {};																			// 0x0048AE50 (0x58)
	virtual void VirtualFunction23() {};																			// 0x005F68F0 (0x5C)
	virtual void VirtualFunction24() {};																			// 0x00F90510 (0x60)
	virtual void VirtualFunction25() {};																			// 0x00F90510 (0x64)
	virtual void VirtualFunction26() {};																			// 0x006B8E90 (0x68)
	virtual void VirtualFunction27() {};																			// 0x0048AE50 (0x6C)
	virtual void VirtualFunction28() {};																			// 0x005F68F0 (0x70)
	virtual void VirtualFunction29() {};																			// 0x0048AE50 (0x74)
	virtual void VirtualFunction30() {};																			// 0x005F68F0 (0x78)
	virtual void VirtualFunction31() {};																			// 0x00C611D0 (0x7C)
	virtual void VirtualFunction32() {};																			// 0x0041D5C0 (0x80)
	virtual void VirtualFunction33() {};																			// 0x0108A6C0 (0x84)
	virtual void VirtualFunction34() {};																			// 0x00F90510 (0x88)
	virtual void VirtualFunction35() {};																			// 0x009F3B90 (0x8C)
	virtual void VirtualFunction36() {};																			// 0x00ADAF50 (0x90)
	virtual void VirtualFunction37() {};																			// 0x0080C1C0 (0x94)
	virtual void VirtualFunction38() {};																			// 0x00BFA410 (0x98)
	virtual void VirtualFunction39() {};																			// 0x0048D800 (0x9C)
	virtual void VirtualFunction40() {};																			// 0x00186780 (0xA0)
	virtual void VirtualFunction41() {};																			// 0x00556B50 (0xA4)
	virtual void VirtualFunction42() {};																			// 0x00186780 (0xA8)
	virtual void VirtualFunction43() {};																			// 0x00EA93F0 (0xAC)
	virtual void VirtualFunction44() {};																			// 0x00EA93F0 (0xB0)
	virtual void VirtualFunction45() {};																			// 0x00F90510 (0xB4)
	virtual void VirtualFunction46() {};																			// 0x00186780 (0xB8)
	virtual void VirtualFunction47() {};																			// 0x0094CB90 (0xBC)
	virtual void VirtualFunction48() {};																			// 0x00BC6F40 (0xC0)
	virtual void VirtualFunction49() {};																			// 0x00525190 (0xC4)
	virtual void VirtualFunction50() {};																			// 0x00B01BC0 (0xC8)
	virtual void VirtualFunction51() {};																			// 0x01218070 (0xCC)
	virtual void VirtualFunction52() {};																			// 0x01218070 (0xD0)
	virtual void VirtualFunction53() {};																			// 0x00EA93F0 (0xD4)
	virtual void VirtualFunction54() {};																			// 0x00FA4230 (0xD8)
	virtual void VirtualFunction55() {};																			// 0x0020B6A0 (0xDC)
	virtual void VirtualFunction56() {};																			// 0x00F883C0 (0xE0)
	virtual void VirtualFunction57() {};																			// 0x00186780 (0xE4)
	virtual void VirtualFunction58() {};																			// 0x00D28B70 (0xE8)
	virtual void VirtualFunction59() {};																			// 0x00D57990 (0xEC)
	virtual void VirtualFunction60() {};																			// 0x00676A60 (0xF0)
	virtual void VirtualFunction61() {};																			// 0x00186780 (0xF4)
	virtual void VirtualFunction62() {};																			// 0x00B05370 (0xF8)
	virtual void VirtualFunction63() {};																			// 0x00896B70 (0xFC)
	virtual void VirtualFunction64() {};																			// 0x0028AA90 (0x100)
	virtual void VirtualFunction65() {};																			// 0x00EE7430 (0x104)
	virtual void VirtualFunction66() {};																			// 0x00592990 (0x108)
	virtual void ProcessEvent(class UFunction* pFunction, void* params, void* pResult = NULL) {};					// 0x00F757C0 (0x10C)
	virtual void VirtualFunction68() {};																			// 0x001E10C0 (0x110)
	virtual void VirtualFunction69() {};																			// 0x01218070 (0x114)
	virtual void VirtualFunction70() {};																			// 0x00782B80 (0x118)
	virtual void VirtualFunction71() {};																			// 0x00D15C80 (0x11C)
	virtual void VirtualFunction72() {};																			// 0x00E96F80 (0x120)
	virtual void VirtualFunction73() {};																			// 0x01074DF0 (0x124)
	virtual void VirtualFunction74() {};																			// 0x002A01D0 (0x128)
	virtual void VirtualFunction75() {};																			// 0x00196730 (0x12C)
	virtual void VirtualFunction76() {};																			// 0x005C6A60 (0x130)
	virtual void VirtualFunction77() {};																			// 0x00186780 (0x134)
	virtual void VirtualFunction78() {};																			// 0x00EA93F0 (0x138)
	virtual void VirtualFunction79() {};																			// 0x00A208B0 (0x13C)
	virtual void VirtualFunction80() {};																			// 0x001909C0 (0x140)
	virtual void VirtualFunction81() {};																			// 0x00F9ECE0 (0x144)
	virtual void VirtualFunction82() {};																			// 0x005838A0 (0x148)
	virtual void VirtualFunction83() {};																			// 0x003AF620 (0x14C)
	virtual int VirtualFunction84() { return 0; };																	// 0x00C22440 (0x150)
	virtual void VirtualFunction85() {};																			// 0x001BDB80 (0x154)
	virtual void VirtualFunction86() {};																			// 0x00CA2440 (0x158)
	virtual void VirtualFunction87() {};																			// 0x00D78FB0 (0x15C)
	virtual void VirtualFunction88() {};																			// 0x00747BF0 (0x160)
	virtual void VirtualFunction89() {};																			// 0x001F39F0 (0x164)
	virtual void VirtualFunction90() {};																			// 0x00A07A80 (0x168)
	virtual void VirtualFunction91() {};																			// 0x0080EE20 (0x16C)
	virtual void VirtualFunction92() {};																			// 0x005838A0 (0x170)
	virtual void VirtualFunction93() {};																			// 0x006F5530 (0x174)
	virtual void VirtualFunction94() {};																			// 0x00C7E830 (0x178)
	virtual void VirtualFunction95() {};																			// 0x00FBA130 (0x17C)
	virtual void VirtualFunction96() {};																			// 0x01218070 (0x180)
	virtual void VirtualFunction97() {};																			// 0x00F90510 (0x184)
	virtual void VirtualFunction98() {};																			// 0x0073DA00 (0x188)
	virtual void VirtualFunction99() {};																			// 0x0040C150 (0x18C)
	virtual void VirtualFunction100() {};																			// 0x0040C460 (0x190)
	virtual void VirtualFunction101() {};																			// 0x0100ACD0 (0x194)
	virtual void VirtualFunction102() {};																			// 0x005838A0 (0x198)
	virtual void VirtualFunction103() {};																			// 0x008C0E10 (0x19C)
	virtual void VirtualFunction104() {};																			// 0x006BBAE0 (0x1A0)
	virtual void VirtualFunction105() {};																			// 0x00F61D10 (0x1A4)
	virtual void VirtualFunction106() {};																			// 0x00271DD0 (0x1A8)
	virtual void VirtualFunction107() {};																			// 0x0053CE50 (0x1AC)
	virtual void VirtualFunction108() {};																			// 0x00F90510 (0x1B0)
	virtual void VirtualFunction109() {};																			// 0x00C6EB60 (0x1B4)
	virtual void VirtualFunction110() {};																			// 0x009CBC30 (0x1B8)
	virtual void VirtualFunction111() {};																			// 0x00AEAFA0 (0x1BC)
	virtual void VirtualFunction112() {};																			// 0x00A28430 (0x1C0)
	virtual void VirtualFunction113() {};																			// 0x00601380 (0x1C4)
	virtual void VirtualFunction114() {};																			// 0x0048AE50 (0x1C8)
	virtual void VirtualFunction115() {};																			// 0x005F68F0 (0x1CC)
	virtual void VirtualFunction116() {};																			// 0x00F90510 (0x1D0)
	virtual void VirtualFunction117() {};																			// 0x00F90510 (0x1D4)
	virtual void VirtualFunction118() {};																			// 0x006B8E90 (0x1D8)
	virtual void VirtualFunction119() {};																			// 0x0048AE50 (0x1DC)
	virtual void VirtualFunction120() {};																			// 0x005F68F0 (0x1E0)
	virtual void VirtualFunction121() {};																			// 0x0048AE50 (0x1E4)
	virtual void VirtualFunction122() {};																			// 0x005F68F0 (0x1E8)
	virtual void VirtualFunction123() {};																			// 0x00C611D0 (0x1EC)
	virtual void VirtualFunction124() {};																			// 0x0041D5C0 (0x1F0)
	virtual void VirtualFunction125() {};																			// 0x0108A6C0 (0x1F4)
	virtual void VirtualFunction126() {};																			// 0x00F90510 (0x1F8)
	virtual void VirtualFunction127() {};																			// 0x002BF5B0 (0x1FC)
	virtual void VirtualFunction128() {};																			// 0x00ADAF50 (0x200)
	virtual void VirtualFunction129() {};																			// 0x0080C1C0 (0x204)
	virtual void VirtualFunction130() {};																			// 0x00BFA410 (0x208)
	virtual void VirtualFunction131() {};																			// 0x0048D800 (0x20C)
	virtual void VirtualFunction132() {};																			// 0x00186780 (0x210)
	virtual void VirtualFunction133() {};																			// 0x00556B50 (0x214)
	virtual void VirtualFunction134() {};																			// 0x00186780 (0x218)
	virtual void VirtualFunction135() {};																			// 0x00EA93F0 (0x21C)
	virtual void VirtualFunction136() {};																			// 0x00EA93F0 (0x220)
	virtual void VirtualFunction137() {};																			// 0x00F90510 (0x224)
	virtual void VirtualFunction138() {};																			// 0x00186780 (0x228)
	virtual void VirtualFunction139() {};																			// 0x0094CB90 (0x22C)
	virtual void VirtualFunction140() {};																			// 0x00BC6F40 (0x230)
	virtual void VirtualFunction141() {};																			// 0x004EC630 (0x234)
	virtual void VirtualFunction142() {};																			// 0x001C3BE0 (0x238)
	virtual void VirtualFunction143() {};																			// 0x01218070 (0x23C)
	virtual void VirtualFunction144() {};																			// 0x01218070 (0x240)
	virtual void VirtualFunction145() {};																			// 0x00EA93F0 (0x244)
	virtual void VirtualFunction146() {};																			// 0x0064D2A0 (0x248)
	virtual void VirtualFunction147() {};																			// 0x0020B6A0 (0x24C)
	virtual void VirtualFunction148() {};																			// 0x00F883C0 (0x250)
	virtual void VirtualFunction149() {};																			// 0x00186780 (0x254)
	virtual void VirtualFunction150() {};																			// 0x00D28B70 (0x258)
	virtual void VirtualFunction151() {};																			// 0x005A83E0 (0x25C)
	virtual void VirtualFunction152() {};																			// 0x00676A60 (0x260)
	virtual void VirtualFunction153() {};																			// 0x00186780 (0x264)
	virtual void VirtualFunction154() {};																			// 0x00B05370 (0x268)
	virtual void VirtualFunction155() {};																			// 0x00896B70 (0x26C)
	virtual void VirtualFunction156() {};																			// 0x0028AA90 (0x270)
	virtual void VirtualFunction157() {};																			// 0x00EE7430 (0x274)
	virtual void VirtualFunction158() {};																			// 0x01218070 (0x278)
	virtual void VirtualFunction159() {};																			// 0x00F757C0 (0x27C)
	virtual void VirtualFunction160() {};																			// 0x001E10C0 (0x280)
	virtual void VirtualFunction161() {};																			// 0x01218070 (0x284)
	virtual void VirtualFunction162() {};																			// 0x00782B80 (0x288)
	virtual void VirtualFunction163() {};																			// 0x00D15C80 (0x28C)
	virtual void VirtualFunction164() {};																			// 0x00E96F80 (0x290)
	virtual void VirtualFunction165() {};																			// 0x01074DF0 (0x294)
	virtual void VirtualFunction166() {};																			// 0x002A01D0 (0x298)
	virtual void VirtualFunction167() {};																			// 0x00196730 (0x29C)
	virtual void VirtualFunction168() {};																			// 0x005C6A60 (0x2A0)
	virtual void VirtualFunction169() {};																			// 0x00186780 (0x2A4)
	virtual void VirtualFunction170() {};																			// 0x00EA93F0 (0x2A8)
	virtual void VirtualFunction171() {};																			// 0x00A208B0 (0x2AC)
	virtual void VirtualFunction172() {};																			// 0x001909C0 (0x2B0)
	virtual void VirtualFunction173() {};																			// 0x0079C5F0 (0x2B4)
	virtual void VirtualFunction174() {};																			// 0x0049B6B0 (0x2B8)
	virtual void VirtualFunction175() {};																			// 0x00AD2660 (0x2BC)
	virtual void VirtualFunction176() {};																			// 0x00220D10 (0x2C0)
	virtual void VirtualFunction177() {};																			// 0x00D050A0 (0x2C4)
	virtual void VirtualFunction178() {};																			// 0x008CF2C0 (0x2C8)
	virtual void VirtualFunction179() {};																			// 0x0019EBA0 (0x2CC)
	virtual void VirtualFunction180() {};																			// 0x00F90510 (0x2D0)
	virtual void VirtualFunction181() {};																			// 0x00186780 (0x2D4)
	virtual void VirtualFunction182() {};																			// 0x005838A0 (0x2D8)
	virtual void VirtualFunction183() {};																			// 0x0045F890 (0x2DC)
	virtual void VirtualFunction184() {};																			// 0x00B5DA00 (0x2E0)
	virtual void VirtualFunction185() {};																			// 0x00FBA130 (0x2E4)
	virtual void VirtualFunction186() {};																			// 0x01218070 (0x2E8)
	virtual void VirtualFunction187() {};																			// 0x00F90510 (0x2EC)
	virtual void VirtualFunction188() {};																			// 0x0073DA00 (0x2F0)
	virtual void VirtualFunction189() {};																			// 0x0040C150 (0x2F4)
	virtual void VirtualFunction190() {};																			// 0x0040C460 (0x2F8)
	virtual void VirtualFunction191() {};																			// 0x0100ACD0 (0x2FC)
	virtual void VirtualFunction192() {};																			// 0x005838A0 (0x300)
	virtual void VirtualFunction193() {};																			// 0x008C0E10 (0x304)
	virtual void VirtualFunction194() {};																			// 0x006BBAE0 (0x308)
	virtual void VirtualFunction195() {};																			// 0x0051FE00 (0x30C)
	virtual void VirtualFunction196() {};																			// 0x00271DD0 (0x310)
	virtual void VirtualFunction197() {};																			// 0x0053CE50 (0x314)
	virtual void VirtualFunction198() {};																			// 0x00F90510 (0x318)
	virtual void VirtualFunction199() {};																			// 0x00C6EB60 (0x31C)
	virtual void VirtualFunction200() {};																			// 0x009CBC30 (0x320)
	virtual void VirtualFunction201() {};																			// 0x00AEAFA0 (0x324)
	virtual void VirtualFunction202() {};																			// 0x00A28430 (0x328)
	virtual void VirtualFunction203() {};																			// 0x00601380 (0x32C)
	virtual void VirtualFunction204() {};																			// 0x0048AE50 (0x330)
	virtual void VirtualFunction205() {};																			// 0x005F68F0 (0x334)
	virtual void VirtualFunction206() {};																			// 0x00F90510 (0x338)
	virtual void VirtualFunction207() {};																			// 0x00F90510 (0x33C)
	virtual void VirtualFunction208() {};																			// 0x006B8E90 (0x340)
	virtual void VirtualFunction209() {};																			// 0x0048AE50 (0x344)
	virtual void VirtualFunction210() {};																			// 0x005F68F0 (0x348)
	virtual void VirtualFunction211() {};																			// 0x0048AE50 (0x34C)
	virtual void VirtualFunction212() {};																			// 0x005F68F0 (0x350)
	virtual void VirtualFunction213() {};																			// 0x00C611D0 (0x354)
	virtual void VirtualFunction214() {};																			// 0x0041D5C0 (0x358)
	virtual void VirtualFunction215() {};																			// 0x0108A6C0 (0x35C)
	virtual void VirtualFunction216() {};																			// 0x00F90510 (0x360)
	virtual void VirtualFunction217() {};																			// 0x002BF5B0 (0x364)
	virtual void VirtualFunction218() {};																			// 0x00ADAF50 (0x368)
	virtual void VirtualFunction219() {};																			// 0x0080C1C0 (0x36C)
	virtual void VirtualFunction220() {};																			// 0x00BFA410 (0x370)
	virtual void VirtualFunction221() {};																			// 0x0048D800 (0x374)
	virtual void VirtualFunction222() {};																			// 0x00186780 (0x378)
	virtual void VirtualFunction223() {};																			// 0x00556B50 (0x37C)
	virtual void VirtualFunction224() {};																			// 0x00186780 (0x380)
	virtual void VirtualFunction225() {};																			// 0x00EA93F0 (0x384)
	virtual void VirtualFunction226() {};																			// 0x00EA93F0 (0x388)
	virtual void VirtualFunction227() {};																			// 0x00F90510 (0x38C)
	virtual void VirtualFunction228() {};																			// 0x00186780 (0x390)
	virtual void VirtualFunction229() {};																			// 0x0094CB90 (0x394)
	virtual void VirtualFunction230() {};																			// 0x00BC6F40 (0x398)
	virtual void VirtualFunction231() {};																			// 0x004EC630 (0x39C)
	virtual void VirtualFunction232() {};																			// 0x001C3BE0 (0x3A0)
	virtual void VirtualFunction233() {};																			// 0x01218070 (0x3A4)
	virtual void VirtualFunction234() {};																			// 0x01218070 (0x3A8)
	virtual void VirtualFunction235() {};																			// 0x00EA93F0 (0x3AC)
	virtual void VirtualFunction236() {};																			// 0x0064D2A0 (0x3B0)
	virtual void VirtualFunction237() {};																			// 0x0020B6A0 (0x3B4)
	virtual void VirtualFunction238() {};																			// 0x00F883C0 (0x3B8)
	virtual void VirtualFunction239() {};																			// 0x00186780 (0x3BC)
	virtual void VirtualFunction240() {};																			// 0x00D28B70 (0x3C0)
	virtual void VirtualFunction241() {};																			// 0x005A83E0 (0x3C4)
	virtual void VirtualFunction242() {};																			// 0x00676A60 (0x3C8)
	virtual void VirtualFunction243() {};																			// 0x00186780 (0x3CC)
	virtual void VirtualFunction244() {};																			// 0x00B05370 (0x3D0)
	virtual void VirtualFunction245() {};																			// 0x00896B70 (0x3D4)
	virtual void VirtualFunction246() {};																			// 0x0028AA90 (0x3D8)
	virtual void VirtualFunction247() {};																			// 0x00EE7430 (0x3DC)
	virtual void VirtualFunction248() {};																			// 0x01218070 (0x3E0)
	virtual void VirtualFunction249() {};																			// 0x00F757C0 (0x3E4)
	virtual void VirtualFunction250() {};																			// 0x001E10C0 (0x3E8)
	virtual void VirtualFunction251() {};																			// 0x01218070 (0x3EC)
	virtual void VirtualFunction252() {};																			// 0x00782B80 (0x3F0)
	virtual void VirtualFunction253() {};																			// 0x00D15C80 (0x3F4)
	virtual void VirtualFunction254() {};																			// 0x00E96F80 (0x3F8)
	virtual void VirtualFunction255() {};																			// 0x01074DF0 (0x3FC)
};

// 0x0024 (0x0060 - 0x003C)
class UTextBuffer: public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                            		// 0x003C (0x0024) MISSED OFFSET
};

// 0x0004 (0x0040 - 0x003C)
class USubsystem: public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
};

// 0x0104 (0x0144 - 0x0040)
class USystem: public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ScreenShotPath;                                   		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           IgnoredPaths;                                     		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRCheatScriptPaths;                               		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00F0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x00FC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x0108 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AudioFileCacheExtension;                          		// 0x0114 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           MissingRedirectClassName;                         		// 0x0120 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           MissingRedirectObjectName;                        		// 0x012C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Unsuppress;                                       		// 0x0138 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// 0x0084 (0x00C0 - 0x003C)
class UPackageMap: public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                            		// 0x003C (0x0084) MISSED OFFSET
};

// 0x000C (0x0048 - 0x003C)
class UObjectSerializer: public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x003C (0x000C) MISSED OFFSET
};

// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector: public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x003C (0x0004) MISSED OFFSET
};

// 0x003C (0x0078 - 0x003C)
class UMetaData: public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                            		// 0x003C (0x003C) MISSED OFFSET
};

// 0x0534 (0x0570 - 0x003C)
class ULinker: public UObject
{
public:
	unsigned char                                      UnknownData00[0x534];                           		// 0x003C (0x0534) MISSED OFFSET
};

// 0x00A8 (0x0618 - 0x0570)
class ULinkerSave: public ULinker
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
class UInterface: public UObject
{

};

// 0x0004 (0x0040 - 0x003C)
class UField: public UObject
{
public:
	class UField* Next;                                             		// NOT AUTO-GENERATED PROPERTY
};

// 0x0040 (0x0080 - 0x0040)
class UProperty: public UField
{
public:
	int					ArrayDim;
	int					ElementSize;
	unsigned int		PropertyFlags;
	unsigned char		UnknownData00[0x14];
	int					Offset_Internal;
	UProperty* PropertyLinkNext;
	unsigned char		UnknownData01[0x18];
};

// 0x004C (0x008C - 0x0040)
class UStruct: public UField
{
public:
	unsigned char			UnknownData00[0x8];
	class UStruct* SuperField;
	class UField* Children;
	unsigned short			PropertySize;
	char					UnknownData01[0x3A];

	UObject* FindChildByName(FName InName) const
	{
		const UStruct* thisField = this;
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
class UScriptStruct: public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1C];                            		// 0x008C (0x001C) MISSED OFFSET
};

class UFunction: public UStruct
{
public:
	unsigned long		FunctionFlags;
	unsigned short		iNative;
	unsigned short		RepOffset;
	struct FName		FriendlyName;
	unsigned char		OperPrecedence;
	unsigned char		NumParams;
	unsigned short		ParamsSize;
	unsigned long		ReturnValueOffset;
	void* Func;
};

// 0x0004 (0x0084 - 0x0080)
class UStructProperty: public UProperty
{
public:
	UScriptStruct* Struct_DONOTUSE;
	UScriptStruct* GetStruct()
	{
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UScriptStruct**)(((char*)this) + 0x74))[0];
		else
			return ((UScriptStruct**)(((char*)this) + 0x80))[0];
	}
};

// 0x0000 (0x0080 - 0x0080)
class UStrProperty: public UProperty {};

// 0x0004 (0x0084 - 0x0080)
class UObjectProperty: public UProperty
{
public:
	UObject* Object_DONOTUSE;
	UObject* GetObject()
	{
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UObject**)(((char*)this) + 0x74))[0];
		else
			return ((UObject**)(((char*)this) + 0x80))[0];
	}
};

// 0x0000 (0x0084 - 0x0084)
class UComponentProperty: public UObjectProperty {};

// 0x0004 (0x0088 - 0x0084)
class UClassProperty: public UObjectProperty
{
public:
	UClass* MetaClass;
};

// 0x0000 (0x0080 - 0x0080)
class UNameProperty: public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UMapProperty: public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0000 (0x0080 - 0x0080)
class UIntProperty: public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UIntAttributeProperty: public UIntProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UInterfaceProperty: public UProperty
{
public:
	UClass* InterfaceClass_DONOTUSE;
	UClass* GetInterfaceClass()
	{
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UClass**)(((char*)this) + 0x74))[0];
		else
			return ((UClass**)(((char*)this) + 0x80))[0];
	}
};

// 0x0000 (0x0080 - 0x0080)
class UFloatProperty: public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UFloatAttributeProperty: public UFloatProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0008 (0x0088 - 0x0080)
class UDelegateProperty: public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UByteProperty: public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET
};

// 0x0008 (0x008C - 0x0084)
class UByteAttributeProperty: public UByteProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0084 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UBoolProperty: public UProperty
{
public:
	unsigned int Mask_DONOTUSE;
	unsigned int GetMask()
	{
		if (UnrealSDK::EngineVersion <= 8631)
			return ((unsigned int*)(((char*)this) + 0x74))[0];
		else
			return ((unsigned int*)(((char*)this) + 0x80))[0];
	}
};

// 0x0004 (0x0084 - 0x0080)
class UArrayProperty: public UProperty
{
public:
	UProperty* Inner_DONOTUSE;
	UProperty* GetInner()
	{
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UProperty**)(((char*)this) + 0x74))[0];
		else
			return ((UProperty**)(((char*)this) + 0x80))[0];
	}
};

// 0x000C (0x004C - 0x0040)
class UEnum: public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET
};

// 0x000C (0x004C - 0x0040)
class UConst: public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET
};

// 0x0034 (0x0070 - 0x003C)
class UFactory: public UObject
{
public:
	class UClass* SupportedClass;                                   		// 0x003C (0x0004) [0x0000000000000000]
	class UClass* ContextClass;                                     		// 0x0040 (0x0004) [0x0000000000000000]
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
class UTextBufferFactory: public UFactory {};

// 0x0028 (0x0064 - 0x003C)
class UExporter: public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[0xC];                             		// 0x0058 (0x000C) MISSED OFFSET
};

// 0x000C (0x0048 - 0x003C)
class UComponent: public UObject
{
public:
	class UClass* TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// 0x0008 (0x0050 - 0x0048)
class UDistributionVector: public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002]

public:
	struct FVector GetVectorValue(float F, int LastExtreme);
};

// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat: public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002]

public:
	float GetFloatValue(float F);
};

// 0x0040 (0x007C - 0x003C)
class UCommandlet: public UObject
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
class UHelpCommandlet: public UCommandlet
{
public:
	int Main(struct FString Params);
};

// 0x0008 (0x0044 - 0x003C)
class UAttributeModifier: public UObject
{
public:
	unsigned char                                      Type;                                             		// 0x003C (0x0001) [0x0000000000000000]
	float                                              Value;                                            		// 0x0040 (0x0004) [0x0000000000000000]
};

// 0x0044 (0x00D0 - 0x008C)
class UState: public UStruct
{
public:
	unsigned char                                      UnknownData00[0x44];                            		// 0x008C (0x0044) MISSED OFFSET
};

// 0x00A8 (0x00E4 - 0x003C)
class UPackage: public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                            		// 0x003C (0x00A8) MISSED OFFSET
};

// 0x0100 (0x01D0 - 0x00D0)
class UClass: public UState
{
public:
	unsigned long		bCooked : 1;
	FPointer			ClassAddReferencedObjects;
	unsigned long		ClassCastFlags;
	FName				ClassConfigName;
	FPointer			ClassConstructor;
	UObject* ClassDefaultObject;
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
	UObject* obj;
	UFunction* func;

private:
	FHelper* GenerateParams(const py::args& args, const py::kwargs& kwargs, FHelper* params);

public:
	py::object GetReturn(FHelper* params);
	py::object Call(py::args args, py::kwargs kwargs);
};

struct FOutParmRec
{
	UProperty* Property;
	unsigned char* PropAddr;
	FOutParmRec* NextOutParm;
};

struct FFrame: public FOutputDevice
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
	UStruct* structType;
	void* base;
	FStruct(UStruct* s, void* b);

	pybind11::object GetProperty(const std::string& PropName) const;
	void SetProperty(std::string& PropName, py::object value) const;
	py::str Repr() const;
};

struct FArray
{
	TArray <char>* arr;
	UProperty* type;
	unsigned int IterCounter;

	FArray(TArray <char>* array, UProperty* s);

	py::object GetItem(unsigned int i) const;
	void SetItem(unsigned int I, py::object Obj) const;
	int GetAddress() const;
	FArray* Iter();
	py::object Next();
	py::str Repr();
	int len();
};

typedef void* (__thiscall* tMalloc)(void***, unsigned long, unsigned long);
typedef void(__thiscall* tFree)(void***, void*);

#ifdef _MSC_VER
#pragma pack ( pop )
#endif

#endif