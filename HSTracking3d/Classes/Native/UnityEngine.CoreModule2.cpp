#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Stack
struct Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061;
// UnityEngineInternal.GenericStack
struct GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B;

IL2CPP_EXTERN_C RuntimeClass* MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeInferenceRuleAttribute__ctor_m389751AED6740F401AC8DFACD5914C13AB24D8A6_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Stack
struct  Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngineInternal.GenericStack
struct  GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC  : public Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643
{
public:

public:
};


// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rule_0), (void*)value);
	}
};


// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngineInternal.MathfInternal
struct  MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693__padding[1];
	};

public:
};

struct MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};


// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.iOS.NotificationHelper::DestroyRemote(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationHelper_DestroyRemote_m8DC26FA325608161850486E8F4BF16B67EF90E79 (intptr_t ___target0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Stack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack__ctor_m98F99FFBF373762F139506711349267D5354FE08 (Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * __this, const RuntimeMethod* method);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m34920F979AA071F4973CEEEF6F91B5B6A53E5765 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, String_t* ___rule0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.iOS.RemoteNotification::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteNotification_Finalize_m4D3F34A965DDE64EEC2F3AC3AC1750AED0CE1C2F (RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get_m_Ptr_0();
		NotificationHelper_DestroyRemote_m8DC26FA325608161850486E8F4BF16B67EF90E79((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0011);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0011;
	}

FINALLY_0011:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(17)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(17)
	{
		IL2CPP_JUMP_TBL(0x18, IL_0018)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.GenericStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848 (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * __this, const RuntimeMethod* method)
{
	{
		Stack__ctor_m98F99FFBF373762F139506711349267D5354FE08(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.MathfInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinDenormal_1((1.401298E-45f));
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_IsFlushToZeroEnabled_2((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m389751AED6740F401AC8DFACD5914C13AB24D8A6 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, int32_t ___rule0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m389751AED6740F401AC8DFACD5914C13AB24D8A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333_il2cpp_TypeInfo_var, (&___rule0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___rule0 = *(int32_t*)UnBox(L_0);
		TypeInferenceRuleAttribute__ctor_m34920F979AA071F4973CEEEF6F91B5B6A53E5765(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m34920F979AA071F4973CEEEF6F91B5B6A53E5765 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, String_t* ___rule0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeInferenceRuleAttribute_ToString_m49343B52ED0F3E75B3E56E37CF523F63E5A746F6 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__rule_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
