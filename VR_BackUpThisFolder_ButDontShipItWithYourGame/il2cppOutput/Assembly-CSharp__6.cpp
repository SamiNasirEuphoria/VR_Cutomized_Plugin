﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t236C83451572505C1D483C9DFB0550F3470A17B8;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// TMPro.FastAction`1<System.Boolean>
struct FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3;
// TMPro.FastAction`1<System.Object>
struct FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135;
// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Material>
struct FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Object>
struct FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B;
// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs>
struct FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D;
// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>
struct FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_tC2DD42EF8D44AC9B58E6A24D2D499C4A792620C9;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic>
struct HashSet_1_t7339109B23CAC1C7B695498778D7AC8166F04AF7;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t8D0452F3634038D896C40F4D328AF2B9B4D70219;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>
struct List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t099FA1DB61217A855A3732B3DCA8E909BB24E1AB;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// CurvedUI.CurvedUITMPSubmesh[]
struct CurvedUITMPSubmeshU5BU5D_t8CAF4ED9A371C184CAB4123B82D9C518F3E0355B;
// CurvedUI.CurvedUIVertexEffect[]
struct CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.InputField[]
struct InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_InputField[]
struct TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CurvedUI.CurvedUIInputFieldCaret
struct CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA;
// CurvedUIInputModule
struct CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386;
// CurvedUI.CurvedUIRaycaster
struct CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76;
// CurvedUI.CurvedUISettings
struct CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2;
// CurvedUI.CurvedUITMP
struct CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73;
// CurvedUI.CurvedUITMPInputFieldCaret
struct CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8;
// CurvedUI.CurvedUITMPSubmesh
struct CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532;
// CurvedUI.CurvedUIVertexEffect
struct CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88;
// CurvedUI.CurvedUIViveController
struct CurvedUIViveController_t4D748E4AB476CDE20BDF09579CBD91E92D5C544E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// TMPro.FastAction
struct FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// CurvedUI.OptionalDependencyAttribute
struct OptionalDependencyAttribute_tA4AF5D8DF636D9E52A8F86F02F7CE9B16E2E8708;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t55234A392C423FCC9A016503B2D1763D52E6605A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_SubMeshUI
struct TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// CurvedUI.ViveEvent
struct ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E;
// CurvedUI.ViveInputEvent
struct ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// CurvedUI.CurvedUIRaycaster/<>c
struct U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A;
// CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10
struct U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tA7C96C24DE882DB5FA936CA80F46608A0041A566_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3;
IL2CPP_EXTERN_C String_t* _stringLiteral25EC8B5027C4C127EC75896F8B03EF13CBFF95DE;
IL2CPP_EXTERN_C String_t* _stringLiteral3B46302701BEE88904D8B185D12F907471B2D231;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE;
IL2CPP_EXTERN_C String_t* _stringLiteral76BC599F35709DDFA80B78ED2DD26FEC406690B7;
IL2CPP_EXTERN_C String_t* _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralDC643805631DCFA7AF65357A1ADA341A23CA30AA;
IL2CPP_EXTERN_C String_t* _stringLiteralDDD374A7E41DD53902353C5AE7ED852D7D631EF0;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF5E18CA9BC348412D57A3E586EF2AFECE4B28139;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m9BEE83AA023483EDD05C1D2CAD1E80C802A1AAD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m67AF1D819E35542C3D4339F414D9A4BD9EA032D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mB0EB50F12562E96A30AE3A067344068DBA3FE29B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m4FB2CCA09E466A5464466D9520F1B88CDB103BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mBDE615050DB119C56B475EDFF7B95B31780900EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m57E6D911E98D70AEEB60D0D7B2C21918A1F61D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_Reset_m4DF2E74FC878045B0B26356BC2394CEA1A0C0A38_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799;
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
struct CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F;
struct InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8;
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<System.Action`1<A>> TMPro.FastAction`1::delegates
	LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C* ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> TMPro.FastAction`1::lookup
	Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E* ___lookup_1;
};

// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>
struct List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CurvedUITMPSubmeshU5BU5D_t8CAF4ED9A371C184CAB4123B82D9C518F3E0355B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// TMPro.TMPro_EventManager
struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CurvedUI.CurvedUIRaycaster/<>c
struct U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A  : public RuntimeObject
{
};

// CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10
struct U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C  : public RuntimeObject
{
	// System.Int32 CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CurvedUI.CurvedUITMPInputFieldCaret CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::<>4__this
	CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>
struct Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// CurvedUI.OptionalDependencyAttribute
struct OptionalDependencyAttribute_tA4AF5D8DF636D9E52A8F86F02F7CE9B16E2E8708  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String CurvedUI.OptionalDependencyAttribute::dependentClass
	String_t* ___dependentClass_0;
	// System.String CurvedUI.OptionalDependencyAttribute::define
	String_t* ___define_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
struct __StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82__padding[144];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo_17;
};

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};

// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 
{
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

// CurvedUI.ViveInputArgs
struct ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 
{
	// System.UInt32 CurvedUI.ViveInputArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// System.Single CurvedUI.ViveInputArgs::buttonPressure
	float ___buttonPressure_1;
	// UnityEngine.Vector2 CurvedUI.ViveInputArgs::touchpadAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchpadAxis_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// CurvedUI.ViveEvent
struct ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E  : public MulticastDelegate_t
{
};

// CurvedUI.ViveInputEvent
struct ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// CurvedUI.CurvedUIInputFieldCaret
struct CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField CurvedUI.CurvedUIInputFieldCaret::myField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___myField_4;
	// UnityEngine.RectTransform CurvedUI.CurvedUIInputFieldCaret::myCaret
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___myCaret_5;
	// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::origCaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origCaretColor_6;
	// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::origSelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origSelectionColor_7;
	// System.Boolean CurvedUI.CurvedUIInputFieldCaret::selected
	bool ___selected_8;
	// System.Boolean CurvedUI.CurvedUIInputFieldCaret::selectingText
	bool ___selectingText_9;
	// System.Int32 CurvedUI.CurvedUIInputFieldCaret::lastCharDist
	int32_t ___lastCharDist_10;
};

// CurvedUI.CurvedUISettings
struct CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::shape
	int32_t ___shape_5;
	// System.Single CurvedUI.CurvedUISettings::quality
	float ___quality_6;
	// System.Boolean CurvedUI.CurvedUISettings::interactable
	bool ___interactable_7;
	// System.Boolean CurvedUI.CurvedUISettings::blocksRaycasts
	bool ___blocksRaycasts_8;
	// System.Boolean CurvedUI.CurvedUISettings::forceUseBoxCollider
	bool ___forceUseBoxCollider_9;
	// System.Int32 CurvedUI.CurvedUISettings::angle
	int32_t ___angle_10;
	// System.Boolean CurvedUI.CurvedUISettings::preserveAspect
	bool ___preserveAspect_11;
	// System.Int32 CurvedUI.CurvedUISettings::vertAngle
	int32_t ___vertAngle_12;
	// System.Single CurvedUI.CurvedUISettings::ringFill
	float ___ringFill_13;
	// System.Int32 CurvedUI.CurvedUISettings::ringExternalDiamater
	int32_t ___ringExternalDiamater_14;
	// System.Boolean CurvedUI.CurvedUISettings::ringFlipVertical
	bool ___ringFlipVertical_15;
	// System.Int32 CurvedUI.CurvedUISettings::baseCircleSegments
	int32_t ___baseCircleSegments_16;
	// UnityEngine.Vector2 CurvedUI.CurvedUISettings::savedRectSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___savedRectSize_17;
	// System.Single CurvedUI.CurvedUISettings::savedRadius
	float ___savedRadius_18;
	// UnityEngine.Canvas CurvedUI.CurvedUISettings::myCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___myCanvas_19;
	// UnityEngine.RectTransform CurvedUI.CurvedUISettings::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_20;
};

// CurvedUI.CurvedUITMP
struct CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CurvedUI.CurvedUIVertexEffect CurvedUI.CurvedUITMP::crvdVE
	CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* ___crvdVE_4;
	// TMPro.TextMeshProUGUI CurvedUI.CurvedUITMP::tmpText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___tmpText_5;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUITMP::mySettings
	CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* ___mySettings_6;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUITMP::m_UIVerts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_UIVerts_7;
	// UnityEngine.UIVertex CurvedUI.CurvedUITMP::m_tempVertex
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___m_tempVertex_8;
	// CurvedUI.CurvedUITMPSubmesh CurvedUI.CurvedUITMP::m_tempSubMsh
	CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___m_tempSubMsh_9;
	// UnityEngine.Vector2 CurvedUI.CurvedUITMP::savedSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___savedSize_10;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedUp_11;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedPos_12;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedLocalScale_13;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedGlobalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedGlobalScale_14;
	// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh> CurvedUI.CurvedUITMP::subMeshes
	List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* ___subMeshes_15;
	// System.Boolean CurvedUI.CurvedUITMP::Dirty
	bool ___Dirty_16;
	// System.Boolean CurvedUI.CurvedUITMP::curvingRequired
	bool ___curvingRequired_17;
	// System.Boolean CurvedUI.CurvedUITMP::tesselationRequired
	bool ___tesselationRequired_18;
	// System.Boolean CurvedUI.CurvedUITMP::quitting
	bool ___quitting_19;
	// UnityEngine.Vector3[] CurvedUI.CurvedUITMP::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_20;
};

// CurvedUI.CurvedUITMPInputFieldCaret
struct CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_InputField CurvedUI.CurvedUITMPInputFieldCaret::myField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___myField_4;
	// UnityEngine.RectTransform CurvedUI.CurvedUITMPInputFieldCaret::myCaret
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___myCaret_5;
	// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::origCaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origCaretColor_6;
	// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::origSelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origSelectionColor_7;
	// System.Boolean CurvedUI.CurvedUITMPInputFieldCaret::selected
	bool ___selected_8;
	// System.Boolean CurvedUI.CurvedUITMPInputFieldCaret::selectingText
	bool ___selectingText_9;
};

// CurvedUI.CurvedUITMPSubmesh
struct CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.VertexHelper CurvedUI.CurvedUITMPSubmesh::vh
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh_4;
	// UnityEngine.Mesh CurvedUI.CurvedUITMPSubmesh::straightMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___straightMesh_5;
	// UnityEngine.Mesh CurvedUI.CurvedUITMPSubmesh::curvedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___curvedMesh_6;
	// CurvedUI.CurvedUIVertexEffect CurvedUI.CurvedUITMPSubmesh::crvdVE
	CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* ___crvdVE_7;
	// TMPro.TMP_SubMeshUI CurvedUI.CurvedUITMPSubmesh::TMPsub
	TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* ___TMPsub_8;
	// TMPro.TextMeshProUGUI CurvedUI.CurvedUITMPSubmesh::TMPtext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TMPtext_9;
};

// CurvedUI.CurvedUIViveController
struct CurvedUIViveController_t4D748E4AB476CDE20BDF09579CBD91E92D5C544E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
};

// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_4;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_4;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_5;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_6;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_7;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_UnmaskMaterial_8;
};

// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t55234A392C423FCC9A016503B2D1763D52E6605A* ___m_VertexClipper_4;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> UnityEngine.UI.RectMask2D::m_MaskableTargets
	HashSet_1_t7339109B23CAC1C7B695498778D7AC8166F04AF7* ___m_MaskableTargets_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	HashSet_1_tC2DD42EF8D44AC9B58E6A24D2D499C4A792620C9* ___m_ClipTargets_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t099FA1DB61217A855A3732B3DCA8E909BB24E1AB* ___m_Clippers_9;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_LastClipRectCanvasSpace_10;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ForceClip
	bool ___m_ForceClip_11;
	// UnityEngine.Vector4 UnityEngine.UI.RectMask2D::m_Padding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Padding_12;
	// UnityEngine.Vector2Int UnityEngine.UI.RectMask2D::m_Softness
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Softness_13;
	// UnityEngine.Canvas UnityEngine.UI.RectMask2D::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// UnityEngine.Vector3[] UnityEngine.UI.RectMask2D::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_15;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// CurvedUIInputModule
struct CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// CurvedUIInputModule/CUIControlMethod CurvedUIInputModule::controlMethod
	int32_t ___controlMethod_11;
	// System.String CurvedUIInputModule::submitButtonName
	String_t* ___submitButtonName_12;
	// UnityEngine.Camera CurvedUIInputModule::mainEventCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainEventCamera_13;
	// UnityEngine.LayerMask CurvedUIInputModule::raycastLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___raycastLayerMask_14;
	// System.Boolean CurvedUIInputModule::gazeUseTimedClick
	bool ___gazeUseTimedClick_15;
	// System.Single CurvedUIInputModule::gazeClickTimer
	float ___gazeClickTimer_16;
	// System.Single CurvedUIInputModule::gazeClickTimerDelay
	float ___gazeClickTimerDelay_17;
	// UnityEngine.UI.Image CurvedUIInputModule::gazeTimedClickProgressImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___gazeTimedClickProgressImage_18;
	// System.Single CurvedUIInputModule::worldSpaceMouseSensitivity
	float ___worldSpaceMouseSensitivity_19;
	// CurvedUIInputModule/Hand CurvedUIInputModule::usedHand
	int32_t ___usedHand_20;
	// UnityEngine.Transform CurvedUIInputModule::pointerTransformOverride
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pointerTransformOverride_21;
	// UnityEngine.GameObject CurvedUIInputModule::currentDragging
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentDragging_24;
	// UnityEngine.GameObject CurvedUIInputModule::currentPointedAt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPointedAt_25;
	// UnityEngine.GameObject CurvedUIInputModule::m_rightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_rightController_26;
	// UnityEngine.GameObject CurvedUIInputModule::m_leftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_leftController_27;
	// System.Single CurvedUIInputModule::gazeTimerProgress
	float ___gazeTimerProgress_28;
	// UnityEngine.Ray CurvedUIInputModule::customControllerRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___customControllerRay_29;
	// System.Single CurvedUIInputModule::dragThreshold
	float ___dragThreshold_30;
	// System.Boolean CurvedUIInputModule::pressedDown
	bool ___pressedDown_31;
	// System.Boolean CurvedUIInputModule::pressedLastFrame
	bool ___pressedLastFrame_32;
	// UnityEngine.Vector2 CurvedUIInputModule::lastEventDataPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastEventDataPosition_33;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData CurvedUIInputModule::storedData
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___storedData_34;
	// UnityEngine.Vector3 CurvedUIInputModule::lastMouseOnScreenPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastMouseOnScreenPos_35;
	// UnityEngine.Vector2 CurvedUIInputModule::worldSpaceMouseInCanvasSpace
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldSpaceMouseInCanvasSpace_36;
	// UnityEngine.Vector2 CurvedUIInputModule::lastWorldSpaceMouseOnCanvas
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastWorldSpaceMouseOnCanvas_37;
	// UnityEngine.Vector2 CurvedUIInputModule::worldSpaceMouseOnCanvasDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldSpaceMouseOnCanvasDelta_38;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController CurvedUIInputModule::rightXRController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightXRController_39;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController CurvedUIInputModule::leftXRController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftXRController_40;
};

// CurvedUI.CurvedUIVertexEffect
struct CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88  : public BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D
{
	// System.Boolean CurvedUI.CurvedUIVertexEffect::DoNotTesselate
	bool ___DoNotTesselate_5;
	// UnityEngine.Canvas CurvedUI.CurvedUIVertexEffect::myCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___myCanvas_6;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUIVertexEffect::mySettings
	CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* ___mySettings_7;
	// UnityEngine.UI.Graphic CurvedUI.CurvedUIVertexEffect::myGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___myGraphic_8;
	// UnityEngine.UI.Text CurvedUI.CurvedUIVertexEffect::myText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___myText_9;
	// TMPro.TextMeshProUGUI CurvedUI.CurvedUIVertexEffect::myTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___myTMP_10;
	// CurvedUI.CurvedUITMPSubmesh CurvedUI.CurvedUIVertexEffect::myTMPSubMesh
	CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___myTMPSubMesh_11;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::m_tesselationRequired
	bool ___m_tesselationRequired_12;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::curvingRequired
	bool ___curvingRequired_13;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::TransformMisaligned
	bool ___TransformMisaligned_14;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::CanvasToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___CanvasToWorld_15;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::CanvasToLocal
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___CanvasToLocal_16;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::MyToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___MyToWorld_17;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::MyToLocal
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___MyToLocal_18;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::m_tesselatedVerts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_tesselatedVerts_19;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::m_curvedVerts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_curvedVerts_20;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::m_vertsInQuads
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_vertsInQuads_21;
	// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::m_ret
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___m_ret_22;
	// UnityEngine.UIVertex[] CurvedUI.CurvedUIVertexEffect::m_quad
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_quad_23;
	// System.Single[] CurvedUI.CurvedUIVertexEffect::m_weights
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_weights_24;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::savedPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedPos_25;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::savedUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedUp_26;
	// UnityEngine.Vector2 CurvedUI.CurvedUIVertexEffect::savedRectSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___savedRectSize_27;
	// UnityEngine.Color CurvedUI.CurvedUIVertexEffect::savedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___savedColor_28;
	// UnityEngine.Vector4 CurvedUI.CurvedUIVertexEffect::savedTextUV0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___savedTextUV0_29;
	// System.Single CurvedUI.CurvedUIVertexEffect::savedFill
	float ___savedFill_30;
	// UnityEngine.Vector4 CurvedUI.CurvedUIVertexEffect::_uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____uv0_31;
	// UnityEngine.Vector4 CurvedUI.CurvedUIVertexEffect::_uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____uv1_32;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pos_33;
};

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

// CurvedUI.CurvedUIRaycaster
struct CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76  : public GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B
{
	// System.Boolean CurvedUI.CurvedUIRaycaster::showDebug
	bool ___showDebug_12;
	// System.Boolean CurvedUI.CurvedUIRaycaster::overrideEventData
	bool ___overrideEventData_13;
	// UnityEngine.Canvas CurvedUI.CurvedUIRaycaster::myCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___myCanvas_14;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUIRaycaster::mySettings
	CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* ___mySettings_15;
	// UnityEngine.Vector3 CurvedUI.CurvedUIRaycaster::cyllinderMidPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cyllinderMidPoint_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::objectsUnderPointer
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___objectsUnderPointer_17;
	// UnityEngine.Vector2 CurvedUI.CurvedUIRaycaster::lastCanvasPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastCanvasPos_18;
	// UnityEngine.GameObject CurvedUI.CurvedUIRaycaster::colliderContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___colliderContainer_19;
	// UnityEngine.EventSystems.PointerEventData CurvedUI.CurvedUIRaycaster::lastFrameEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___lastFrameEventData_20;
	// UnityEngine.EventSystems.PointerEventData CurvedUI.CurvedUIRaycaster::curEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___curEventData_21;
	// UnityEngine.EventSystems.PointerEventData CurvedUI.CurvedUIRaycaster::eventDataToUse
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventDataToUse_22;
	// UnityEngine.Ray CurvedUI.CurvedUIRaycaster::cachedRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___cachedRay_23;
	// UnityEngine.UI.Graphic CurvedUI.CurvedUIRaycaster::gph
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___gph_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::selectablesUnderGaze
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___selectablesUnderGaze_25;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::selectablesUnderGazeLastFrame
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___selectablesUnderGazeLastFrame_26;
	// System.Single CurvedUI.CurvedUIRaycaster::objectsUnderGazeLastChangeTime
	float ___objectsUnderGazeLastChangeTime_27;
	// System.Boolean CurvedUI.CurvedUIRaycaster::gazeClickExecuted
	bool ___gazeClickExecuted_28;
	// System.Boolean CurvedUI.CurvedUIRaycaster::pointingAtCanvas
	bool ___pointingAtCanvas_29;
	// System.Boolean CurvedUI.CurvedUIRaycaster::pointingAtCanvasLastFrame
	bool ___pointingAtCanvasLastFrame_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_31;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_SubMeshUI
struct TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// TMPro.TMP_FontAsset TMPro.TMP_SubMeshUI::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_37;
	// TMPro.TMP_SpriteAsset TMPro.TMP_SubMeshUI::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_38;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_material_39;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_40;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fallbackMaterial_41;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_fallbackSourceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fallbackSourceMaterial_42;
	// System.Boolean TMPro.TMP_SubMeshUI::m_isDefaultMaterial
	bool ___m_isDefaultMaterial_43;
	// System.Single TMPro.TMP_SubMeshUI::m_padding
	float ___m_padding_44;
	// UnityEngine.Mesh TMPro.TMP_SubMeshUI::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_45;
	// TMPro.TextMeshProUGUI TMPro.TMP_SubMeshUI::m_TextComponent
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_TextComponent_46;
	// System.Boolean TMPro.TMP_SubMeshUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_47;
	// System.Boolean TMPro.TMP_SubMeshUI::m_materialDirty
	bool ___m_materialDirty_48;
	// System.Int32 TMPro.TMP_SubMeshUI::m_materialReferenceIndex
	int32_t ___m_materialReferenceIndex_49;
	// UnityEngine.Transform TMPro.TMP_SubMeshUI::m_RootCanvasTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RootCanvasTransform_50;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// TMPro.FastAction`1<UnityEngine.Object>

// TMPro.FastAction`1<UnityEngine.Object>

// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>
struct List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CurvedUITMPSubmeshU5BU5D_t8CAF4ED9A371C184CAB4123B82D9C518F3E0355B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIVertex>

// System.Attribute

// System.Attribute

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TMPro.TMPro_EventManager
struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields
{
	// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs> TMPro.TMPro_EventManager::COMPUTE_DT_EVENT
	FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D* ___COMPUTE_DT_EVENT_0;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Material> TMPro.TMPro_EventManager::MATERIAL_PROPERTY_EVENT
	FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A* ___MATERIAL_PROPERTY_EVENT_1;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::FONT_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___FONT_PROPERTY_EVENT_2;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::SPRITE_ASSET_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___SPRITE_ASSET_PROPERTY_EVENT_3;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_PROPERTY_EVENT_4;
	// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material> TMPro.TMPro_EventManager::DRAG_AND_DROP_MATERIAL_EVENT
	FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77* ___DRAG_AND_DROP_MATERIAL_EVENT_5;
	// TMPro.FastAction`1<System.Boolean> TMPro.TMPro_EventManager::TEXT_STYLE_PROPERTY_EVENT
	FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3* ___TEXT_STYLE_PROPERTY_EVENT_6;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::COLOR_GRADIENT_PROPERTY_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___COLOR_GRADIENT_PROPERTY_EVENT_7;
	// TMPro.FastAction TMPro.TMPro_EventManager::TMP_SETTINGS_PROPERTY_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___TMP_SETTINGS_PROPERTY_EVENT_8;
	// TMPro.FastAction TMPro.TMPro_EventManager::RESOURCE_LOAD_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___RESOURCE_LOAD_EVENT_9;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_UGUI_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_UGUI_PROPERTY_EVENT_10;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::TEXT_CHANGED_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___TEXT_CHANGED_EVENT_11;
};

// TMPro.TMPro_EventManager

// CurvedUI.CurvedUIRaycaster/<>c
struct U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_StaticFields
{
	// CurvedUI.CurvedUIRaycaster/<>c CurvedUI.CurvedUIRaycaster/<>c::<>9
	U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster/<>c::<>9__21_0
	Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* ___U3CU3E9__21_0_1;
	// System.Comparison`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster/<>c::<>9__32_0
	Comparison_1_t236C83451572505C1D483C9DFB0550F3470A17B8* ___U3CU3E9__32_0_2;
	// System.Comparison`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster/<>c::<>9__55_0
	Comparison_1_t236C83451572505C1D483C9DFB0550F3470A17B8* ___U3CU3E9__55_0_3;
};

// CurvedUI.CurvedUIRaycaster/<>c

// CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10

// CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10

// System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>

// System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// CurvedUI.OptionalDependencyAttribute

// CurvedUI.OptionalDependencyAttribute

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::15E4544087AC886E83EA2C6F84406B56B09370208D305B0ED3C2A2CAE4BDF76B
	__StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82 ___15E4544087AC886E83EA2C6F84406B56B09370208D305B0ED3C2A2CAE4BDF76B_0;
};

// <PrivateImplementationDetails>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative_1;
};

// TMPro.TMP_TextInfo

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// UnityEngine.UIVertex

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.UI.VertexHelper

// CurvedUI.ViveInputArgs

// CurvedUI.ViveInputArgs

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Font

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Mesh

// UnityEngine.Mesh

// TMPro.TMP_CharacterInfo

// TMPro.TMP_CharacterInfo

// UnityEngine.TextGenerator

// UnityEngine.TextGenerator

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<UnityEngine.Font>

// System.Action`1<UnityEngine.Font>

// System.Action`1<UnityEngine.Object>

// System.Action`1<UnityEngine.Object>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.CanvasRenderer

// UnityEngine.CanvasRenderer

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// CurvedUI.ViveEvent

// CurvedUI.ViveEvent

// CurvedUI.ViveInputEvent

// CurvedUI.ViveInputEvent

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// CurvedUI.CurvedUIInputFieldCaret

// CurvedUI.CurvedUIInputFieldCaret

// CurvedUI.CurvedUISettings

// CurvedUI.CurvedUISettings

// CurvedUI.CurvedUITMP

// CurvedUI.CurvedUITMP

// CurvedUI.CurvedUITMPInputFieldCaret

// CurvedUI.CurvedUITMPInputFieldCaret

// CurvedUI.CurvedUITMPSubmesh

// CurvedUI.CurvedUITMPSubmesh

// CurvedUI.CurvedUIViveController

// CurvedUI.CurvedUIViveController

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.BaseMeshEffect

// UnityEngine.UI.BaseMeshEffect

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Mask

// UnityEngine.UI.Mask

// UnityEngine.UI.RectMask2D

// UnityEngine.UI.RectMask2D

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// CurvedUIInputModule
struct CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_StaticFields
{
	// System.Boolean CurvedUIInputModule::disableOtherInputModulesOnStart
	bool ___disableOtherInputModulesOnStart_22;
	// CurvedUIInputModule CurvedUIInputModule::instance
	CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* ___instance_23;
};

// CurvedUIInputModule

// CurvedUI.CurvedUIVertexEffect

// CurvedUI.CurvedUIVertexEffect

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_InputField

// CurvedUI.CurvedUIRaycaster
struct CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_32;
};

// CurvedUI.CurvedUIRaycaster

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_SubMeshUI

// TMPro.TMP_SubMeshUI

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799  : public RuntimeArray
{
	ALIGN_FIELD (8) BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* m_Items[1];

	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841  : public RuntimeArray
{
	ALIGN_FIELD (8) Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* m_Items[1];

	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F  : public RuntimeArray
{
	ALIGN_FIELD (8) Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* m_Items[1];

	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CurvedUI.CurvedUIVertexEffect[]
struct CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2  : public RuntimeArray
{
	ALIGN_FIELD (8) CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* m_Items[1];

	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.InputField[]
struct InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1  : public RuntimeArray
{
	ALIGN_FIELD (8) InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* m_Items[1];

	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* m_Items[1];

	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_InputField[]
struct TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* m_Items[1];

	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* m_Items[1];

	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 m_Items[1];

	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF2D091DD1A4623AD420F79F15CA1A522E08B2E10_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m6321F73641E49FAE72EC005186D26C4B0C3D76C6_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_go, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<System.Object>::Add(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Add_mAFBAB8BEFC425D727FF303611342E6D1E6E82D86_gshared (FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_rhs, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<System.Object>::Remove(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Remove_m0C649E2173AA0370C08417DCFD89B7304F28BC0C_gshared (FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_rhs, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void CurvedUI.CurvedUIRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8DE73B237768336C8431841D166319FE24A7B69F (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Selectable>()
inline Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RectTransform CurvedUI.CurvedUISettings::get_RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<UnityEngine.EventSystems.BaseRaycaster>()
inline BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUIRaycaster>(UnityEngine.GameObject)
inline CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m9BEE83AA023483EDD05C1D2CAD1E80C802A1AAD2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	return ((  CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF2D091DD1A4623AD420F79F15CA1A522E08B2E10_gshared)(___0_go, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>()
inline CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single CurvedUI.CurvedUISettings::GetCyllinderRadiusInCanvasSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Graphic>()
inline GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUISettings::SetUIAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___0_newAngle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void CurvedUI.CurvedUIVertexEffect::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUIRaycaster>()
inline CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CurvedUI.CurvedUIRaycaster::RebuildCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIRaycaster_RebuildCollider_m9BCDA92282DCA114A6D7AD52FF7F819BDBAB698F (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// System.Int32 CurvedUI.CurvedUISettings::get_Angle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::get_SavedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUISettings::get_RingFlipVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Int32 CurvedUI.CurvedUISettings::get_RingExternalDiameter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::get_RingFill()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUIExtensionMethods::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49 (float ___0_value, float ___1_from1, float ___2_to1, float ___3_from2, float ___4_to2, const RuntimeMethod* method) ;
// System.Int32 CurvedUI.CurvedUISettings::get_VerticalAngle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUISettings::get_PreserveAspect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Graphic>(System.Boolean)
inline GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.InputField>(System.Boolean)
inline InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUIInputFieldCaret>()
inline CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CurvedUI.CurvedUIInputFieldCaret>()
inline CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TextMeshProUGUI>(System.Boolean)
inline TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUITMP>()
inline CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CurvedUI.CurvedUITMP>()
inline CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TMP_InputField>(System.Boolean)
inline TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUITMPInputFieldCaret>(UnityEngine.Component)
inline CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m67AF1D819E35542C3D4339F414D9A4BD9EA032D9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_go, const RuntimeMethod* method)
{
	return ((  CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m6321F73641E49FAE72EC005186D26C4B0C3D76C6_gshared)(___0_go, method);
}
// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::get_Shape()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinder(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinder_m12EFB7BA23AA76CDC724FC71957A60EDAD40660E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinderVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinderVertical_m8C7D1A1B09B76B8077EB7A5998C7F9375571B173 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToRing(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToRing_m303886D7B4A9F6A87EA1913D6AFD5E4FD3B13B1C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToSphere(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToSphere_mC7000D24730E5F03AAD0D21E0E9AB1B781492A8D (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::VertexPositionToCurvedCanvas(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsInfinity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUIExtensionMethods::ModifyY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUIExtensionMethods_ModifyY_mFEB7C550D2F93E19BB5361C1DBD6B23891F62F0D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_trans, float ___1_newVal, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUIExtensionMethods::ModifyX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUIExtensionMethods_ModifyX_m3CC05F97ABFBC7AF18C7197A46DA31F2B4263CA4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_trans, float ___1_newVal, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::GetSegmentsByAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___0_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::get_Quality()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUISettings_get_Quality_mD4FAA57D6D6197E3CB9D02D7CB1247AFCCF350F6_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUIExtensionMethods::Abs(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUIExtensionMethods_Abs_mFD2F1C475F2570ACC3F4037ADD89B031F89CE0AA (float ___0_value, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::set_CurvingRequired(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778_inline (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIRaycaster::get_PointingAtCanvas()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIRaycaster_get_PointingAtCanvas_mAB3CF97B0286809A4116DA42464B7E61A20C29CA_inline (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIRaycaster::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIRaycaster_Click_mC59574F26CE82DE645643D2C8B6225BD274C47E3 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// CurvedUIInputModule/CUIControlMethod CurvedUIInputModule::get_ControlMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUIInputModule_get_ControlMethod_m7058FE4D37DF0B2C6883329E3EAEC5A2031702AE (const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_ControlMethod(CurvedUIInputModule/CUIControlMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_ControlMethod_m66112DB9D3B63E11F99895E897B3EA7A13B8FDC2 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::GetObjectsUnderPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUIRaycaster_GetObjectsUnderPointer_m38A63021371980C1EC1A625AB69AC60A3040F950 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::GetObjectsUnderScreenPos(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUIRaycaster_GetObjectsUnderScreenPos_m7F3BB3E9329D6F8180F80173AC25057141176CD0 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPos, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_eventCamera, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::GetObjectsHitByRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUIRaycaster_GetObjectsHitByRay_m3819C5A0CB923094509F22CDB857231F574310F2 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, const RuntimeMethod* method) ;
// CurvedUIInputModule CurvedUIInputModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7 (const RuntimeMethod* method) ;
// System.Boolean CurvedUIInputModule::get_GazeUseTimedClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIInputModule_get_GazeUseTimedClick_m5A4D1EF48159BAEAB7442199036ED6071DC0A98C_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_GazeUseTimedClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeUseTimedClick_m5103211575DCD154F3173A9DF228B16E1AE76CF0_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single CurvedUIInputModule::get_GazeClickTimer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimer_mBACA415983885ED0D52C2BA1806BD9D999CCAFC3_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_GazeClickTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeClickTimer_m0FF55B26ECDF47724A45355E8738C49E94759B27 (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single CurvedUIInputModule::get_GazeClickTimerDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimerDelay_mEE9D705F5B6072FA19FA68794CF59F697124E0B7_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_GazeClickTimerDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeClickTimerDelay_mFE44D70901F6C53ECEE461865BD69E0F0E26F945 (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single CurvedUIInputModule::get_GazeTimerProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeTimerProgress_m20F15F571020564B09F34E9E9E85B31B96792B74_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUITMPSubmesh>()
inline CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// CurvedUI.CurvedUISettings CurvedUI.CurvedUIVertexEffect::FindParentSettings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_forceNew, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_RegisterDirtyVerticesCallback_m46034B2100B5D28BDBCCB34C1283B1B9B2DB9A9E (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Font_add_textureRebuilt_m0BBB44846C17A580B078599DA5AE231DA9D6DAD7 (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Selectable>()
inline Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_UnregisterDirtyVerticesCallback_mA36A388BF7DDB2D71596D6F13CEFCA79B4199B5C (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Font_remove_textureRebuilt_mB7EF9EEE803E9C70AF4217190B49C83FE287904A (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::set_tesselationRequired(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* Text_get_font_mBF98ED39D5C5081AF14A64170EC3391D206CCAFD (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_tesselationRequired()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29_inline (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIExtensionMethods::AlmostEqual(UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, double ___2_accuracy, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIVertexEffect::ShouldModify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::CheckTextFontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
inline void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
inline void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_stream, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::TesselateGeometry(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TesselateGeometry_m001143606FBA1736ACA55BBA194527DB340EEE8A (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
inline int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, const RuntimeMethod*))List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared)(__this, ___0_index, method);
}
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::CurveVertex(UnityEngine.UIVertex,System.Single,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_input, float ___1_cylinder_angle, float ___2_radius, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_canvasSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
inline void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
inline void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_mB65D778E8E3C6916CDFF5382208890882C3031BA (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, int32_t ___0_idx0, int32_t ___1_idx1, int32_t ___2_idx2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8 (TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_mD6A1C6E862F3EFB1B222A2DDCB7A7237042DE142_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<CurvedUI.CurvedUISettings>()
inline CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector2 CurvedUI.CurvedUISettings::GetTesslationSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUISettings_GetTesslationSize_m244B198E9E96821752B0BB22174639803E8196B2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_modifiedByQuality, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::TrisToQuads(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TrisToQuads_m9DD062DD6518593E61FA6964886CDDE4C3A376E4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyQuad_mEAC08EDC04F5B93091D9A4783F4BDBEF9CD76F0E (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, int32_t ___1_vertexIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_requiredSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_gshared)(__this, ___0_index, ___1_count, method);
}
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::TesselateQuad(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_gshared)(__this, ___0_collection, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::set_TesselationRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_TesselationRequired_m53B8A90218456051784AD8A136C5CB91A9CDCCD4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427 (BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::FindTMP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m95478636F075134CA2998E22B214611472600983 (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Add(System.Action`1<A>)
inline void FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6 (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___0_rhs, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005*, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, const RuntimeMethod*))FastAction_1_Add_mAFBAB8BEFC425D727FF303611342E6D1E6E82D86_gshared)(__this, ___0_rhs, method);
}
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___0_sourceText, bool ___1_syncTextInputBox, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Remove(System.Action`1<A>)
inline void FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___0_rhs, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005*, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, const RuntimeMethod*))FastAction_1_Remove_m0C649E2173AA0370C08417DCFD89B7304F28BC0C_gshared)(__this, ___0_rhs, method);
}
// System.Boolean CurvedUI.CurvedUITMP::ShouldTesselate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUITMP_ShouldTesselate_m689E16AB706109496751DEA326C551CF1214D54B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_renderMode(TMPro.TextRenderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_renderMode_m091533DEE7FD20A61249DC52C786ED4FFE5A5C2A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::CreateUIVertexList(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_CreateUIVertexList_m57345FC6BDFFB8143D5FA4BC52E652BBE265EBBF (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyTMPMesh(System.Collections.Generic.List`1<UnityEngine.UIVertex>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyTMPMesh_m1399E60A903D57BEA95FE80DE7CBF42E50C104F2 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** ___0_vertexList, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::FillMeshWithUIVertexList(UnityEngine.Mesh,System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FillMeshWithUIVertexList_mEDA5D96395071B4167976CBAD82678ECC503A350 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___1_list, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::FindSubmeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::GetEnumerator()
inline Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>::Dispose()
inline void Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7 (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>::get_Current()
inline CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_inline (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* (*) (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void CurvedUI.CurvedUITMPSubmesh::UpdateSubmesh(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPSubmesh_UpdateSubmesh_mA3045387F2148F655658002E28CF31A87BAC7F1D (CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* __this, bool ___0_tesselate, bool ___1_curve, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>::MoveNext()
inline bool Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04 (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* TextMeshProUGUI_get_canvasRenderer_m74291CFD17F47B70F21F49C93058D2756A521887 (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_Clear_m496D522F1DBD1037417E470CF2D4D9FD22F68E81 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::GetUIVertexFromMesh(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___0_vert, int32_t ___1_i, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, bool ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TMP_SubMeshUI>()
inline TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUITMPSubmesh>(UnityEngine.GameObject)
inline CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mB0EB50F12562E96A30AE3A067344068DBA3FE29B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	return ((  CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF2D091DD1A4623AD420F79F15CA1A522E08B2E10_gshared)(___0_go, method);
}
// System.Boolean System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::Contains(T)
inline bool List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7 (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::Add(T)
inline void List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_inline (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::.ctor()
inline void List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2 (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TMP_InputField>()
inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CheckAndConvertMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CheckAndConvertMask_mE0063CE6557D6EC0F7EFADCF6D652C1E107E1654 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::UpdateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_UpdateCaret_m433E3D7AC784A906D073DFD42A3EBCAA1C424F25 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CreateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CurvedUI.CurvedUITMPInputFieldCaret::CaretBlinker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUITMPInputFieldCaret_CaretBlinker_m72C5EC00E30E087A2970AEA2228794CA9D29CBAE (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10__ctor_mC94964453788B59FFB9C854766DD5AE77DEFCF06 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color TMPro.TMP_InputField::get_caretColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TMP_InputField_get_caretColor_m9733E1CB5CAD3CCFA9C32343D12F0095BA6DC76F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_customCaretColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_customCaretColor_m9A33CA9154050A1C09881207B9C7B832B6C44B6B (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_caretColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_caretColor_mAF2AF8646B44D6AAA885F2A664DB88431E22177C (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color TMPro.TMP_InputField::get_selectionColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TMP_InputField_get_selectionColor_m99D5B9FBC11FEAA170C113FB238120A73429F5BB_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_selectionColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_selectionColor_m9B30F4DC90BBD21ECDA6B5888F2F8E4B2EC7686D (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 CurvedUI.CurvedUITMPInputFieldCaret::GetLocalPositionInText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, int32_t ___0_charNo, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionFocusPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_Text TMPro.TMP_InputField::get_textComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 TMPro.TMP_InputField::get_caretWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_caretWidth_mA95E0A88F505D9618791AEDE9D649CA70F7E3B65_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_InputField::get_isFocused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.RectMask2D>()
inline RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<UnityEngine.UI.Image>(UnityEngine.Component)
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mBDE615050DB119C56B475EDFF7B95B31780900EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_go, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m6321F73641E49FAE72EC005186D26C4B0C3D76C6_gshared)(___0_go, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<UnityEngine.UI.Mask>(UnityEngine.Component)
inline Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m57E6D911E98D70AEEB60D0D7B2C21918A1F61D7E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_go, const RuntimeMethod* method)
{
	return ((  Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m6321F73641E49FAE72EC005186D26C4B0C3D76C6_gshared)(___0_go, method);
}
// System.Single TMPro.TMP_InputField::get_caretBlinkRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_InputField_get_caretBlinkRate_mACAF2093330BB9CB0B8C5F7D76EAA4EB0AE4DD18_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_caretBlinkRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_caretBlinkRate_m4D4B8F3C2169EE3FA7B27BECBD1563BFAD7B41F7 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_SubMeshUI>()
inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUIVertexEffect>(UnityEngine.GameObject)
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m4FB2CCA09E466A5464466D9520F1B88CDB103BAB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF2D091DD1A4623AD420F79F15CA1A522E08B2E10_gshared)(___0_go, method);
}
// UnityEngine.Mesh TMPro.TMP_SubMeshUI::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* TMP_SubMeshUI_get_mesh_m18BAE0DB357DC5D7993D07BD826429AF727548E2 (TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper__ctor_mE42FAE63F4A3200C38ACFDD9C3F601FDC7E258F8 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_m, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_FillMesh_m524F00287F0A0C7683E2CC7768A77B5755544A0E (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) ;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUIRaycaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE96DE2C39244E7486D3B955387686FB040DD1EE9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* L_0 = (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A*)il2cpp_codegen_object_new(U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8DE73B237768336C8431841D166319FE24A7B69F(L_0, NULL);
		((U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CurvedUI.CurvedUIRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8DE73B237768336C8431841D166319FE24A7B69F (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIRaycaster/<>c::<Update>b__21_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateU3Eb__21_0_m8EA7D44F174424CFED6E76024644D0BDD5EDFC58 (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.GetComponent<Selectable>() == null || obj.GetComponent<Selectable>().interactable == false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_obj;
		NullCheck(L_0);
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_1;
		L_1 = GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905(L_0, GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_obj;
		NullCheck(L_3);
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_4;
		L_4 = GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905(L_3, GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5;
		L_5 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001d:
	{
		return (bool)1;
	}
}
// System.Int32 CurvedUI.CurvedUIRaycaster/<>c::<FlatRaycastAndSort>b__32_0(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CFlatRaycastAndSortU3Eb__32_0_m578595B297377972F520753A876BBF5DCDAD74BF (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_g1, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___1_g2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// s_SortedGraphics.Sort((g1, g2) => g2.depth.CompareTo(g1.depth));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___1_g2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_0, NULL);
		V_0 = L_1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___0_g1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_2, NULL);
		int32_t L_4;
		L_4 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_0), L_3, NULL);
		return L_4;
	}
}
// System.Int32 CurvedUI.CurvedUIRaycaster/<>c::<GetObjectsHitByRay>b__55_0(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetObjectsHitByRayU3Eb__55_0_mDFC3918EE542EF0BC27FEBAA8F403201B2076D8F (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_g1, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___1_g2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// s_SortedGraphics.Sort((g1, g2) => g2.depth.CompareTo(g1.depth));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___1_g2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_0, NULL);
		V_0 = L_1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___0_g1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_2, NULL);
		int32_t L_4;
		L_4 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_0), L_3, NULL);
		return L_4;
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
// System.Void CurvedUI.CurvedUISettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Awake_mB21A478184331B55B372CF81CF088A93E11FFB05 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (gameObject.layer == 0) this.gameObject.layer = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (gameObject.layer == 0) this.gameObject.layer = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_2, 5, NULL);
	}

IL_0019:
	{
		// savedRectSize = RectTransform.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_0 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		__this->___savedRectSize_17 = L_5;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Start_mF48213A421FB02A9D9755E4AECB608442ED15DAF (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m9BEE83AA023483EDD05C1D2CAD1E80C802A1AAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDD374A7E41DD53902353C5AE7ED852D7D631EF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* V_0 = NULL;
	int32_t V_1 = 0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* V_2 = NULL;
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_3 = NULL;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_00d5;
		}
	}
	{
		// BaseRaycaster[] raycasters = GetComponents<BaseRaycaster>();
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_1;
		L_1 = Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6(__this, Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6_RuntimeMethod_var);
		// foreach(BaseRaycaster caster in raycasters)
		V_0 = L_1;
		V_1 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// foreach(BaseRaycaster caster in raycasters)
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (!(caster is CurvedUIRaycaster))
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_6 = V_2;
		if (((CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76*)IsInstClass((RuntimeObject*)L_6, CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// caster.enabled = false;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_7 = V_2;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002c:
	{
		// foreach(BaseRaycaster caster in raycasters)
		int32_t L_9 = V_1;
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// this.gameObject.AddComponentIfMissing<CurvedUIRaycaster>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_12;
		L_12 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m9BEE83AA023483EDD05C1D2CAD1E80C802A1AAD2(L_11, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m9BEE83AA023483EDD05C1D2CAD1E80C802A1AAD2_RuntimeMethod_var);
		// Canvas[] canvases = GetComponentsInChildren<Canvas>();
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_13;
		L_13 = Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455(__this, Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455_RuntimeMethod_var);
		// foreach(Canvas cnv in canvases)
		V_3 = L_13;
		V_1 = 0;
		goto IL_00cc;
	}

IL_004c:
	{
		// foreach(Canvas cnv in canvases)
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_14 = V_3;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		// if (cnv.gameObject != this.gameObject)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_18 = V_4;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_00c8;
		}
	}
	{
		// Transform trans = cnv.transform;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_22 = V_4;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		V_5 = L_23;
		// string hierarchyName = trans.name;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_5;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		V_6 = L_25;
		goto IL_009c;
	}

IL_0079:
	{
		// hierarchyName = trans.parent.name + "/" + hierarchyName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_5;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		String_t* L_29 = V_6;
		String_t* L_30;
		L_30 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_28, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_29, NULL);
		V_6 = L_30;
		// trans = trans.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_5;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_31, NULL);
		V_5 = L_32;
	}

IL_009c:
	{
		// while(trans.parent != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_5;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_35)
		{
			goto IL_0079;
		}
	}
	{
		// Debug.LogWarning("CURVEDUI: Interactions on nested canvases are not supported. You won't be able to interact with any child object of [" + hierarchyName + "]", cnv.gameObject);
		String_t* L_36 = V_6;
		String_t* L_37;
		L_37 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDDD374A7E41DD53902353C5AE7ED852D7D631EF0, L_36, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_38 = V_4;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_37, L_39, NULL);
	}

IL_00c8:
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cc:
	{
		// foreach(Canvas cnv in canvases)
		int32_t L_41 = V_1;
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_42 = V_3;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_004c;
		}
	}

IL_00d5:
	{
		// if (myCanvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_43 = __this->___myCanvas_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_44)
		{
			goto IL_00ef;
		}
	}
	{
		// myCanvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_45;
		L_45 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___myCanvas_19 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCanvas_19), (void*)L_45);
	}

IL_00ef:
	{
		// savedRadius = GetCyllinderRadiusInCanvasSpace();
		float L_46;
		L_46 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		__this->___savedRadius_18 = L_46;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_OnEnable_m838A0B2949372AACE01AB8C008A95E82F4E8C9FF (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_0;
		L_0 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30(__this, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// graph.SetAllDirty();
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		int32_t L_6 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_OnDisable_mFF38527168591B26A9EF8172D419FB999623CF4C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_0;
		L_0 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30(__this, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// graph.SetAllDirty();
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		int32_t L_6 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Update_mE3A37387DDD9A8FBB6B8DD1CA9D16E56D5FBD701 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5E18CA9BC348412D57A3E586EF2AFECE4B28139);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (RectTransform.rect.size != savedRectSize)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___savedRectSize_17;
		bool L_4;
		L_4 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// savedRectSize = RectTransform.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_5, NULL);
		V_0 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		__this->___savedRectSize_17 = L_7;
		// SetUIAngle(angle);
		int32_t L_8 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_8, NULL);
	}

IL_0045:
	{
		// if (savedRectSize.x == 0 || savedRectSize.y == 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___savedRectSize_17);
		float L_10 = L_9->___x_0;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0069;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___savedRectSize_17);
		float L_12 = L_11->___y_1;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}

IL_0069:
	{
		// Debug.LogError("CurvedUI: Your Canvas size must be bigger than 0!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF5E18CA9BC348412D57A3E586EF2AFECE4B28139, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::SetUIAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___0_newAngle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* V_0 = NULL;
	int32_t V_1 = 0;
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_2 = NULL;
	{
		// if (myCanvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___myCanvas_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// myCanvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2;
		L_2 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___myCanvas_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCanvas_19), (void*)L_2);
	}

IL_001a:
	{
		// if (newAngle == 0) newAngle = 1;
		int32_t L_3 = ___0_newAngle;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// if (newAngle == 0) newAngle = 1;
		___0_newAngle = 1;
	}

IL_0020:
	{
		// angle = newAngle;
		int32_t L_4 = ___0_newAngle;
		__this->___angle_10 = L_4;
		// savedRadius = GetCyllinderRadiusInCanvasSpace();
		float L_5;
		L_5 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		__this->___savedRadius_18 = L_5;
		// foreach (CurvedUIVertexEffect ve in GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_6;
		L_6 = Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B(__this, Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		V_0 = L_6;
		V_1 = 0;
		goto IL_004a;
	}

IL_003e:
	{
		// foreach (CurvedUIVertexEffect ve in GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// ve.SetDirty();
		NullCheck(L_10);
		CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100(L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004a:
	{
		// foreach (CurvedUIVertexEffect ve in GetComponentsInChildren<CurvedUIVertexEffect>())
		int32_t L_12 = V_1;
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// foreach (Graphic graph in GetComponentsInChildren<Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_14;
		L_14 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30(__this, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		V_2 = L_14;
		V_1 = 0;
		goto IL_0067;
	}

IL_005b:
	{
		// foreach (Graphic graph in GetComponentsInChildren<Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_15 = V_2;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		// graph.SetAllDirty();
		NullCheck(L_18);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_18);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0067:
	{
		// foreach (Graphic graph in GetComponentsInChildren<Graphic>())
		int32_t L_20 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		// if (Application.isPlaying && GetComponent<CurvedUIRaycaster>() != null)
		bool L_22;
		L_22 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_23;
		L_23 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_008d;
		}
	}
	{
		// GetComponent<CurvedUIRaycaster>().RebuildCollider();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_25;
		L_25 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_25);
		CurvedUIRaycaster_RebuildCollider_m9BCDA92282DCA114A6D7AD52FF7F819BDBAB698F(L_25, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinder(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinder_m12EFB7BA23AA76CDC724FC71957A60EDAD40660E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float theta = (pos.x / savedRectSize.x) * Angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		float L_1 = L_0.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___savedRectSize_17);
		float L_3 = L_2->___x_0;
		int32_t L_4;
		L_4 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_1/L_3)), ((float)L_4))), (0.0174532924f)));
		// pos.x = Mathf.Sin(theta) * (SavedRadius + pos.z);
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		float L_7;
		L_7 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_pos;
		float L_9 = L_8.___z_4;
		(&___0_pos)->___x_2 = ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_add(L_7, L_9))));
		// pos.z += Mathf.Cos(theta) * (SavedRadius + pos.z) - (SavedRadius + pos.z);
		float* L_10 = (&(&___0_pos)->___z_4);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_0;
		float L_14;
		L_14 = cosf(L_13);
		float L_15;
		L_15 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_pos;
		float L_17 = L_16.___z_4;
		float L_18;
		L_18 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_pos;
		float L_20 = L_19.___z_4;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_add(L_15, L_17)))), ((float)il2cpp_codegen_add(L_18, L_20))))));
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_pos;
		return L_21;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinderVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinderVertical_m8C7D1A1B09B76B8077EB7A5998C7F9375571B173 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float theta = (pos.y / savedRectSize.y) * Angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		float L_1 = L_0.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___savedRectSize_17);
		float L_3 = L_2->___y_1;
		int32_t L_4;
		L_4 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_1/L_3)), ((float)L_4))), (0.0174532924f)));
		// pos.y = Mathf.Sin(theta) * (SavedRadius + pos.z);
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		float L_7;
		L_7 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_pos;
		float L_9 = L_8.___z_4;
		(&___0_pos)->___y_3 = ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_add(L_7, L_9))));
		// pos.z += Mathf.Cos(theta) * (SavedRadius + pos.z) - (SavedRadius + pos.z);
		float* L_10 = (&(&___0_pos)->___z_4);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_0;
		float L_14;
		L_14 = cosf(L_13);
		float L_15;
		L_15 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_pos;
		float L_17 = L_16.___z_4;
		float L_18;
		L_18 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_pos;
		float L_20 = L_19.___z_4;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_add(L_15, L_17)))), ((float)il2cpp_codegen_add(L_18, L_20))))));
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_pos;
		return L_21;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToRing(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToRing_m303886D7B4A9F6A87EA1913D6AFD5E4FD3B13B1C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	{
		// float r = pos.y.Remap(savedRectSize.y * 0.5f * (RingFlipVertical ? 1 : -1), -savedRectSize.y * 0.5f * (RingFlipVertical ? 1 : -1), RingExternalDiameter * (1 - RingFill) * 0.5f, RingExternalDiameter * 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		float L_1 = L_0.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___savedRectSize_17);
		float L_3 = L_2->___y_1;
		bool L_4;
		L_4 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2_inline(__this, NULL);
		G_B1_0 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
		G_B1_1 = L_1;
		if (L_4)
		{
			G_B2_0 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
			G_B2_1 = L_1;
			goto IL_0022;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___savedRectSize_17);
		float L_6 = L_5->___y_1;
		bool L_7;
		L_7 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2_inline(__this, NULL);
		G_B4_0 = ((float)il2cpp_codegen_multiply(((-L_6)), (0.5f)));
		G_B4_1 = ((float)il2cpp_codegen_multiply(G_B3_1, ((float)G_B3_0)));
		G_B4_2 = G_B3_2;
		if (L_7)
		{
			G_B5_0 = ((float)il2cpp_codegen_multiply(((-L_6)), (0.5f)));
			G_B5_1 = ((float)il2cpp_codegen_multiply(G_B3_1, ((float)G_B3_0)));
			G_B5_2 = G_B3_2;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0043:
	{
		int32_t L_8;
		L_8 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9_inline(__this, NULL);
		float L_9;
		L_9 = CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1_inline(__this, NULL);
		int32_t L_10;
		L_10 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9_inline(__this, NULL);
		float L_11;
		L_11 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(G_B6_3, G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, ((float)G_B6_0))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_8), ((float)il2cpp_codegen_subtract((1.0f), L_9)))), (0.5f))), ((float)il2cpp_codegen_multiply(((float)L_10), (0.5f))), NULL);
		V_0 = L_11;
		// float theta = (pos.x / savedRectSize.x).Remap(-0.5f, 0.5f, Mathf.PI / 2.0f, angle * Mathf.Deg2Rad + Mathf.PI / 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_pos;
		float L_13 = L_12.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___savedRectSize_17);
		float L_15 = L_14->___x_0;
		int32_t L_16 = __this->___angle_10;
		float L_17;
		L_17 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(((float)(L_13/L_15)), (-0.5f), (0.5f), (1.57079637f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_16), (0.0174532924f))), (1.57079637f))), NULL);
		V_1 = L_17;
		// pos.x = r * Mathf.Cos(theta);
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20;
		L_20 = cosf(L_19);
		(&___0_pos)->___x_2 = ((float)il2cpp_codegen_multiply(L_18, L_20));
		// pos.y = r * Mathf.Sin(theta);
		float L_21 = V_0;
		float L_22 = V_1;
		float L_23;
		L_23 = sinf(L_22);
		(&___0_pos)->___y_3 = ((float)il2cpp_codegen_multiply(L_21, L_23));
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___0_pos;
		return L_24;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToSphere(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToSphere_mC7000D24730E5F03AAD0D21E0E9AB1B781492A8D (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	{
		// float radius = SavedRadius;
		float L_0;
		L_0 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		V_0 = L_0;
		// float vAngle = VerticalAngle;
		int32_t L_1;
		L_1 = CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4_inline(__this, NULL);
		V_1 = ((float)L_1);
		// if (PreserveAspect)
		bool L_2;
		L_2 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// vAngle = angle * (savedRectSize.y / savedRectSize.x);
		int32_t L_3 = __this->___angle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___savedRectSize_17);
		float L_5 = L_4->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___savedRectSize_17);
		float L_7 = L_6->___x_0;
		V_1 = ((float)il2cpp_codegen_multiply(((float)L_3), ((float)(L_5/L_7))));
		// radius += Angle > 0 ? -pos.z : pos.z;
		float L_8 = V_0;
		int32_t L_9;
		L_9 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(__this, NULL);
		G_B2_0 = L_8;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			G_B3_0 = L_8;
			goto IL_0049;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_pos;
		float L_11 = L_10.___z_4;
		G_B4_0 = L_11;
		G_B4_1 = G_B2_0;
		goto IL_0050;
	}

IL_0049:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_pos;
		float L_13 = L_12.___z_4;
		G_B4_0 = ((-L_13));
		G_B4_1 = G_B3_0;
	}

IL_0050:
	{
		V_0 = ((float)il2cpp_codegen_add(G_B4_1, G_B4_0));
		goto IL_007b;
	}

IL_0054:
	{
		// radius = savedRectSize.x / 2.0f + pos.z;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___savedRectSize_17);
		float L_15 = L_14->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_pos;
		float L_17 = L_16.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)(L_15/(2.0f))), L_17));
		// if (vAngle == 0) return Vector3.zero;
		float L_18 = V_1;
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_007b;
		}
	}
	{
		// if (vAngle == 0) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_19;
	}

IL_007b:
	{
		// float theta = (pos.x / savedRectSize.x).Remap(-0.5f, 0.5f, (180 - angle) / 2.0f - 90, 180 - (180 - angle) / 2.0f - 90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_pos;
		float L_21 = L_20.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___savedRectSize_17);
		float L_23 = L_22->___x_0;
		int32_t L_24 = __this->___angle_10;
		int32_t L_25 = __this->___angle_10;
		float L_26;
		L_26 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(((float)(L_21/L_23)), (-0.5f), (0.5f), ((float)il2cpp_codegen_subtract(((float)(((float)((int32_t)il2cpp_codegen_subtract(((int32_t)180), L_24)))/(2.0f))), (90.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)((int32_t)il2cpp_codegen_subtract(((int32_t)180), L_25)))/(2.0f))))), (90.0f))), NULL);
		V_2 = L_26;
		// theta *= Mathf.Deg2Rad;
		float L_27 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_27, (0.0174532924f)));
		// float gamma = (pos.y / savedRectSize.y).Remap(-0.5f, 0.5f, (180 - vAngle) / 2.0f, 180 - (180 - vAngle) / 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___0_pos;
		float L_29 = L_28.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___savedRectSize_17);
		float L_31 = L_30->___y_1;
		float L_32 = V_1;
		float L_33 = V_1;
		float L_34;
		L_34 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(((float)(L_29/L_31)), (-0.5f), (0.5f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_32))/(2.0f))), ((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_33))/(2.0f))))), NULL);
		V_3 = L_34;
		// gamma *= Mathf.Deg2Rad;
		float L_35 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_35, (0.0174532924f)));
		// pos.z = Mathf.Sin(gamma) * Mathf.Cos(theta) * radius;
		float L_36 = V_3;
		float L_37;
		L_37 = sinf(L_36);
		float L_38 = V_2;
		float L_39;
		L_39 = cosf(L_38);
		float L_40 = V_0;
		(&___0_pos)->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_37, L_39)), L_40));
		// pos.y = -radius * Mathf.Cos(gamma);
		float L_41 = V_0;
		float L_42 = V_3;
		float L_43;
		L_43 = cosf(L_42);
		(&___0_pos)->___y_3 = ((float)il2cpp_codegen_multiply(((-L_41)), L_43));
		// pos.x = Mathf.Sin(gamma) * Mathf.Sin(theta) * radius;
		float L_44 = V_3;
		float L_45;
		L_45 = sinf(L_44);
		float L_46 = V_2;
		float L_47;
		L_47 = sinf(L_46);
		float L_48 = V_0;
		(&___0_pos)->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_45, L_47)), L_48));
		// if (PreserveAspect)
		bool L_49;
		L_49 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(__this, NULL);
		if (!L_49)
		{
			goto IL_0177;
		}
	}
	{
		// pos.z -= radius;
		float* L_50 = (&(&___0_pos)->___z_4);
		float* L_51 = L_50;
		float L_52 = *((float*)L_51);
		float L_53 = V_0;
		*((float*)L_51) = (float)((float)il2cpp_codegen_subtract(L_52, L_53));
	}

IL_0177:
	{
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___0_pos;
		return L_54;
	}
}
// UnityEngine.RectTransform CurvedUI.CurvedUISettings::get_RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_rectTransform == null) m_rectTransform = transform as RectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_rectTransform_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (m_rectTransform == null) m_rectTransform = transform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___m_rectTransform_20 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rectTransform_20), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return m_rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___m_rectTransform_20;
		return L_3;
	}
}
// System.Void CurvedUI.CurvedUISettings::AddEffectToChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_AddEffectToChildren_m003322A8F0DD39D02925142E1783897C02DAF1EF (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m67AF1D819E35542C3D4339F414D9A4BD9EA032D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_0 = NULL;
	int32_t V_1 = 0;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* V_3 = NULL;
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* V_4 = NULL;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* V_5 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_6 = NULL;
	TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* V_7 = NULL;
	{
		// foreach (UnityEngine.UI.Graphic graph in GetComponentsInChildren<UnityEngine.UI.Graphic>(true))
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_0;
		L_0 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D(__this, (bool)1, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0034;
	}

IL_000c:
	{
		// foreach (UnityEngine.UI.Graphic graph in GetComponentsInChildren<UnityEngine.UI.Graphic>(true))
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (graph.GetComponent<CurvedUIVertexEffect>() == null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = V_2;
		NullCheck(L_5);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_6;
		L_6 = Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3(L_5, Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// graph.gameObject.AddComponent<CurvedUIVertexEffect>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8 = V_2;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_10;
		L_10 = GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783(L_9, GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		// graph.SetAllDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_11 = V_2;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_11);
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0034:
	{
		// foreach (UnityEngine.UI.Graphic graph in GetComponentsInChildren<UnityEngine.UI.Graphic>(true))
		int32_t L_13 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// foreach(UnityEngine.UI.InputField iField in GetComponentsInChildren<UnityEngine.UI.InputField>(true))
		InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* L_15;
		L_15 = Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC(__this, (bool)1, Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC_RuntimeMethod_var);
		V_3 = L_15;
		V_1 = 0;
		goto IL_006b;
	}

IL_0046:
	{
		// foreach(UnityEngine.UI.InputField iField in GetComponentsInChildren<UnityEngine.UI.InputField>(true))
		InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* L_16 = V_3;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		// if (iField.GetComponent<CurvedUIInputFieldCaret>() == null)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_20 = V_4;
		NullCheck(L_20);
		CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* L_21;
		L_21 = Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828(L_20, Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		// iField.gameObject.AddComponent<CurvedUIInputFieldCaret>();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_23 = V_4;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* L_25;
		L_25 = GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108(L_24, GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108_RuntimeMethod_var);
	}

IL_0067:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006b:
	{
		// foreach(UnityEngine.UI.InputField iField in GetComponentsInChildren<UnityEngine.UI.InputField>(true))
		int32_t L_27 = V_1;
		InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* L_28 = V_3;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// foreach(TextMeshProUGUI tmp in GetComponentsInChildren<TextMeshProUGUI>(true)){
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_29;
		L_29 = Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4(__this, (bool)1, Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4_RuntimeMethod_var);
		V_5 = L_29;
		V_1 = 0;
		goto IL_00ab;
	}

IL_007e:
	{
		// foreach(TextMeshProUGUI tmp in GetComponentsInChildren<TextMeshProUGUI>(true)){
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_30 = V_5;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_6 = L_33;
		// if(tmp.GetComponent<CurvedUITMP>() == null){
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = V_6;
		NullCheck(L_34);
		CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* L_35;
		L_35 = Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565(L_34, Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_00a7;
		}
	}
	{
		// tmp.gameObject.AddComponent<CurvedUITMP>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_37 = V_6;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* L_39;
		L_39 = GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2(L_38, GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2_RuntimeMethod_var);
		// tmp.SetAllDirty();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = V_6;
		NullCheck(L_40);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_40);
	}

IL_00a7:
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00ab:
	{
		// foreach(TextMeshProUGUI tmp in GetComponentsInChildren<TextMeshProUGUI>(true)){
		int32_t L_42 = V_1;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_43 = V_5;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_007e;
		}
	}
	{
		// foreach (TMP_InputField tmp in GetComponentsInChildren<TMP_InputField>(true))
		TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* L_44;
		L_44 = Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0(__this, (bool)1, Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0_RuntimeMethod_var);
		V_7 = L_44;
		V_1 = 0;
		goto IL_00cd;
	}

IL_00bf:
	{
		// foreach (TMP_InputField tmp in GetComponentsInChildren<TMP_InputField>(true))
		TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* L_45 = V_7;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		// tmp.AddComponentIfMissing<CurvedUITMPInputFieldCaret>();
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_49;
		L_49 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m67AF1D819E35542C3D4339F414D9A4BD9EA032D9(L_48, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m67AF1D819E35542C3D4339F414D9A4BD9EA032D9_RuntimeMethod_var);
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00cd:
	{
		// foreach (TMP_InputField tmp in GetComponentsInChildren<TMP_InputField>(true))
		int32_t L_51 = V_1;
		TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* L_52 = V_7;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_00bf;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::VertexPositionToCurvedCanvas(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (Shape)
		int32_t L_0;
		L_0 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_001f:
	{
		// return CanvasToCyllinder(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CurvedUISettings_CanvasToCyllinder_m12EFB7BA23AA76CDC724FC71957A60EDAD40660E(__this, L_2, NULL);
		return L_3;
	}

IL_0027:
	{
		// return CanvasToCyllinderVertical(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CurvedUISettings_CanvasToCyllinderVertical_m8C7D1A1B09B76B8077EB7A5998C7F9375571B173(__this, L_4, NULL);
		return L_5;
	}

IL_002f:
	{
		// return CanvasToRing(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = CurvedUISettings_CanvasToRing_m303886D7B4A9F6A87EA1913D6AFD5E4FD3B13B1C(__this, L_6, NULL);
		return L_7;
	}

IL_0037:
	{
		// return CanvasToSphere(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CurvedUISettings_CanvasToSphere_mC7000D24730E5F03AAD0D21E0E9AB1B781492A8D(__this, L_8, NULL);
		return L_9;
	}

IL_003f:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCurvedCanvas(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCurvedCanvas_mF1533486831BD26EC698AF517B07A80A94870E66 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// pos = VertexPositionToCurvedCanvas(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65(__this, L_0, NULL);
		___0_pos = L_1;
		// if (float.IsNaN(pos.x) || float.IsInfinity(pos.x)) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_pos;
		float L_3 = L_2.___x_2;
		bool L_4;
		L_4 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_pos;
		float L_6 = L_5.___x_2;
		bool L_7;
		L_7 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		// if (float.IsNaN(pos.x) || float.IsInfinity(pos.x)) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_8;
	}

IL_0029:
	{
		// else return transform.localToWorldMatrix.MultiplyPoint3x4(pos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_9, NULL);
		V_0 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_0), L_11, NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCurvedCanvasNormal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCurvedCanvasNormal_m951B9703753A27C8AB21B42F1F9FA7ED670602A1 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	{
		// pos = VertexPositionToCurvedCanvas(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65(__this, L_0, NULL);
		___0_pos = L_1;
		// switch (Shape)
		int32_t L_2;
		L_2 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_00af;
			}
			case 2:
			{
				goto IL_00c0;
			}
			case 3:
			{
				goto IL_006d;
			}
		}
	}
	{
		goto IL_0109;
	}

IL_002b:
	{
		// return transform.localToWorldMatrix.MultiplyVector((pos - new Vector3(0, 0, -GetCyllinderRadiusInCanvasSpace())).ModifyY(0)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_pos;
		float L_7;
		L_7 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), ((-L_7)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CurvedUIExtensionMethods_ModifyY_mFEB7C550D2F93E19BB5361C1DBD6B23891F62F0D(L_9, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_10, NULL);
		V_2 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		return L_12;
	}

IL_006d:
	{
		// return transform.localToWorldMatrix.MultiplyVector((pos - new Vector3(0, 0, -GetCyllinderRadiusInCanvasSpace())).ModifyX(0)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14;
		L_14 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_13, NULL);
		V_1 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_pos;
		float L_16;
		L_16 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0f), (0.0f), ((-L_16)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = CurvedUIExtensionMethods_ModifyX_m3CC05F97ABFBC7AF18C7197A46DA31F2B4263CA4(L_18, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_19, NULL);
		V_2 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		return L_21;
	}

IL_00af:
	{
		// return -transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_23, NULL);
		return L_24;
	}

IL_00c0:
	{
		// Vector3 center = (PreserveAspect ? new Vector3(0, 0, -GetCyllinderRadiusInCanvasSpace()) : Vector3.zero);
		bool L_25;
		L_25 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(__this, NULL);
		if (L_25)
		{
			goto IL_00cf;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B8_0 = L_26;
		goto IL_00e5;
	}

IL_00cf:
	{
		float L_27;
		L_27 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (0.0f), (0.0f), ((-L_27)), /*hidden argument*/NULL);
		G_B8_0 = L_28;
	}

IL_00e5:
	{
		V_3 = G_B8_0;
		// return transform.localToWorldMatrix.MultiplyVector((pos - center)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
		L_30 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_29, NULL);
		V_1 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_33, NULL);
		V_2 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		return L_35;
	}

IL_0109:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_36;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::RaycastToCanvasSpace(UnityEngine.Ray,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_RaycastToCanvasSpace_m082112E373A7F7FF93F30A08CF5D26D3741D3C63 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_o_positionOnCanvas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// CurvedUIRaycaster caster = this.GetComponent<CurvedUIRaycaster>();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		V_0 = L_0;
		// o_positionOnCanvas = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___1_o_positionOnCanvas;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_1 = L_2;
		// switch (Shape)
		int32_t L_3;
		L_3 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(__this, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_003b;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0031:
	{
		// return caster.RaycastToCyllinderCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_5 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6 = ___0_ray;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___1_o_positionOnCanvas;
		NullCheck(L_5);
		bool L_8;
		L_8 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(23 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToCyllinderCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_5, L_6, L_7, (bool)1);
		return L_8;
	}

IL_003b:
	{
		// return caster.RaycastToCyllinderVerticalCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_9 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10 = ___0_ray;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___1_o_positionOnCanvas;
		NullCheck(L_9);
		bool L_12;
		L_12 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(24 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToCyllinderVerticalCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_9, L_10, L_11, (bool)1);
		return L_12;
	}

IL_0045:
	{
		// return caster.RaycastToRingCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_13 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_14 = ___0_ray;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = ___1_o_positionOnCanvas;
		NullCheck(L_13);
		bool L_16;
		L_16 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(25 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToRingCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_13, L_14, L_15, (bool)1);
		return L_16;
	}

IL_004f:
	{
		// return caster.RaycastToSphereCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_17 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_18 = ___0_ray;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = ___1_o_positionOnCanvas;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(26 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToSphereCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_17, L_18, L_19, (bool)1);
		return L_20;
	}

IL_0059:
	{
		// return false;
		return (bool)0;
	}
}
// System.Single CurvedUI.CurvedUISettings::GetCyllinderRadiusInCanvasSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (PreserveAspect)
		bool L_0;
		L_0 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		// if(shape == CurvedUIShape.CYLINDER_VERTICAL)
		int32_t L_1 = __this->___shape_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0040;
		}
	}
	{
		// ret = (RectTransform.rect.size.y / ((2 * Mathf.PI) * (angle / 360.0f)));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_2, NULL);
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		float L_5 = L_4.___y_1;
		int32_t L_6 = __this->___angle_10;
		V_0 = ((float)(L_5/((float)il2cpp_codegen_multiply((6.28318548f), ((float)(((float)L_6)/(360.0f)))))));
		goto IL_00b6;
	}

IL_0040:
	{
		// ret = (RectTransform.rect.size.x / ((2 * Mathf.PI) * (angle / 360.0f)));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_7, NULL);
		V_1 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		float L_10 = L_9.___x_0;
		int32_t L_11 = __this->___angle_10;
		V_0 = ((float)(L_10/((float)il2cpp_codegen_multiply((6.28318548f), ((float)(((float)L_11)/(360.0f)))))));
		goto IL_00b6;
	}

IL_006f:
	{
		// ret = (RectTransform.rect.size.x * 0.5f) / Mathf.Sin(Mathf.Clamp(angle, -180.0f, 180.0f) * 0.5f * Mathf.Deg2Rad);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_12);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_12, NULL);
		V_1 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		float L_15 = L_14.___x_0;
		int32_t L_16 = __this->___angle_10;
		float L_17;
		L_17 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)L_16), (-180.0f), (180.0f), NULL);
		float L_18;
		L_18 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, (0.5f))), (0.0174532924f))));
		V_0 = ((float)(((float)il2cpp_codegen_multiply(L_15, (0.5f)))/L_18));
	}

IL_00b6:
	{
		// return angle == 0 ? 0 : ret;
		int32_t L_19 = __this->___angle_10;
		if (!L_19)
		{
			goto IL_00c0;
		}
	}
	{
		float L_20 = V_0;
		return L_20;
	}

IL_00c0:
	{
		return (0.0f);
	}
}
// UnityEngine.Vector2 CurvedUI.CurvedUISettings::GetTesslationSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUISettings_GetTesslationSize_m244B198E9E96821752B0BB22174639803E8196B2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_modifiedByQuality, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	float G_B12_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	{
		// Vector2 ret = RectTransform.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_1 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		V_0 = L_2;
		// if (Angle != 0 || (!PreserveAspect && vertAngle != 0))
		int32_t L_3;
		L_3 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(__this, NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		bool L_4;
		L_4 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(__this, NULL);
		if (L_4)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_5 = __this->___vertAngle_12;
		if (!L_5)
		{
			goto IL_00e3;
		}
	}

IL_0032:
	{
		// switch (shape)
		int32_t L_6 = __this->___shape_5;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_00e3;
	}

IL_0054:
	{
		// case CurvedUIShape.CYLINDER: ret /= GetSegmentsByAngle(angle); break;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		int32_t L_9 = __this->___angle_10;
		float L_10;
		L_10 = CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9(__this, ((float)L_9), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// case CurvedUIShape.CYLINDER: ret /= GetSegmentsByAngle(angle); break;
		goto IL_00e3;
	}

IL_006a:
	{
		// ret.x /= GetSegmentsByAngle(angle);
		float* L_12 = (&(&V_0)->___x_0);
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		int32_t L_15 = __this->___angle_10;
		float L_16;
		L_16 = CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9(__this, ((float)L_15), NULL);
		*((float*)L_13) = (float)((float)(L_14/L_16));
		// if (PreserveAspect)
		bool L_17;
		L_17 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(__this, NULL);
		if (!L_17)
		{
			goto IL_00cb;
		}
	}
	{
		// ret.y = ret.x * RectTransform.rect.size.y / RectTransform.rect.size.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		float L_19 = L_18.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20;
		L_20 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_20);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		L_21 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_20, NULL);
		V_1 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		float L_23 = L_22.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24;
		L_24 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_24);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_25;
		L_25 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_24, NULL);
		V_1 = L_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		float L_27 = L_26.___x_0;
		(&V_0)->___y_1 = ((float)(((float)il2cpp_codegen_multiply(L_19, L_23))/L_27));
		goto IL_00e3;
	}

IL_00cb:
	{
		// ret.y /= GetSegmentsByAngle(VerticalAngle);
		float* L_28 = (&(&V_0)->___y_1);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		int32_t L_31;
		L_31 = CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4_inline(__this, NULL);
		float L_32;
		L_32 = CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9(__this, ((float)L_31), NULL);
		*((float*)L_29) = (float)((float)(L_30/L_32));
	}

IL_00e3:
	{
		// return ret / (modifiedByQuality ? Mathf.Clamp(Quality, 0.01f, 10.0f) : 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		bool L_34 = ___0_modifiedByQuality;
		G_B10_0 = L_33;
		if (L_34)
		{
			G_B11_0 = L_33;
			goto IL_00ee;
		}
	}
	{
		G_B12_0 = (1.0f);
		G_B12_1 = G_B10_0;
		goto IL_0103;
	}

IL_00ee:
	{
		float L_35;
		L_35 = CurvedUISettings_get_Quality_mD4FAA57D6D6197E3CB9D02D7CB1247AFCCF350F6_inline(__this, NULL);
		float L_36;
		L_36 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_35, (0.00999999978f), (10.0f), NULL);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_0;
	}

IL_0103:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(G_B12_1, G_B12_0, NULL);
		return L_37;
	}
}
// System.Single CurvedUI.CurvedUISettings::GetSegmentsByAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___0_angle, const RuntimeMethod* method) 
{
	{
		// if (angle.Abs() <= 1)
		float L_0 = ___0_angle;
		float L_1;
		L_1 = CurvedUIExtensionMethods_Abs_mFD2F1C475F2570ACC3F4037ADD89B031F89CE0AA(L_0, NULL);
		if ((!(((float)L_1) <= ((float)(1.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0013:
	{
		// else if (angle.Abs() < 90)//proportionaly twice as many segments for small angle canvases
		float L_2 = ___0_angle;
		float L_3;
		L_3 = CurvedUIExtensionMethods_Abs_mFD2F1C475F2570ACC3F4037ADD89B031F89CE0AA(L_2, NULL);
		if ((!(((float)L_3) < ((float)(90.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// return baseCircleSegments * (Mathf.Abs(angle).Remap(0, 90, 0.01f, 0.5f));
		int32_t L_4 = __this->___baseCircleSegments_16;
		float L_5 = ___0_angle;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(L_6, (0.0f), (90.0f), (0.00999999978f), (0.5f), NULL);
		return ((float)il2cpp_codegen_multiply(((float)L_4), L_7));
	}

IL_0048:
	{
		// return baseCircleSegments * (Mathf.Abs(angle).Remap(90, 360.0f, 0.5f, 1));
		int32_t L_8 = __this->___baseCircleSegments_16;
		float L_9 = ___0_angle;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11;
		L_11 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(L_10, (90.0f), (360.0f), (0.5f), (1.0f), NULL);
		return ((float)il2cpp_codegen_multiply(((float)L_8), L_11));
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_BaseCircleSegments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_BaseCircleSegments_m045BCBF2E2520F03C64D70A74500D7FBEF185DD3 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get  {  return baseCircleSegments; }
		int32_t L_0 = __this->___baseCircleSegments_16;
		return L_0;
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return angle; }
		int32_t L_0 = __this->___angle_10;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Angle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Angle_mD9C1657DDAE253FF1A133223262CBEAD46E7D538 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (angle != value)
		int32_t L_0 = __this->___angle_10;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		// SetUIAngle(value);
		int32_t L_2 = ___0_value;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_2, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_Quality_mD4FAA57D6D6197E3CB9D02D7CB1247AFCCF350F6 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return quality; }
		float L_0 = __this->___quality_6;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Quality(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Quality_mEFF3E296EAFF96E6E7232328990D25803162264C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (quality != value)
		float L_0 = __this->___quality_6;
		float L_1 = ___0_value;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// quality = value;
		float L_2 = ___0_value;
		__this->___quality_6 = L_2;
		// SetUIAngle(angle);
		int32_t L_3 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::get_Shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return shape; }
		int32_t L_0 = __this->___shape_5;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Shape(CurvedUI.CurvedUISettings/CurvedUIShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Shape_mCA2CBDFEDDD49C0C2C4D8590AC739598532F8686 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (shape != value)
		int32_t L_0 = __this->___shape_5;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// shape = value;
		int32_t L_2 = ___0_value;
		__this->___shape_5 = L_2;
		// SetUIAngle(angle);
		int32_t L_3 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_VerticalAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return vertAngle; }
		int32_t L_0 = __this->___vertAngle_12;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_VerticalAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_VerticalAngle_m9AD2F71C0A6D0254F9CCD3A37F22F4620FC8EC6B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (vertAngle != value)
		int32_t L_0 = __this->___vertAngle_12;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// vertAngle = value;
		int32_t L_2 = ___0_value;
		__this->___vertAngle_12 = L_2;
		// SetUIAngle(angle);
		int32_t L_3 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_RingFill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return ringFill; }
		float L_0 = __this->___ringFill_13;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RingFill(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RingFill_mD2343C4C71EDD3163FB9467D2F29CA8E0DECD7B5 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (ringFill != value)
		float L_0 = __this->___ringFill_13;
		float L_1 = ___0_value;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// ringFill = value;
		float L_2 = ___0_value;
		__this->___ringFill_13 = L_2;
		// SetUIAngle(angle);
		int32_t L_3 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_SavedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// if (savedRadius == 0)
		float L_0 = __this->___savedRadius_18;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// savedRadius = GetCyllinderRadiusInCanvasSpace();
		float L_1;
		L_1 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		__this->___savedRadius_18 = L_1;
	}

IL_0019:
	{
		// return savedRadius;
		float L_2 = __this->___savedRadius_18;
		return L_2;
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_RingExternalDiameter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return ringExternalDiamater; }
		int32_t L_0 = __this->___ringExternalDiamater_14;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RingExternalDiameter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RingExternalDiameter_mCBEF40674FD075AB93AEB259CDDE7DF1AF05C2CD (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (ringExternalDiamater != value)
		int32_t L_0 = __this->___ringExternalDiamater_14;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// ringExternalDiamater = value;
		int32_t L_2 = ___0_value;
		__this->___ringExternalDiamater_14 = L_2;
		// SetUIAngle(angle);
		int32_t L_3 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_RingFlipVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return ringFlipVertical; }
		bool L_0 = __this->___ringFlipVertical_15;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RingFlipVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RingFlipVertical_m893E2DA9625B88F139A510B8C39352A10941AAAA (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (ringFlipVertical != value)
		bool L_0 = __this->___ringFlipVertical_15;
		bool L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// ringFlipVertical = value;
		bool L_2 = ___0_value;
		__this->___ringFlipVertical_15 = L_2;
		// SetUIAngle(angle);
		int32_t L_3 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_PreserveAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return preserveAspect; }
		bool L_0 = __this->___preserveAspect_11;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_PreserveAspect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_PreserveAspect_mB798D4FB119CB461050D66273CF936C1B7B3170F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (preserveAspect != value)
		bool L_0 = __this->___preserveAspect_11;
		bool L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// preserveAspect = value;
		bool L_2 = ___0_value;
		__this->___preserveAspect_11 = L_2;
		// SetUIAngle(angle);
		int32_t L_3 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_Interactable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_Interactable_m6A57BA08D88524E7193019826486886D3062EB79 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return interactable; }
		bool L_0 = __this->___interactable_7;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Interactable_mE60D10E3BEE374F383EEAC362B8196DDA26BC5A8 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set  {  interactable = value; }
		bool L_0 = ___0_value;
		__this->___interactable_7 = L_0;
		// set  {  interactable = value; }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_ForceUseBoxCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_ForceUseBoxCollider_mFE428158D0DE193FADF182F347E403688D909E1C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return forceUseBoxCollider; }
		bool L_0 = __this->___forceUseBoxCollider_9;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_ForceUseBoxCollider(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_ForceUseBoxCollider_m51ED11DA281B2CB2A1BCFCEE417A35D3B53DA72C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set {  forceUseBoxCollider = value; }
		bool L_0 = ___0_value;
		__this->___forceUseBoxCollider_9 = L_0;
		// set {  forceUseBoxCollider = value; }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_BlocksRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_BlocksRaycasts_m52BBCB472D24B4D049A9DA54546D8B9E4B1C8B83 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return blocksRaycasts; }
		bool L_0 = __this->___blocksRaycasts_8;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_BlocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_BlocksRaycasts_m14F5CA757DE16FB8084766C135BA2674535B7E61 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (blocksRaycasts != value) {
		bool L_0 = __this->___blocksRaycasts_8;
		bool L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0030;
		}
	}
	{
		// blocksRaycasts = value;
		bool L_2 = ___0_value;
		__this->___blocksRaycasts_8 = L_2;
		// if (Application.isPlaying && GetComponent<CurvedUIRaycaster>() != null)
		bool L_3;
		L_3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_4;
		L_4 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// GetComponent<CurvedUIRaycaster>().RebuildCollider();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_6;
		L_6 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_6);
		CurvedUIRaycaster_RebuildCollider_m9BCDA92282DCA114A6D7AD52FF7F819BDBAB698F(L_6, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_RaycastMyLayerOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_RaycastMyLayerOnly_mBD1C73BC73E7082E75FFB6161AF34C8707C7C466 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RaycastMyLayerOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RaycastMyLayerOnly_m2E2AC3B6D9CEC62FFD7D3E1C3CFDACD06590D90B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::SetAllChildrenDirty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_SetAllChildrenDirty_m9C0E8DC0098D1AE4C322B12F169D85B8EA9D9D7B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_recalculateCurveOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* V_0 = NULL;
	int32_t V_1 = 0;
	CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* V_2 = NULL;
	{
		// foreach (CurvedUIVertexEffect eff in this.GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_0;
		L_0 = Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B(__this, Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0025;
	}

IL_000b:
	{
		// foreach (CurvedUIVertexEffect eff in this.GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (recalculateCurveOnly)
		bool L_5 = ___0_recalculateCurveOnly;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// eff.SetDirty();
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_6 = V_2;
		NullCheck(L_6);
		CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100(L_6, NULL);
		goto IL_0021;
	}

IL_001a:
	{
		// eff.CurvingRequired = true;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_7 = V_2;
		NullCheck(L_7);
		CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778_inline(L_7, (bool)1, NULL);
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// foreach (CurvedUIVertexEffect eff in this.GetComponentsInChildren<CurvedUIVertexEffect>())
		int32_t L_9 = V_1;
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_PointingAtCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_PointingAtCanvas_mE6BF996D4AE980936B66CE8CC7B95AB21A24431E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BC599F35709DDFA80B78ED2DD26FEC406690B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().PointingAtCanvas;
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_2;
		L_2 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = CurvedUIRaycaster_get_PointingAtCanvas_mAB3CF97B0286809A4116DA42464B7E61A20C29CA_inline(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// Debug.LogWarning("CURVEDUI: Can't check if user is pointing at this canvas - No CurvedUIRaycaster is added to this canvas.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral76BC599F35709DDFA80B78ED2DD26FEC406690B7, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void CurvedUI.CurvedUISettings::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Click_m14BC5598AB1394ED9A0BFAD3A345F74E2D5F3D3C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<CurvedUIRaycaster>().Click();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_2;
		L_2 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_2);
		CurvedUIRaycaster_Click_mC59574F26CE82DE645643D2C8B6225BD274C47E3(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// CurvedUIInputModule/CUIControlMethod CurvedUI.CurvedUISettings::get_ControlMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_ControlMethod_m7D4D0AA4F40F53314965FFD84D0E1F598D5F1AB2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CurvedUIInputModule.ControlMethod; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = CurvedUIInputModule_get_ControlMethod_m7058FE4D37DF0B2C6883329E3EAEC5A2031702AE(NULL);
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_ControlMethod(CurvedUIInputModule/CUIControlMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_ControlMethod_m8C1BBCFA5D09CA3ED76A5339B955E0AFC1B0179A (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.ControlMethod = value; }
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_set_ControlMethod_m66112DB9D3B63E11F99895E897B3EA7A13B8FDC2(L_0, NULL);
		// set { CurvedUIInputModule.ControlMethod = value; }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUISettings::GetObjectsUnderPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUISettings_GetObjectsUnderPointer_mD3FFF32C7D4951142307C6032F4F27C3D413BBAA (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().GetObjectsUnderPointer();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_2;
		L_2 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3;
		L_3 = CurvedUIRaycaster_GetObjectsUnderPointer_m38A63021371980C1EC1A625AB69AC60A3040F950(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// else return new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_4, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		return L_4;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUISettings::GetObjectsUnderScreenPos(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUISettings_GetObjectsUnderScreenPos_m173D6AC6AC2F591C03AF9D798C255269BD17568B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pos, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_eventCamera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___1_eventCamera;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// eventCamera = myCanvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___myCanvas_19;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		___1_eventCamera = L_3;
	}

IL_0016:
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_4;
		L_4 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().GetObjectsUnderScreenPos(pos, eventCamera);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_6;
		L_6 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_pos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___1_eventCamera;
		NullCheck(L_6);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9;
		L_9 = CurvedUIRaycaster_GetObjectsUnderScreenPos_m7F3BB3E9329D6F8180F80173AC25057141176CD0(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_0032:
	{
		// else return new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_10, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUISettings::GetObjectsHitByRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUISettings_GetObjectsHitByRay_m0B0C170AFCCB2917C6804F56608A24176CFFDECA (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().GetObjectsHitByRay(ray);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_2;
		L_2 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3 = ___0_ray;
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4;
		L_4 = CurvedUIRaycaster_GetObjectsHitByRay_m3819C5A0CB923094509F22CDB857231F574310F2(L_2, L_3, NULL);
		return L_4;
	}

IL_001b:
	{
		// else return new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_5, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_GazeUseTimedClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_GazeUseTimedClick_mBBA047875C5EEF68F1BEE44F680E45DB470691F3 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CurvedUIInputModule.Instance.GazeUseTimedClick; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = CurvedUIInputModule_get_GazeUseTimedClick_m5A4D1EF48159BAEAB7442199036ED6071DC0A98C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_GazeUseTimedClick(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_GazeUseTimedClick_m7ADA79F88A8E70E82481629E838291F099233326 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.Instance.GazeUseTimedClick = value; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7(NULL);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		CurvedUIInputModule_set_GazeUseTimedClick_m5103211575DCD154F3173A9DF228B16E1AE76CF0_inline(L_0, L_1, NULL);
		// set { CurvedUIInputModule.Instance.GazeUseTimedClick = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_GazeClickTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_GazeClickTimer_m50979D8F90CA480DA77CA6F7FE1A92909D4BFED9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CurvedUIInputModule.Instance.GazeClickTimer; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = CurvedUIInputModule_get_GazeClickTimer_mBACA415983885ED0D52C2BA1806BD9D999CCAFC3_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_GazeClickTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_GazeClickTimer_mCC42A475945057BBF2D1E44DA1CFE22ED1F9DABC (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.Instance.GazeClickTimer = value; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7(NULL);
		float L_1 = ___0_value;
		NullCheck(L_0);
		CurvedUIInputModule_set_GazeClickTimer_m0FF55B26ECDF47724A45355E8738C49E94759B27(L_0, L_1, NULL);
		// set { CurvedUIInputModule.Instance.GazeClickTimer = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_GazeClickTimerDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_GazeClickTimerDelay_m88B37E81B0EF244C7CB643D653334B1EEAA7608E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CurvedUIInputModule.Instance.GazeClickTimerDelay; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = CurvedUIInputModule_get_GazeClickTimerDelay_mEE9D705F5B6072FA19FA68794CF59F697124E0B7_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_GazeClickTimerDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_GazeClickTimerDelay_m5AC2DE20AB0FC4A37B6F7F76247AD37B2FA5DAFD (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.Instance.GazeClickTimerDelay = value; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7(NULL);
		float L_1 = ___0_value;
		NullCheck(L_0);
		CurvedUIInputModule_set_GazeClickTimerDelay_mFE44D70901F6C53ECEE461865BD69E0F0E26F945(L_0, L_1, NULL);
		// set { CurvedUIInputModule.Instance.GazeClickTimerDelay = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_GazeTimerProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_GazeTimerProgress_m3F999AE0BDD4882652FF2BFCC5D2F1D3640128ED (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CurvedUIInputModule.Instance.GazeTimerProgress; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_mC0CC1ABF0F86FDE5D3BF7892DEC28C545427EFE7(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = CurvedUIInputModule_get_GazeTimerProgress_m20F15F571020564B09F34E9E9E85B31B96792B74_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings__ctor_m5E333D2C43F193634A64BB39D7CA509B9F41914F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// float quality = 1f;
		__this->___quality_6 = (1.0f);
		// bool interactable = true;
		__this->___interactable_7 = (bool)1;
		// bool blocksRaycasts = true;
		__this->___blocksRaycasts_8 = (bool)1;
		// int angle = 90;
		__this->___angle_10 = ((int32_t)90);
		// bool preserveAspect = true;
		__this->___preserveAspect_11 = (bool)1;
		// int vertAngle = 90;
		__this->___vertAngle_12 = ((int32_t)90);
		// float ringFill = 0.5f;
		__this->___ringFill_13 = (0.5f);
		// int ringExternalDiamater = 1000;
		__this->___ringExternalDiamater_14 = ((int32_t)1000);
		// int baseCircleSegments = 16;
		__this->___baseCircleSegments_16 = ((int32_t)16);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_tesselationRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_tesselationRequired; }
		bool L_0 = __this->___m_tesselationRequired_12;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::set_tesselationRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_tesselationRequired = value;
		bool L_0 = ___0_value;
		__this->___m_tesselationRequired_12 = L_0;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_Awake_m767E6EA1B6D65CB0D994318421935C9CB5C26097 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		// myGraphic = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0;
		L_0 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		__this->___myGraphic_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myGraphic_8), (void*)L_0);
		// myText = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___myText_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myText_9), (void*)L_1);
		// myTMP = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2;
		L_2 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___myTMP_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myTMP_10), (void*)L_2);
		// myTMPSubMesh = GetComponent<CurvedUITMPSubmesh>();
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_3;
		L_3 = Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E(__this, Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E_RuntimeMethod_var);
		__this->___myTMPSubMesh_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myTMPSubMesh_11), (void*)L_3);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_OnEnable_m5E60FE552A4CB8D2061EAB1E0B7B06A5E68E775B (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindParentSettings();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0;
		L_0 = CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C(__this, (bool)0, NULL);
		// if (myGraphic)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// myGraphic.RegisterDirtyMaterialCallback(TesselationRequiredCallback);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_3 = __this->___myGraphic_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013(L_3, L_4, NULL);
		// myGraphic.SetVerticesDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = __this->___myGraphic_8;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_5);
	}

IL_0037:
	{
		// if (myText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		// myText.RegisterDirtyVerticesCallback(TesselationRequiredCallback);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___myText_9;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		Graphic_RegisterDirtyVerticesCallback_m46034B2100B5D28BDBCCB34C1283B1B9B2DB9A9E(L_8, L_9, NULL);
		// Font.textureRebuilt += FontTextureRebuiltCallback;
		Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* L_10 = (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*)il2cpp_codegen_object_new(Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F(L_10, __this, (intptr_t)((void*)CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var), NULL);
		Font_add_textureRebuilt_m0BBB44846C17A580B078599DA5AE231DA9D6DAD7(L_10, NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_Start_mEB06E70C40E33DE0315822BBC71CA0627889F975 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B46302701BEE88904D8B185D12F907471B2D231);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// base.Start();
		UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45(__this, NULL);
		// if (myCanvas && GetComponent<Selectable>())
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___myCanvas_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_014d;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2;
		L_2 = Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611(__this, Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_014d;
		}
	}
	{
		// Vector3 myPosOnCanvas = myCanvas.transform.worldToLocalMatrix.MultiplyPoint3x4(this.transform.position);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___myCanvas_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_5, NULL);
		V_2 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_8, NULL);
		V_0 = L_9;
		// RectTransform canvasRect = (myCanvas.transform as RectTransform);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = __this->___myCanvas_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		V_1 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_11, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (myPosOnCanvas.x.Abs() > canvasRect.rect.width / 2.0f || myPosOnCanvas.y.Abs() > canvasRect.rect.height / 2.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___x_2;
		float L_14;
		L_14 = CurvedUIExtensionMethods_Abs_mFD2F1C475F2570ACC3F4037ADD89B031F89CE0AA(L_13, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_1;
		NullCheck(L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_15, NULL);
		V_3 = L_16;
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_3), NULL);
		if ((((float)L_14) > ((float)((float)(L_17/(2.0f))))))
		{
			goto IL_009d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = L_18.___y_3;
		float L_20;
		L_20 = CurvedUIExtensionMethods_Abs_mFD2F1C475F2570ACC3F4037ADD89B031F89CE0AA(L_19, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = V_1;
		NullCheck(L_21);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		L_22 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_21, NULL);
		V_3 = L_22;
		float L_23;
		L_23 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_3), NULL);
		if ((!(((float)L_20) > ((float)((float)(L_23/(2.0f)))))))
		{
			goto IL_00ec;
		}
	}

IL_009d:
	{
		// Debug.LogWarning("CurvedUI: " + GetComponent<Selectable>().GetType().Name + " \"" + this.gameObject.name + "\" is outside of the canvas. It will not be interactable. Move it inside the canvas rectangle (white border in scene view) for it to work.", this.gameObject);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_27;
		L_27 = Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611(__this, Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_27, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_26;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8);
		String_t* L_35;
		L_35 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_34, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_35, L_36, NULL);
	}

IL_00ec:
	{
		// if (myPosOnCanvas.z.Abs() > 0.1f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_0;
		float L_38 = L_37.___z_4;
		float L_39;
		L_39 = CurvedUIExtensionMethods_Abs_mFD2F1C475F2570ACC3F4037ADD89B031F89CE0AA(L_38, NULL);
		if ((!(((float)L_39) > ((float)(0.100000001f)))))
		{
			goto IL_014d;
		}
	}
	{
		// Debug.LogWarning("CurvedUI: The Z position of \"" + this.gameObject.name + "\" "  + GetComponent<Selectable>().GetType().Name + ", or one of its parents is not 0 in relation to the canvas. The interactions may not be accurate.", this.gameObject);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral3B46302701BEE88904D8B185D12F907471B2D231);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B46302701BEE88904D8B185D12F907471B2D231);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_43);
		String_t* L_44;
		L_44 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_43, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_42;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_47;
		L_47 = Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611(__this, Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		NullCheck(L_47);
		Type_t* L_48;
		L_48 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_47, NULL);
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_46;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3);
		String_t* L_51;
		L_51 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_50, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_51, L_52, NULL);
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_OnDisable_m4DC70EC14555E6EF30D929E501EF06992ABE2571 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (myGraphic)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// myGraphic.UnregisterDirtyMaterialCallback(TesselationRequiredCallback);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = __this->___myGraphic_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2(L_2, L_3, NULL);
	}

IL_0024:
	{
		// if (myText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		// myText.UnregisterDirtyVerticesCallback(TesselationRequiredCallback);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___myText_9;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Graphic_UnregisterDirtyVerticesCallback_mA36A388BF7DDB2D71596D6F13CEFCA79B4199B5C(L_6, L_7, NULL);
		// Font.textureRebuilt -= FontTextureRebuiltCallback;
		Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* L_8 = (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*)il2cpp_codegen_object_new(Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F(L_8, __this, (intptr_t)((void*)CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var), NULL);
		Font_remove_textureRebuilt_mB7EF9EEE803E9C70AF4217190B49C83FE287904A(L_8, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::TesselationRequiredCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::FontTextureRebuiltCallback(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_fontie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (myText.font == fontie)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___myText_9;
		NullCheck(L_0);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1;
		L_1 = Text_get_font_mBF98ED39D5C5081AF14A64170EC3391D206CCAFD(L_0, NULL);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_2 = ___0_fontie;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)1, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_LateUpdate_m01DB3E1ECDB79517881D7FAA20D540919C105A2B (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (myTMP || myTMPSubMesh) return;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___myTMP_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_2 = __this->___myTMPSubMesh_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		// if (myTMP || myTMPSubMesh) return;
		return;
	}

IL_001b:
	{
		// if (!tesselationRequired)
		bool L_4;
		L_4 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29_inline(__this, NULL);
		if (L_4)
		{
			goto IL_00d9;
		}
	}
	{
		// if ((transform as RectTransform).rect.size != savedRectSize)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_5, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_5, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___savedRectSize_27;
		bool L_9;
		L_9 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)1, NULL);
		goto IL_00d9;
	}

IL_0057:
	{
		// else if (myGraphic != null)//test for color changes if it has a graphic component
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_10 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00d9;
		}
	}
	{
		// if (myGraphic.color != savedColor)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_12 = __this->___myGraphic_8;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___savedColor_28;
		bool L_15;
		L_15 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0097;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)1, NULL);
		// savedColor = myGraphic.color;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_16 = __this->___myGraphic_8;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_16);
		__this->___savedColor_28 = L_17;
		goto IL_00d9;
	}

IL_0097:
	{
		// else if (myGraphic is Image)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_18 = __this->___myGraphic_8;
		if (!((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_18, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)))
		{
			goto IL_00d9;
		}
	}
	{
		// if ((myGraphic as Image).fillAmount != savedFill)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_19 = __this->___myGraphic_8;
		NullCheck(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_19, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)));
		float L_20;
		L_20 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_19, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), NULL);
		float L_21 = __this->___savedFill_30;
		if ((((float)L_20) == ((float)L_21)))
		{
			goto IL_00d9;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)1, NULL);
		// savedFill = (myGraphic as Image).fillAmount;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_22 = __this->___myGraphic_8;
		NullCheck(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_22, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)));
		float L_23;
		L_23 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_22, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), NULL);
		__this->___savedFill_30 = L_23;
	}

IL_00d9:
	{
		// if (!tesselationRequired && !curvingRequired) // do not perform a check if we're already tesselating or curving. Tesselation includes curving.
		bool L_24;
		L_24 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29_inline(__this, NULL);
		if (L_24)
		{
			goto IL_0243;
		}
	}
	{
		bool L_25 = __this->___curvingRequired_13;
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		// Vector3 testedPos = mySettings.transform.worldToLocalMatrix.MultiplyPoint3x4(this.transform.position);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_26 = __this->___mySettings_7;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28;
		L_28 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_27, NULL);
		V_3 = L_28;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_30, NULL);
		V_1 = L_31;
		// if (!testedPos.AlmostEqual(savedPos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___savedPos_25;
		bool L_34;
		L_34 = CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E(L_32, L_33, (0.01), NULL);
		if (L_34)
		{
			goto IL_0195;
		}
	}
	{
		// if (mySettings.Shape != CurvedUISettings.CurvedUIShape.CYLINDER || Mathf.Pow(testedPos.x - savedPos.x, 2) > 0.00001 || Mathf.Pow(testedPos.z - savedPos.z, 2) > 0.00001)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_35 = __this->___mySettings_7;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_35, NULL);
		if (L_36)
		{
			goto IL_0187;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		float L_38 = L_37.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&__this->___savedPos_25);
		float L_40 = L_39->___x_2;
		float L_41;
		L_41 = powf(((float)il2cpp_codegen_subtract(L_38, L_40)), (2.0f));
		if ((((double)((double)L_41)) > ((double)(1.0000000000000001E-05))))
		{
			goto IL_0187;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		float L_43 = L_42.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___savedPos_25);
		float L_45 = L_44->___z_4;
		float L_46;
		L_46 = powf(((float)il2cpp_codegen_subtract(L_43, L_45)), (2.0f));
		if ((!(((double)((double)L_46)) > ((double)(1.0000000000000001E-05)))))
		{
			goto IL_0195;
		}
	}

IL_0187:
	{
		// savedPos = testedPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		__this->___savedPos_25 = L_47;
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
	}

IL_0195:
	{
		// Vector3 testedUp = mySettings.transform.worldToLocalMatrix.MultiplyVector(this.transform.up).normalized;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_48 = __this->___mySettings_7;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		NullCheck(L_49);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_50;
		L_50 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_49, NULL);
		V_3 = L_50;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_3), L_52, NULL);
		V_4 = L_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_2 = L_54;
		// if (!savedUp.AlmostEqual(testedUp, 0.0001))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = __this->___savedUp_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_2;
		bool L_57;
		L_57 = CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E(L_55, L_56, (0.0001), NULL);
		if (L_57)
		{
			goto IL_0243;
		}
	}
	{
		// bool testedEqual = testedUp.AlmostEqual(Vector3.up.normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_4 = L_59;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		bool L_61;
		L_61 = CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E(L_58, L_60, (0.01), NULL);
		V_5 = L_61;
		// bool savedEqual = savedUp.AlmostEqual(Vector3.up.normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = __this->___savedUp_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_4 = L_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		bool L_65;
		L_65 = CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E(L_62, L_64, (0.01), NULL);
		V_6 = L_65;
		// if ((!testedEqual && savedEqual) || (testedEqual && !savedEqual))
		bool L_66 = V_5;
		bool L_67 = V_6;
		if (((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67)))
		{
			goto IL_022e;
		}
	}
	{
		bool L_68 = V_5;
		if (!L_68)
		{
			goto IL_0235;
		}
	}
	{
		bool L_69 = V_6;
		if (L_69)
		{
			goto IL_0235;
		}
	}

IL_022e:
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)1, NULL);
	}

IL_0235:
	{
		// savedUp = testedUp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_2;
		__this->___savedUp_26 = L_70;
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
	}

IL_0243:
	{
		// if (myGraphic && (tesselationRequired || curvingRequired)) myGraphic.SetVerticesDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_71 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_71, NULL);
		if (!L_72)
		{
			goto IL_026b;
		}
	}
	{
		bool L_73;
		L_73 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29_inline(__this, NULL);
		if (L_73)
		{
			goto IL_0260;
		}
	}
	{
		bool L_74 = __this->___curvingRequired_13;
		if (!L_74)
		{
			goto IL_026b;
		}
	}

IL_0260:
	{
		// if (myGraphic && (tesselationRequired || curvingRequired)) myGraphic.SetVerticesDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_75 = __this->___myGraphic_8;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_75);
	}

IL_026b:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyMesh_m2FEB862629B87156F545250B890DAFCCD4136300 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___0_vh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (!ShouldModify()) return;
		bool L_0;
		L_0 = CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!ShouldModify()) return;
		return;
	}

IL_0009:
	{
		// CheckTextFontMaterial();
		CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637(__this, NULL);
		// if (tesselationRequired || !Application.isPlaying)
		bool L_1;
		L_1 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29_inline(__this, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_2)
		{
			goto IL_0082;
		}
	}

IL_001e:
	{
		// if (m_tesselatedVerts == null)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_3 = __this->___m_tesselatedVerts_19;
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		// m_tesselatedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_4, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_tesselatedVerts_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_tesselatedVerts_19), (void*)L_4);
		goto IL_003e;
	}

IL_0033:
	{
		// m_tesselatedVerts.Clear();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_5 = __this->___m_tesselatedVerts_19;
		NullCheck(L_5);
		List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline(L_5, List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
	}

IL_003e:
	{
		// vh.GetUIVertexStream(m_tesselatedVerts);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_6 = ___0_vh;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_7 = __this->___m_tesselatedVerts_19;
		NullCheck(L_6);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_6, L_7, NULL);
		// TesselateGeometry(m_tesselatedVerts);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = __this->___m_tesselatedVerts_19;
		CurvedUIVertexEffect_TesselateGeometry_m001143606FBA1736ACA55BBA194527DB340EEE8A(__this, L_8, NULL);
		// savedRectSize = (transform as RectTransform).rect.size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_9, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_9, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		__this->___savedRectSize_27 = L_11;
		// tesselationRequired = false;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)0, NULL);
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
	}

IL_0082:
	{
		// if (curvingRequired)
		bool L_12 = __this->___curvingRequired_13;
		if (!L_12)
		{
			goto IL_01e9;
		}
	}
	{
		// CanvasToWorld = myCanvas.transform.localToWorldMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13 = __this->___myCanvas_6;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_14, NULL);
		__this->___CanvasToWorld_15 = L_15;
		// CanvasToLocal = myCanvas.transform.worldToLocalMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___myCanvas_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_17, NULL);
		__this->___CanvasToLocal_16 = L_18;
		// MyToWorld = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_19, NULL);
		__this->___MyToWorld_17 = L_20;
		// MyToLocal = transform.worldToLocalMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22;
		L_22 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_21, NULL);
		__this->___MyToLocal_18 = L_22;
		// if (m_curvedVerts == null)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = __this->___m_curvedVerts_20;
		if (L_23)
		{
			goto IL_00ee;
		}
	}
	{
		// m_curvedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_24 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_24, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_curvedVerts_20 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_curvedVerts_20), (void*)L_24);
	}

IL_00ee:
	{
		// if (m_curvedVerts.Count == m_tesselatedVerts.Count)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_25 = __this->___m_curvedVerts_20;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_25, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_27 = __this->___m_tesselatedVerts_19;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_27, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_0170;
		}
	}
	{
		// for (int i = 0; i < m_curvedVerts.Count; i++)
		V_1 = 0;
		goto IL_0160;
	}

IL_010a:
	{
		// m_curvedVerts[i] = CurveVertex(m_tesselatedVerts[i], mySettings.Angle, mySettings.GetCyllinderRadiusInCanvasSpace(), (myCanvas.transform as RectTransform).rect.size);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_29 = __this->___m_curvedVerts_20;
		int32_t L_30 = V_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_31 = __this->___m_tesselatedVerts_19;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33;
		L_33 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_31, L_32, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_34 = __this->___mySettings_7;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(L_34, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_36 = __this->___mySettings_7;
		NullCheck(L_36);
		float L_37;
		L_37 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(L_36, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_38 = __this->___myCanvas_6;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_39, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_40;
		L_40 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_39, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_40;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_42;
		L_42 = CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA(__this, L_33, ((float)L_35), L_37, L_41, NULL);
		NullCheck(L_29);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_29, L_30, L_42, List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		// for (int i = 0; i < m_curvedVerts.Count; i++)
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0160:
	{
		// for (int i = 0; i < m_curvedVerts.Count; i++)
		int32_t L_44 = V_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_45 = __this->___m_curvedVerts_20;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_45, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_010a;
		}
	}
	{
		goto IL_01e2;
	}

IL_0170:
	{
		// m_curvedVerts.Clear();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_47 = __this->___m_curvedVerts_20;
		NullCheck(L_47);
		List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline(L_47, List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		// for (int i = 0; i < m_tesselatedVerts.Count; i++)
		V_2 = 0;
		goto IL_01d4;
	}

IL_017f:
	{
		// m_curvedVerts.Add(CurveVertex(m_tesselatedVerts[i], mySettings.Angle, mySettings.GetCyllinderRadiusInCanvasSpace(), (myCanvas.transform as RectTransform).rect.size));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_48 = __this->___m_curvedVerts_20;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_49 = __this->___m_tesselatedVerts_19;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_51;
		L_51 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_49, L_50, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_52 = __this->___mySettings_7;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(L_52, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_54 = __this->___mySettings_7;
		NullCheck(L_54);
		float L_55;
		L_55 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(L_54, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_56 = __this->___myCanvas_6;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_56, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_57, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_58;
		L_58 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_57, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_60;
		L_60 = CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA(__this, L_51, ((float)L_53), L_55, L_59, NULL);
		NullCheck(L_48);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_48, L_60, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// for (int i = 0; i < m_tesselatedVerts.Count; i++)
		int32_t L_61 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_01d4:
	{
		// for (int i = 0; i < m_tesselatedVerts.Count; i++)
		int32_t L_62 = V_2;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_63 = __this->___m_tesselatedVerts_19;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_63, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_017f;
		}
	}

IL_01e2:
	{
		// curvingRequired = false;
		__this->___curvingRequired_13 = (bool)0;
	}

IL_01e9:
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_65 = ___0_vh;
		NullCheck(L_65);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_65, NULL);
		// if (m_curvedVerts.Count % 4 == 0)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_66 = __this->___m_curvedVerts_20;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_66, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if (((int32_t)(L_67%4)))
		{
			goto IL_0262;
		}
	}
	{
		// for (int i = 0; i < m_curvedVerts.Count; i += 4)
		V_3 = 0;
		goto IL_0253;
	}

IL_0202:
	{
		// int currentVertCount = vh.currentVertCount;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_68 = ___0_vh;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4(L_68, NULL);
		V_4 = L_69;
		// for (int v = 0; v < 4; v++)//create a quad
		V_5 = 0;
		goto IL_022a;
	}

IL_020f:
	{
		// vh.AddVert( m_curvedVerts[i + v]);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_70 = ___0_vh;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_71 = __this->___m_curvedVerts_20;
		int32_t L_72 = V_3;
		int32_t L_73 = V_5;
		NullCheck(L_71);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_74;
		L_74 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_71, ((int32_t)il2cpp_codegen_add(L_72, L_73)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_70);
		VertexHelper_AddVert_mB65D778E8E3C6916CDFF5382208890882C3031BA(L_70, L_74, NULL);
		// for (int v = 0; v < 4; v++)//create a quad
		int32_t L_75 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_022a:
	{
		// for (int v = 0; v < 4; v++)//create a quad
		int32_t L_76 = V_5;
		if ((((int32_t)L_76) < ((int32_t)4)))
		{
			goto IL_020f;
		}
	}
	{
		// vh.AddTriangle(currentVertCount, currentVertCount + 1, currentVertCount + 2);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_77 = ___0_vh;
		int32_t L_78 = V_4;
		int32_t L_79 = V_4;
		int32_t L_80 = V_4;
		NullCheck(L_77);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_77, L_78, ((int32_t)il2cpp_codegen_add(L_79, 1)), ((int32_t)il2cpp_codegen_add(L_80, 2)), NULL);
		// vh.AddTriangle(currentVertCount + 2, currentVertCount + 3, currentVertCount);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_81 = ___0_vh;
		int32_t L_82 = V_4;
		int32_t L_83 = V_4;
		int32_t L_84 = V_4;
		NullCheck(L_81);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_81, ((int32_t)il2cpp_codegen_add(L_82, 2)), ((int32_t)il2cpp_codegen_add(L_83, 3)), L_84, NULL);
		// for (int i = 0; i < m_curvedVerts.Count; i += 4)
		int32_t L_85 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_85, 4));
	}

IL_0253:
	{
		// for (int i = 0; i < m_curvedVerts.Count; i += 4)
		int32_t L_86 = V_3;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_87 = __this->___m_curvedVerts_20;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_87, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_0202;
		}
	}
	{
		return;
	}

IL_0262:
	{
		// else vh.AddUIVertexTriangleStream(m_curvedVerts);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_89 = ___0_vh;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_90 = __this->___m_curvedVerts_20;
		NullCheck(L_89);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_89, L_90, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyTMPMesh(System.Collections.Generic.List`1<UnityEngine.UIVertex>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyTMPMesh_m1399E60A903D57BEA95FE80DE7CBF42E50C104F2 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** ___0_vertexList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!ShouldModify()) return;
		bool L_0;
		L_0 = CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!ShouldModify()) return;
		return;
	}

IL_0009:
	{
		// CheckTextFontMaterial();
		CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637(__this, NULL);
		// tesselationRequired = false;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)0, NULL);
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
		// if (curvingRequired)
		bool L_1 = __this->___curvingRequired_13;
		if (!L_1)
		{
			goto IL_00d9;
		}
	}
	{
		// CanvasToWorld = myCanvas.transform.localToWorldMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___myCanvas_6;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_3, NULL);
		__this->___CanvasToWorld_15 = L_4;
		// CanvasToLocal = myCanvas.transform.worldToLocalMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = __this->___myCanvas_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_6, NULL);
		__this->___CanvasToLocal_16 = L_7;
		// MyToWorld = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_8, NULL);
		__this->___MyToWorld_17 = L_9;
		// MyToLocal = transform.worldToLocalMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_10, NULL);
		__this->___MyToLocal_18 = L_11;
		// for (int i = 0; i < vertexList.Count; i++)
		V_0 = 0;
		goto IL_00c8;
	}

IL_007a:
	{
		// vertexList[i] = CurveVertex(vertexList[i], mySettings.Angle, mySettings.GetCyllinderRadiusInCanvasSpace(), (myCanvas.transform as RectTransform).rect.size);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_12 = ___0_vertexList;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_13 = *((List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A**)L_12);
		int32_t L_14 = V_0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_15 = ___0_vertexList;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_16 = *((List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A**)L_15);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_18;
		L_18 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_16, L_17, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_19 = __this->___mySettings_7;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(L_19, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_21 = __this->___mySettings_7;
		NullCheck(L_21);
		float L_22;
		L_22 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(L_21, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_23 = __this->___myCanvas_6;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_24, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_25;
		L_25 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_24, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_27;
		L_27 = CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA(__this, L_18, ((float)L_20), L_22, L_26, NULL);
		NullCheck(L_13);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_13, L_14, L_27, List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		// for (int i = 0; i < vertexList.Count; i++)
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c8:
	{
		// for (int i = 0; i < vertexList.Count; i++)
		int32_t L_29 = V_0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_30 = ___0_vertexList;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_31 = *((List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A**)L_30);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_31, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_32)))
		{
			goto IL_007a;
		}
	}
	{
		// curvingRequired = false;
		__this->___curvingRequired_13 = (bool)0;
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIVertexEffect::ShouldModify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsActive()) return false;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (!this.IsActive()) return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (mySettings == null) FindParentSettings();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_1 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// if (mySettings == null) FindParentSettings();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_3;
		L_3 = CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C(__this, (bool)0, NULL);
	}

IL_0020:
	{
		// if (mySettings == null || !mySettings.enabled || mySettings.Angle == 1) return false;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_4 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_6 = __this->___mySettings_7;
		NullCheck(L_6);
		bool L_7;
		L_7 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_6, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_8 = __this->___mySettings_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		// if (mySettings == null || !mySettings.enabled || mySettings.Angle == 1) return false;
		return (bool)0;
	}

IL_004b:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::CheckTextFontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tA7C96C24DE882DB5FA936CA80F46608A0041A566_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (myText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		// if (myText.cachedTextGenerator.verts.Count > 0 && myText.cachedTextGenerator.verts[0].uv0 != savedTextUV0)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___myText_9;
		NullCheck(L_2);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_3;
		L_3 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, ICollection_1_tA7C96C24DE882DB5FA936CA80F46608A0041A566_il2cpp_TypeInfo_var, L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___myText_9;
		NullCheck(L_6);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_7;
		L_7 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_6, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8(L_7, NULL);
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_9;
		L_9 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var, L_8, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = L_9.___uv0_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = __this->___savedTextUV0_29;
		bool L_12;
		L_12 = Vector4_op_Inequality_mD6A1C6E862F3EFB1B222A2DDCB7A7237042DE142_inline(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// savedTextUV0 = myText.cachedTextGenerator.verts[0].uv0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___myText_9;
		NullCheck(L_13);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_14;
		L_14 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_13, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8(L_14, NULL);
		NullCheck(L_15);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var, L_15, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = L_16.___uv0_4;
		__this->___savedTextUV0_29 = L_17;
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, (bool)1, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// CurvedUI.CurvedUISettings CurvedUI.CurvedUIVertexEffect::FindParentSettings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_forceNew, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mySettings == null || forceNew)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_2 = ___0_forceNew;
		if (!((int32_t)((int32_t)L_1|(int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		// mySettings = GetComponentInParent<CurvedUISettings>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_3;
		L_3 = Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7(__this, Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		__this->___mySettings_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySettings_7), (void*)L_3);
		// if (mySettings == null) return null;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_4 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// if (mySettings == null) return null;
		return (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2*)NULL;
	}

IL_002c:
	{
		// myCanvas = mySettings.GetComponent<Canvas>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_6 = __this->___mySettings_7;
		NullCheck(L_6);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7;
		L_7 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_6, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___myCanvas_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCanvas_6), (void*)L_7);
	}

IL_003d:
	{
		// return mySettings;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_8 = __this->___mySettings_7;
		return L_8;
	}
}
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::CurveVertex(UnityEngine.UIVertex,System.Single,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_input, float ___1_cylinder_angle, float ___2_radius, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_canvasSize, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	int32_t G_B13_0 = 0;
	float G_B13_1 = 0.0f;
	float G_B13_2 = 0.0f;
	float G_B13_3 = 0.0f;
	{
		// Vector3 pos = input.position;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_0 = ___0_input;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___position_0;
		V_0 = L_1;
		// pos = CanvasToLocal.MultiplyPoint3x4(MyToWorld.MultiplyPoint3x4(pos));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = (&__this->___CanvasToLocal_16);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->___MyToWorld_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_2, L_5, NULL);
		V_0 = L_6;
		// if (mySettings.Shape == CurvedUISettings.CurvedUIShape.CYLINDER && mySettings.Angle != 0)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_7 = __this->___mySettings_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_0083;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_9 = __this->___mySettings_7;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		// float theta = (pos.x / canvasSize.x) * cylinder_angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___3_canvasSize;
		float L_14 = L_13.___x_0;
		float L_15 = ___1_cylinder_angle;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_12/L_14)), L_15)), (0.0174532924f)));
		// radius += pos.z; // change the radius depending on how far the element is moved in z direction from canvas plane
		float L_16 = ___2_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		float L_18 = L_17.___z_4;
		___2_radius = ((float)il2cpp_codegen_add(L_16, L_18));
		// pos.x = Mathf.Sin(theta) * radius;
		float L_19 = V_1;
		float L_20;
		L_20 = sinf(L_19);
		float L_21 = ___2_radius;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(L_20, L_21));
		// pos.z += Mathf.Cos(theta) * radius - radius;
		float* L_22 = (&(&V_0)->___z_4);
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		float L_25 = V_1;
		float L_26;
		L_26 = cosf(L_25);
		float L_27 = ___2_radius;
		float L_28 = ___2_radius;
		*((float*)L_23) = (float)((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_26, L_27)), L_28))));
		goto IL_0354;
	}

IL_0083:
	{
		// else if (mySettings.Shape == CurvedUISettings.CurvedUIShape.CYLINDER_VERTICAL && mySettings.Angle != 0)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_29 = __this->___mySettings_7;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_29, NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)3))))
		{
			goto IL_00e8;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_31 = __this->___mySettings_7;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(L_31, NULL);
		if (!L_32)
		{
			goto IL_00e8;
		}
	}
	{
		// float theta = (pos.y / canvasSize.y) * cylinder_angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		float L_34 = L_33.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___3_canvasSize;
		float L_36 = L_35.___y_1;
		float L_37 = ___1_cylinder_angle;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_34/L_36)), L_37)), (0.0174532924f)));
		// radius += pos.z; // change the radius depending on how far the element is moved in z direction from canvas plane
		float L_38 = ___2_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_0;
		float L_40 = L_39.___z_4;
		___2_radius = ((float)il2cpp_codegen_add(L_38, L_40));
		// pos.y = Mathf.Sin(theta) * radius;
		float L_41 = V_2;
		float L_42;
		L_42 = sinf(L_41);
		float L_43 = ___2_radius;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(L_42, L_43));
		// pos.z += Mathf.Cos(theta) * radius - radius;
		float* L_44 = (&(&V_0)->___z_4);
		float* L_45 = L_44;
		float L_46 = *((float*)L_45);
		float L_47 = V_2;
		float L_48;
		L_48 = cosf(L_47);
		float L_49 = ___2_radius;
		float L_50 = ___2_radius;
		*((float*)L_45) = (float)((float)il2cpp_codegen_add(L_46, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_48, L_49)), L_50))));
		goto IL_0354;
	}

IL_00e8:
	{
		// else if (mySettings.Shape == CurvedUISettings.CurvedUIShape.RING)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_51 = __this->___mySettings_7;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_51, NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_01dd;
		}
	}
	{
		// float angleOffset = 0;
		V_3 = (0.0f);
		// float r = pos.y.Remap(canvasSize.y * 0.5f * (mySettings.RingFlipVertical ? 1 : -1), -canvasSize.y * 0.5f * (mySettings.RingFlipVertical ? 1 : -1), mySettings.RingExternalDiameter * (1 - mySettings.RingFill) * 0.5f, mySettings.RingExternalDiameter * 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_0;
		float L_54 = L_53.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = ___3_canvasSize;
		float L_56 = L_55.___y_1;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_57 = __this->___mySettings_7;
		NullCheck(L_57);
		bool L_58;
		L_58 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2_inline(L_57, NULL);
		G_B8_0 = ((float)il2cpp_codegen_multiply(L_56, (0.5f)));
		G_B8_1 = L_54;
		if (L_58)
		{
			G_B9_0 = ((float)il2cpp_codegen_multiply(L_56, (0.5f)));
			G_B9_1 = L_54;
			goto IL_0122;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0123;
	}

IL_0122:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0123:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = ___3_canvasSize;
		float L_60 = L_59.___y_1;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_61 = __this->___mySettings_7;
		NullCheck(L_61);
		bool L_62;
		L_62 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2_inline(L_61, NULL);
		G_B11_0 = ((float)il2cpp_codegen_multiply(((-L_60)), (0.5f)));
		G_B11_1 = ((float)il2cpp_codegen_multiply(G_B10_1, ((float)G_B10_0)));
		G_B11_2 = G_B10_2;
		if (L_62)
		{
			G_B12_0 = ((float)il2cpp_codegen_multiply(((-L_60)), (0.5f)));
			G_B12_1 = ((float)il2cpp_codegen_multiply(G_B10_1, ((float)G_B10_0)));
			G_B12_2 = G_B10_2;
			goto IL_0143;
		}
	}
	{
		G_B13_0 = (-1);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_0144;
	}

IL_0143:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_0144:
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_63 = __this->___mySettings_7;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9_inline(L_63, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_65 = __this->___mySettings_7;
		NullCheck(L_65);
		float L_66;
		L_66 = CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1_inline(L_65, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_67 = __this->___mySettings_7;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9_inline(L_67, NULL);
		float L_69;
		L_69 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(G_B13_3, G_B13_2, ((float)il2cpp_codegen_multiply(G_B13_1, ((float)G_B13_0))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_64), ((float)il2cpp_codegen_subtract((1.0f), L_66)))), (0.5f))), ((float)il2cpp_codegen_multiply(((float)L_68), (0.5f))), NULL);
		V_4 = L_69;
		// float theta = (pos.x / canvasSize.x).Remap(-0.5f, 0.5f, Mathf.PI / 2.0f, cylinder_angle * Mathf.Deg2Rad + Mathf.PI / 2.0f) - angleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_0;
		float L_71 = L_70.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = ___3_canvasSize;
		float L_73 = L_72.___x_0;
		float L_74 = ___1_cylinder_angle;
		float L_75;
		L_75 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(((float)(L_71/L_73)), (-0.5f), (0.5f), (1.57079637f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_74, (0.0174532924f))), (1.57079637f))), NULL);
		float L_76 = V_3;
		V_5 = ((float)il2cpp_codegen_subtract(L_75, L_76));
		// pos.x = r * Mathf.Cos(theta);
		float L_77 = V_4;
		float L_78 = V_5;
		float L_79;
		L_79 = cosf(L_78);
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(L_77, L_79));
		// pos.y = r * Mathf.Sin(theta);
		float L_80 = V_4;
		float L_81 = V_5;
		float L_82;
		L_82 = sinf(L_81);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(L_80, L_82));
		goto IL_0354;
	}

IL_01dd:
	{
		// else if (mySettings.Shape == CurvedUISettings.CurvedUIShape.SPHERE && mySettings.Angle != 0)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_83 = __this->___mySettings_7;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_83, NULL);
		if ((!(((uint32_t)L_84) == ((uint32_t)2))))
		{
			goto IL_0354;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_85 = __this->___mySettings_7;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline(L_85, NULL);
		if (!L_86)
		{
			goto IL_0354;
		}
	}
	{
		// float vangle = mySettings.VerticalAngle;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_87 = __this->___mySettings_7;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4_inline(L_87, NULL);
		V_6 = ((float)L_88);
		// float savedZ = -pos.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_0;
		float L_90 = L_89.___z_4;
		V_7 = ((-L_90));
		// if (mySettings.PreserveAspect)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_91 = __this->___mySettings_7;
		NullCheck(L_91);
		bool L_92;
		L_92 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(L_91, NULL);
		if (!L_92)
		{
			goto IL_0237;
		}
	}
	{
		// vangle = cylinder_angle * (canvasSize.y / canvasSize.x);
		float L_93 = ___1_cylinder_angle;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = ___3_canvasSize;
		float L_95 = L_94.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96 = ___3_canvasSize;
		float L_97 = L_96.___x_0;
		V_6 = ((float)il2cpp_codegen_multiply(L_93, ((float)(L_95/L_97))));
		goto IL_0251;
	}

IL_0237:
	{
		// radius = canvasSize.x / 2.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = ___3_canvasSize;
		float L_99 = L_98.___x_0;
		___2_radius = ((float)(L_99/(2.0f)));
		// if (vangle == 0) return input;
		float L_100 = V_6;
		if ((!(((float)L_100) == ((float)(0.0f)))))
		{
			goto IL_0251;
		}
	}
	{
		// if (vangle == 0) return input;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_101 = ___0_input;
		return L_101;
	}

IL_0251:
	{
		// float theta = (pos.x / canvasSize.x).Remap(-0.5f, 0.5f, (180 - cylinder_angle) / 2.0f - 90, 180 - (180 - cylinder_angle) / 2.0f - 90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_0;
		float L_103 = L_102.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = ___3_canvasSize;
		float L_105 = L_104.___x_0;
		float L_106 = ___1_cylinder_angle;
		float L_107 = ___1_cylinder_angle;
		float L_108;
		L_108 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(((float)(L_103/L_105)), (-0.5f), (0.5f), ((float)il2cpp_codegen_subtract(((float)(((float)il2cpp_codegen_subtract((180.0f), L_106))/(2.0f))), (90.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_107))/(2.0f))))), (90.0f))), NULL);
		V_8 = L_108;
		// theta *= Mathf.Deg2Rad;
		float L_109 = V_8;
		V_8 = ((float)il2cpp_codegen_multiply(L_109, (0.0174532924f)));
		// float gamma = (pos.y / canvasSize.y).Remap(-0.5f, 0.5f, (180 - vangle) / 2.0f, 180 - (180 - vangle) / 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_0;
		float L_111 = L_110.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = ___3_canvasSize;
		float L_113 = L_112.___y_1;
		float L_114 = V_6;
		float L_115 = V_6;
		float L_116;
		L_116 = CurvedUIExtensionMethods_Remap_m058E57FC7968500F2D109AB7D8DD900AAB8BDA49(((float)(L_111/L_113)), (-0.5f), (0.5f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_114))/(2.0f))), ((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_115))/(2.0f))))), NULL);
		V_9 = L_116;
		// gamma *= Mathf.Deg2Rad;
		float L_117 = V_9;
		V_9 = ((float)il2cpp_codegen_multiply(L_117, (0.0174532924f)));
		// pos.z = Mathf.Sin(gamma) * Mathf.Cos(theta) * (radius + savedZ);
		float L_118 = V_9;
		float L_119;
		L_119 = sinf(L_118);
		float L_120 = V_8;
		float L_121;
		L_121 = cosf(L_120);
		float L_122 = ___2_radius;
		float L_123 = V_7;
		(&V_0)->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_119, L_121)), ((float)il2cpp_codegen_add(L_122, L_123))));
		// pos.y = -(radius + savedZ) * Mathf.Cos(gamma);
		float L_124 = ___2_radius;
		float L_125 = V_7;
		float L_126 = V_9;
		float L_127;
		L_127 = cosf(L_126);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_add(L_124, L_125)))), L_127));
		// pos.x = Mathf.Sin(gamma) * Mathf.Sin(theta) * (radius + savedZ);
		float L_128 = V_9;
		float L_129;
		L_129 = sinf(L_128);
		float L_130 = V_8;
		float L_131;
		L_131 = sinf(L_130);
		float L_132 = ___2_radius;
		float L_133 = V_7;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_129, L_131)), ((float)il2cpp_codegen_add(L_132, L_133))));
		// if (mySettings.PreserveAspect)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_134 = __this->___mySettings_7;
		NullCheck(L_134);
		bool L_135;
		L_135 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline(L_134, NULL);
		if (!L_135)
		{
			goto IL_0354;
		}
	}
	{
		// pos.z -= radius;
		float* L_136 = (&(&V_0)->___z_4);
		float* L_137 = L_136;
		float L_138 = *((float*)L_137);
		float L_139 = ___2_radius;
		*((float*)L_137) = (float)((float)il2cpp_codegen_subtract(L_138, L_139));
	}

IL_0354:
	{
		// input.position = MyToLocal.MultiplyPoint3x4(CanvasToWorld.MultiplyPoint3x4(pos));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_140 = (&__this->___MyToLocal_18);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_141 = (&__this->___CanvasToWorld_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
		L_143 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_141, L_142, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_140, L_143, NULL);
		(&___0_input)->___position_0 = L_144;
		// return input;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_145 = ___0_input;
		return L_145;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::TesselateGeometry(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TesselateGeometry_m001143606FBA1736ACA55BBA194527DB340EEE8A (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Vector2 tessellatedSize = mySettings.GetTesslationSize();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0 = __this->___mySettings_7;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = CurvedUISettings_GetTesslationSize_m244B198E9E96821752B0BB22174639803E8196B2(L_0, (bool)1, NULL);
		V_0 = L_1;
		// TransformMisaligned = !(savedUp.AlmostEqual(Vector3.up.normalized));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___savedUp_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		bool L_5;
		L_5 = CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E(L_2, L_4, (0.01), NULL);
		__this->___TransformMisaligned_14 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		// TrisToQuads(verts);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_6 = ___0_verts;
		CurvedUIVertexEffect_TrisToQuads_m9DD062DD6518593E61FA6964886CDDE4C3A376E4(__this, L_6, NULL);
		// if (myText == null && myTMP == null && !DoNotTesselate)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0086;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___myTMP_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		bool L_11 = __this->___DoNotTesselate_5;
		if (L_11)
		{
			goto IL_0086;
		}
	}
	{
		// int startingVertexCount = verts.Count;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_12 = ___0_verts;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_12, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_2 = L_13;
		// for (int i = 0; i < startingVertexCount; i += 4)
		V_3 = 0;
		goto IL_007a;
	}

IL_006d:
	{
		// ModifyQuad(verts, i, tessellatedSize);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = ___0_verts;
		int32_t L_15 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		CurvedUIVertexEffect_ModifyQuad_mEAC08EDC04F5B93091D9A4783F4BDBEF9CD76F0E(__this, L_14, L_15, L_16, NULL);
		// for (int i = 0; i < startingVertexCount; i += 4)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 4));
	}

IL_007a:
	{
		// for (int i = 0; i < startingVertexCount; i += 4)
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_006d;
		}
	}
	{
		// verts.RemoveRange(0, startingVertexCount);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = ___0_verts;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229(L_20, 0, L_21, List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyQuad_mEAC08EDC04F5B93091D9A4783F4BDBEF9CD76F0E (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, int32_t ___1_vertexIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_requiredSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	{
		// for (int i = 0; i < 4; i++)
		V_7 = 0;
		goto IL_0022;
	}

IL_0005:
	{
		// m_quad[i] = verts[vertexIndex + i];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_0 = __this->___m_quad_23;
		int32_t L_1 = V_7;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = ___0_verts;
		int32_t L_3 = ___1_vertexIndex;
		int32_t L_4 = V_7;
		NullCheck(L_2);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_5;
		L_5 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_5);
		// for (int i = 0; i < 4; i++)
		int32_t L_6 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_7 = V_7;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0005;
		}
	}
	{
		// Vector3 horizontalDir = m_quad[2].position - m_quad[1].position;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_8 = __this->___m_quad_23;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_10 = __this->___m_quad_23;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_0 = L_12;
		// Vector3 verticalDir = m_quad[1].position - m_quad[0].position;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_13 = __this->___m_quad_23;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_15 = __this->___m_quad_23;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_16, NULL);
		V_1 = L_17;
		// if (myGraphic != null && (myGraphic is Image) && (myGraphic as Image).type == Image.Type.Filled)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_18 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_016c;
		}
	}
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_20 = __this->___myGraphic_8;
		if (!((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_20, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)))
		{
			goto IL_016c;
		}
	}
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_21 = __this->___myGraphic_8;
		NullCheck(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_21, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)));
		int32_t L_22;
		L_22 = Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_21, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_016c;
		}
	}
	{
		// horizontalDir = (horizontalDir).x > (m_quad[3].position - m_quad[0].position).x ? horizontalDir : m_quad[3].position - m_quad[0].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___x_2;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_25 = __this->___m_quad_23;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_27 = __this->___m_quad_23;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_28, NULL);
		float L_30 = L_29.___x_2;
		if ((((float)L_24) > ((float)L_30)))
		{
			goto IL_010b;
		}
	}
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_31 = __this->___m_quad_23;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_33 = __this->___m_quad_23;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_32, L_34, NULL);
		G_B9_0 = L_35;
		goto IL_010c;
	}

IL_010b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		G_B9_0 = L_36;
	}

IL_010c:
	{
		V_0 = G_B9_0;
		// verticalDir = (verticalDir).y > (m_quad[2].position - m_quad[3].position).y ? verticalDir : m_quad[2].position - m_quad[3].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		float L_38 = L_37.___y_3;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_39 = __this->___m_quad_23;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_41 = __this->___m_quad_23;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_40, L_42, NULL);
		float L_44 = L_43.___y_3;
		if ((((float)L_38) > ((float)L_44)))
		{
			goto IL_016a;
		}
	}
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_45 = __this->___m_quad_23;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_47 = __this->___m_quad_23;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_48, NULL);
		G_B12_0 = L_49;
		goto IL_016b;
	}

IL_016a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_1;
		G_B12_0 = L_50;
	}

IL_016b:
	{
		V_1 = G_B12_0;
	}

IL_016c:
	{
		// int horizontalQuads = 1;
		V_2 = 1;
		// int verticalQuads = 1;
		V_3 = 1;
		// if (TransformMisaligned || mySettings.Shape == CurvedUISettings.CurvedUIShape.SPHERE || mySettings.Shape == CurvedUISettings.CurvedUIShape.CYLINDER_VERTICAL)
		bool L_51 = __this->___TransformMisaligned_14;
		if (L_51)
		{
			goto IL_0194;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_52 = __this->___mySettings_7;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_52, NULL);
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_0194;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_54 = __this->___mySettings_7;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_54, NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)3))))
		{
			goto IL_01b8;
		}
	}

IL_0194:
	{
		// verticalQuads = Mathf.CeilToInt(verticalDir.magnitude * (1.0f / Mathf.Max(0.0001f, requiredSize.y)));
		float L_56;
		L_56 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = ___2_requiredSize;
		float L_58 = L_57.___y_1;
		float L_59;
		L_59 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((9.99999975E-05f), L_58, NULL);
		int32_t L_60;
		L_60 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_56, ((float)((1.0f)/L_59)))), NULL);
		V_3 = L_60;
	}

IL_01b8:
	{
		// if (TransformMisaligned || mySettings.Shape != CurvedUISettings.CurvedUIShape.CYLINDER_VERTICAL)
		bool L_61 = __this->___TransformMisaligned_14;
		if (L_61)
		{
			goto IL_01ce;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_62 = __this->___mySettings_7;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_62, NULL);
		if ((((int32_t)L_63) == ((int32_t)3)))
		{
			goto IL_01f2;
		}
	}

IL_01ce:
	{
		// horizontalQuads = Mathf.CeilToInt(horizontalDir.magnitude * (1.0f / Mathf.Max(0.0001f, requiredSize.x)));
		float L_64;
		L_64 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = ___2_requiredSize;
		float L_66 = L_65.___x_0;
		float L_67;
		L_67 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((9.99999975E-05f), L_66, NULL);
		int32_t L_68;
		L_68 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_64, ((float)((1.0f)/L_67)))), NULL);
		V_2 = L_68;
	}

IL_01f2:
	{
		// bool oneVert = false;
		V_4 = (bool)0;
		// bool oneHori = false;
		V_5 = (bool)0;
		// float yStart = 0.0f;
		V_6 = (0.0f);
		// for (int y = 0; y < verticalQuads || !oneVert; ++y)
		V_8 = 0;
		goto IL_0292;
	}

IL_0207:
	{
		// oneVert = true;
		V_4 = (bool)1;
		// float yEnd = (y + 1.0f) / verticalQuads;
		int32_t L_69 = V_8;
		int32_t L_70 = V_3;
		V_9 = ((float)(((float)il2cpp_codegen_add(((float)L_69), (1.0f)))/((float)L_70)));
		// float xStart = 0.0f;
		V_10 = (0.0f);
		// for (int x = 0; x < horizontalQuads || !oneHori; ++x)
		V_11 = 0;
		goto IL_027f;
	}

IL_0224:
	{
		// oneHori = true;
		V_5 = (bool)1;
		// float xEnd = (x + 1.0f) / horizontalQuads;
		int32_t L_71 = V_11;
		int32_t L_72 = V_2;
		V_12 = ((float)(((float)il2cpp_codegen_add(((float)L_71), (1.0f)))/((float)L_72)));
		// verts.Add(TesselateQuad(xStart, yStart));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_73 = ___0_verts;
		float L_74 = V_10;
		float L_75 = V_6;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_76;
		L_76 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_74, L_75, NULL);
		NullCheck(L_73);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_73, L_76, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// verts.Add(TesselateQuad(xStart, yEnd));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_77 = ___0_verts;
		float L_78 = V_10;
		float L_79 = V_9;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_80;
		L_80 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_78, L_79, NULL);
		NullCheck(L_77);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_77, L_80, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// verts.Add(TesselateQuad(xEnd, yEnd));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_81 = ___0_verts;
		float L_82 = V_12;
		float L_83 = V_9;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_84;
		L_84 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_82, L_83, NULL);
		NullCheck(L_81);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_81, L_84, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// verts.Add(TesselateQuad(xEnd, yStart));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_85 = ___0_verts;
		float L_86 = V_12;
		float L_87 = V_6;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_88;
		L_88 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_86, L_87, NULL);
		NullCheck(L_85);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_85, L_88, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// xStart = xEnd;
		float L_89 = V_12;
		V_10 = L_89;
		// for (int x = 0; x < horizontalQuads || !oneHori; ++x)
		int32_t L_90 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_027f:
	{
		// for (int x = 0; x < horizontalQuads || !oneHori; ++x)
		int32_t L_91 = V_11;
		int32_t L_92 = V_2;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0224;
		}
	}
	{
		bool L_93 = V_5;
		if (!L_93)
		{
			goto IL_0224;
		}
	}
	{
		// yStart = yEnd;
		float L_94 = V_9;
		V_6 = L_94;
		// for (int y = 0; y < verticalQuads || !oneVert; ++y)
		int32_t L_95 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_0292:
	{
		// for (int y = 0; y < verticalQuads || !oneVert; ++y)
		int32_t L_96 = V_8;
		int32_t L_97 = V_3;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0207;
		}
	}
	{
		bool L_98 = V_4;
		if (!L_98)
		{
			goto IL_0207;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::TrisToQuads(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TrisToQuads_m9DD062DD6518593E61FA6964886CDDE4C3A376E4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int vertsInTrisCount = verts.Count;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_verts;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_0, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_0 = L_1;
		// m_vertsInQuads.Clear();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = __this->___m_vertsInQuads_21;
		NullCheck(L_2);
		List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline(L_2, List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		// for (int i = 0; i < vertsInTrisCount; i += 6)
		V_1 = 0;
		goto IL_0068;
	}

IL_0016:
	{
		// m_vertsInQuads.Add(verts[i + 0]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_3 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = ___0_verts;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6;
		L_6 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_4, L_5, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_3, L_6, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// m_vertsInQuads.Add(verts[i + 1]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_7 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = ___0_verts;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_7, L_10, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// m_vertsInQuads.Add(verts[i + 2]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_12 = ___0_verts;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_14;
		L_14 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_12, ((int32_t)il2cpp_codegen_add(L_13, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_11, L_14, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// m_vertsInQuads.Add(verts[i + 4]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_15 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_16 = ___0_verts;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_18;
		L_18 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_15, L_18, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// for (int i = 0; i < vertsInTrisCount; i += 6)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 6));
	}

IL_0068:
	{
		// for (int i = 0; i < vertsInTrisCount; i += 6)
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0016;
		}
	}
	{
		// verts.AddRange(m_vertsInQuads);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_22 = ___0_verts;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = __this->___m_vertsInQuads_21;
		NullCheck(L_22);
		List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A(L_22, L_23, List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_RuntimeMethod_var);
		// verts.RemoveRange(0, vertsInTrisCount);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_24 = ___0_verts;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229(L_24, 0, L_25, List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::TesselateQuad(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// m_weights[0] = (1 - x) * (1 - y);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___m_weights_24;
		float L_1 = ___0_x;
		float L_2 = ___1_y;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_1)), ((float)il2cpp_codegen_subtract((1.0f), L_2)))));
		// m_weights[1] = (1 - x) * y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___m_weights_24;
		float L_4 = ___0_x;
		float L_5 = ___1_y;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_4)), L_5)));
		// m_weights[2] = x * y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___m_weights_24;
		float L_7 = ___0_x;
		float L_8 = ___1_y;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_multiply(L_7, L_8)));
		// m_weights[3] = x * (1 - y);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___m_weights_24;
		float L_10 = ___0_x;
		float L_11 = ___1_y;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)((float)il2cpp_codegen_multiply(L_10, ((float)il2cpp_codegen_subtract((1.0f), L_11)))));
		// _uv0 = _uv1 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_12, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = L_13;
		V_0 = L_14;
		__this->____uv1_32 = L_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_0;
		__this->____uv0_31 = L_15;
		// _pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____pos_33 = L_16;
		// for (int i = 0; i < 4; i++)
		V_1 = 0;
		goto IL_0100;
	}

IL_006f:
	{
		// _uv0 += m_quad[i].uv0 * m_weights[i];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = __this->____uv0_31;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_18 = __this->___m_quad_23;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___uv0_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___m_weights_24;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_20, L_24, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_17, L_25, NULL);
		__this->____uv0_31 = L_26;
		// _uv1 += m_quad[i].uv1 * m_weights[i];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = __this->____uv1_32;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_28 = __this->___m_quad_23;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___uv1_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = __this->___m_weights_24;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		float L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35;
		L_35 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_30, L_34, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		L_36 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_27, L_35, NULL);
		__this->____uv1_32 = L_36;
		// _pos += m_quad[i].position * m_weights[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->____pos_33;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_38 = __this->___m_quad_23;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___position_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = __this->___m_weights_24;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		float L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_45, NULL);
		__this->____pos_33 = L_46;
		// for (int i = 0; i < 4; i++)
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0100:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_48 = V_1;
		if ((((int32_t)L_48) < ((int32_t)4)))
		{
			goto IL_006f;
		}
	}
	{
		// m_ret.position = _pos;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_49 = (&__this->___m_ret_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = __this->____pos_33;
		L_49->___position_0 = L_50;
		// m_ret.color = m_quad[0].color; //used instead to save performance. Color lerps are expensive.
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_51 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_52 = __this->___m_quad_23;
		NullCheck(L_52);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_53 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___color_3;
		L_51->___color_3 = L_53;
		// m_ret.uv0 = _uv0;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_54 = (&__this->___m_ret_22);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_55 = __this->____uv0_31;
		L_54->___uv0_4 = L_55;
		// m_ret.uv1 = _uv1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_56 = (&__this->___m_ret_22);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_57 = __this->____uv1_32;
		L_56->___uv1_5 = L_57;
		// m_ret.uv2 = m_quad[0].uv2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_58 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_59 = __this->___m_quad_23;
		NullCheck(L_59);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___uv2_6;
		L_58->___uv2_6 = L_60;
		// m_ret.uv3 = m_quad[0].uv3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_61 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_62 = __this->___m_quad_23;
		NullCheck(L_62);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_63 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___uv3_7;
		L_61->___uv3_7 = L_63;
		// m_ret.normal = m_quad[0].normal;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_64 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_65 = __this->___m_quad_23;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___normal_1;
		L_64->___normal_1 = L_66;
		// m_ret.tangent = m_quad[0].tangent;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_67 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_68 = __this->___m_quad_23;
		NullCheck(L_68);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tangent_2;
		L_67->___tangent_2 = L_69;
		// return m_ret;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_70 = __this->___m_ret_22;
		return L_70;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// TesselationRequired = true;
		CurvedUIVertexEffect_set_TesselationRequired_m53B8A90218456051784AD8A136C5CB91A9CDCCD4(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_TesselationRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_TesselationRequired_m5B187B771E485EA09817FE3E6C4DDD2DD8F7D065 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// get { return tesselationRequired; }
		bool L_0;
		L_0 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29_inline(__this, NULL);
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::set_TesselationRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_TesselationRequired_m53B8A90218456051784AD8A136C5CB91A9CDCCD4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { tesselationRequired = value; }
		bool L_0 = ___0_value;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline(__this, L_0, NULL);
		// set { tesselationRequired = value; }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_CurvingRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_CurvingRequired_m3606039B53A1EACA1E1D44234260AE0032BB4B63 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// get { return curvingRequired; }
		bool L_0 = __this->___curvingRequired_13;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::set_CurvingRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { curvingRequired = value; }
		bool L_0 = ___0_value;
		__this->___curvingRequired_13 = L_0;
		// set { curvingRequired = value; }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect__ctor_m5463072C73EB82FFE8C5BE578DEC750CC7FE53FF (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_tesselationRequired = true;
		__this->___m_tesselationRequired_12 = (bool)1;
		// bool curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
		// List<UIVertex> m_tesselatedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_0, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_tesselatedVerts_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_tesselatedVerts_19), (void*)L_0);
		// List<UIVertex> m_curvedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_curvedVerts_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_curvedVerts_20), (void*)L_1);
		// List<UIVertex> m_vertsInQuads = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_vertsInQuads_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_vertsInQuads_21), (void*)L_2);
		// UIVertex[] m_quad = new UIVertex[4];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_3 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)SZArrayNew(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___m_quad_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_quad_23), (void*)L_3);
		// float[] m_weights = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___m_weights_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_weights_24), (void*)L_4);
		BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427(__this, NULL);
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
// System.Void CurvedUI.CurvedUIViveController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIViveController__ctor_m46A92F889471DFDC2CCE1F7B72E9E5DF1FE527B9 (CurvedUIViveController_t4D748E4AB476CDE20BDF09579CBD91E92D5C544E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Multicast(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* currentDelegate = reinterpret_cast<ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenInst(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenStatic(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenStaticInvoker(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_e);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_ClosedStaticInvoker(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_e);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenVirtual(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenInterface(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericVirtual(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(method, ___0_sender, ___1_e);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericInterface(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(method, ___0_sender, ___1_e);
}
// System.Void CurvedUI.ViveInputEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveInputEvent__ctor_mF3796A815A98BE5508EB40D37F1A85E7E87F199D (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Multicast;
}
// System.Void CurvedUI.ViveInputEvent::Invoke(System.Object,CurvedUI.ViveInputArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CurvedUI.ViveInputEvent::BeginInvoke(System.Object,CurvedUI.ViveInputArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ViveInputEvent_BeginInvoke_m6045D0AED5B69D05D176D370B0F496E63B1D2836 (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_sender, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___1_e, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_sender;
	__d_args[1] = Box(ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817_il2cpp_TypeInfo_var, &___1_e);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void CurvedUI.ViveInputEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveInputEvent_EndInvoke_m5332E2C98382423FB6E8DAA6E697AABAFA73191C (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Multicast(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* currentDelegate = reinterpret_cast<ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenInst(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, method);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenStatic(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, method);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenStaticInvoker(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_ClosedStaticInvoker(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenVirtual(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenInterface(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericVirtual(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker0::Invoke(method, ___0_sender);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericInterface(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_sender);
}
// System.Void CurvedUI.ViveEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveEvent__ctor_m0BC3268E51BE9ED084304D513A36870B895ABDB5 (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Multicast;
}
// System.Void CurvedUI.ViveEvent::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371 (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CurvedUI.ViveEvent::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ViveEvent_BeginInvoke_m075C2C39BFC33B38A3C23C748303B1439084133D (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_sender, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_sender;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void CurvedUI.ViveEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveEvent_EndInvoke_mCE7321CA2B97FD65BEF2F6152CD0A9339E576704 (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUITMP::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_Start_m1D0E0F501F954DCE8E6C43B57F2DDBCCBA17FE1B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mySettings == null)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0 = __this->___mySettings_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// mySettings = GetComponentInParent<CurvedUISettings>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_2;
		L_2 = Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7(__this, Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		__this->___mySettings_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySettings_6), (void*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_OnEnable_m8D10FAACCF8A67595A98C3FAF75588950BEC6350 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindTMP();
		CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B(__this, NULL);
		// if (tmpText)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		// tmpText.RegisterDirtyMaterialCallback(TesselationRequiredCallback);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___tmpText_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013(L_2, L_3, NULL);
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(TMPTextChangedCallback);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_4 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_5 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_5, __this, (intptr_t)((void*)CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_4, L_5, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// tmpText.SetText(tmpText.text);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___tmpText_5;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___tmpText_5;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_7);
		NullCheck(L_6);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_6, L_8, (bool)1, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_OnDisable_mB96E2DC6F61743B4DB902430517CEC95830FAFEE (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tmpText)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// tmpText.UnregisterDirtyMaterialCallback(TesselationRequiredCallback);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___tmpText_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2(L_2, L_3, NULL);
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(TMPTextChangedCallback);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_4 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_5 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_5, __this, (intptr_t)((void*)CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_4, L_5, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_OnDestroy_m76CD7C1C2A384694798473B8B166410F651360BD (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	{
		// quitting = true;
		__this->___quitting_19 = (bool)1;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_LateUpdate_m08C38D0D9D0AEAD182AD498C4FB4806F30B68257 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!tmpText) FindTMP();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!tmpText) FindTMP();
		CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B(__this, NULL);
	}

IL_0013:
	{
		// if (mySettings == null) return;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_2 = __this->___mySettings_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (mySettings == null) return;
		return;
	}

IL_0022:
	{
		// if (tmpText && !quitting)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0214;
		}
	}
	{
		bool L_6 = __this->___quitting_19;
		if (L_6)
		{
			goto IL_0214;
		}
	}
	{
		// if (ShouldTesselate())
		bool L_7;
		L_7 = CurvedUITMP_ShouldTesselate_m689E16AB706109496751DEA326C551CF1214D54B(__this, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// tesselationRequired = true;
		__this->___tesselationRequired_18 = (bool)1;
	}

IL_004c:
	{
		// if (Dirty || tesselationRequired || (curvingRequired && !Application.isPlaying))
		bool L_8 = __this->___Dirty_16;
		if (L_8)
		{
			goto IL_0071;
		}
	}
	{
		bool L_9 = __this->___tesselationRequired_18;
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		bool L_10 = __this->___curvingRequired_17;
		if (!L_10)
		{
			goto IL_01d5;
		}
	}
	{
		bool L_11;
		L_11 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_11)
		{
			goto IL_01d5;
		}
	}

IL_0071:
	{
		// if (mySettings == null)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_12 = __this->___mySettings_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0087:
	{
		// tmpText.renderMode = TMPro.TextRenderFlags.Render;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___tmpText_5;
		NullCheck(L_14);
		TMP_Text_set_renderMode_m091533DEE7FD20A61249DC52C786ED4FFE5A5C2A(L_14, ((int32_t)255), NULL);
		// tmpText.ForceMeshUpdate(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___tmpText_5;
		NullCheck(L_15);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_15, (bool)1, (bool)0);
		// CreateUIVertexList(tmpText.mesh);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___tmpText_5;
		NullCheck(L_16);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17;
		L_17 = VirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(77 /* UnityEngine.Mesh TMPro.TMP_Text::get_mesh() */, L_16);
		CurvedUITMP_CreateUIVertexList_m57345FC6BDFFB8143D5FA4BC52E652BBE265EBBF(__this, L_17, NULL);
		// crvdVE.ModifyTMPMesh(ref m_UIVerts);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_18 = __this->___crvdVE_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_19 = (&__this->___m_UIVerts_7);
		NullCheck(L_18);
		CurvedUIVertexEffect_ModifyTMPMesh_m1399E60A903D57BEA95FE80DE7CBF42E50C104F2(L_18, L_19, NULL);
		// FillMeshWithUIVertexList(tmpText.mesh, m_UIVerts);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___tmpText_5;
		NullCheck(L_20);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21;
		L_21 = VirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(77 /* UnityEngine.Mesh TMPro.TMP_Text::get_mesh() */, L_20);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_22 = __this->___m_UIVerts_7;
		CurvedUITMP_FillMeshWithUIVertexList_mEDA5D96395071B4167976CBAD82678ECC503A350(__this, L_21, L_22, NULL);
		// tmpText.renderMode = TMPro.TextRenderFlags.DontRender;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___tmpText_5;
		NullCheck(L_23);
		TMP_Text_set_renderMode_m091533DEE7FD20A61249DC52C786ED4FFE5A5C2A(L_23, 0, NULL);
		// savedLocalScale = mySettings.transform.localScale;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_24 = __this->___mySettings_6;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_25, NULL);
		__this->___savedLocalScale_13 = L_26;
		// savedGlobalScale = mySettings.transform.lossyScale;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_27 = __this->___mySettings_6;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_28, NULL);
		__this->___savedGlobalScale_14 = L_29;
		// savedSize = (transform as RectTransform).rect.size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_30, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_31;
		L_31 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_30, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		__this->___savedSize_10 = L_32;
		// savedUp = mySettings.transform.worldToLocalMatrix.MultiplyVector(transform.up);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_33 = __this->___mySettings_6;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_35;
		L_35 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_34, NULL);
		V_1 = L_35;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_37, NULL);
		__this->___savedUp_11 = L_38;
		// savedPos = mySettings.transform.worldToLocalMatrix.MultiplyPoint3x4(transform.position);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_39 = __this->___mySettings_6;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_41;
		L_41 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_40, NULL);
		V_1 = L_41;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_1), L_43, NULL);
		__this->___savedPos_12 = L_44;
		// tesselationRequired = false;
		__this->___tesselationRequired_18 = (bool)0;
		// curvingRequired = false;
		__this->___curvingRequired_17 = (bool)0;
		// Dirty = false;
		__this->___Dirty_16 = (bool)0;
		// FindSubmeshes();
		CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE(__this, NULL);
		// foreach (CurvedUITMPSubmesh mesh in subMeshes)
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_45 = __this->___subMeshes_15;
		NullCheck(L_45);
		Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 L_46;
		L_46 = List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E(L_45, List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E_RuntimeMethod_var);
		V_2 = L_46;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7((&V_2), Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01bc_1;
			}

IL_01ae_1:
			{
				// foreach (CurvedUITMPSubmesh mesh in subMeshes)
				CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_47;
				L_47 = Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_inline((&V_2), Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_RuntimeMethod_var);
				// mesh.UpdateSubmesh(true, false);
				NullCheck(L_47);
				CurvedUITMPSubmesh_UpdateSubmesh_mA3045387F2148F655658002E28CF31A87BAC7F1D(L_47, (bool)1, (bool)0, NULL);
			}

IL_01bc_1:
			{
				// foreach (CurvedUITMPSubmesh mesh in subMeshes)
				bool L_48;
				L_48 = Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04((&V_2), Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04_RuntimeMethod_var);
				if (L_48)
				{
					goto IL_01ae_1;
				}
			}
			{
				goto IL_01d5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		// if(tmpText.text.Length > 0)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = __this->___tmpText_5;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_49);
		NullCheck(L_50);
		int32_t L_51;
		L_51 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_50, NULL);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_0204;
		}
	}
	{
		// tmpText.canvasRenderer.SetMesh(tmpText.mesh);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_52 = __this->___tmpText_5;
		NullCheck(L_52);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_53;
		L_53 = TextMeshProUGUI_get_canvasRenderer_m74291CFD17F47B70F21F49C93058D2756A521887(L_52, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_54 = __this->___tmpText_5;
		NullCheck(L_54);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_55;
		L_55 = VirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(77 /* UnityEngine.Mesh TMPro.TMP_Text::get_mesh() */, L_54);
		NullCheck(L_53);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_53, L_55, NULL);
		return;
	}

IL_0204:
	{
		// tmpText.canvasRenderer.Clear();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = __this->___tmpText_5;
		NullCheck(L_56);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_57;
		L_57 = TextMeshProUGUI_get_canvasRenderer_m74291CFD17F47B70F21F49C93058D2756A521887(L_56, NULL);
		NullCheck(L_57);
		CanvasRenderer_Clear_m496D522F1DBD1037417E470CF2D4D9FD22F68E81(L_57, NULL);
	}

IL_0214:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::CreateUIVertexList(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_CreateUIVertexList_m57345FC6BDFFB8143D5FA4BC52E652BBE265EBBF (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (mesh.vertexCount < m_UIVerts.Count)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_mesh;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = __this->___m_UIVerts_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_2, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		// m_UIVerts.RemoveRange(mesh.vertexCount, m_UIVerts.Count - mesh.vertexCount);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = __this->___m_UIVerts_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = ___0_mesh;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_5, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_7 = __this->___m_UIVerts_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_7, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = ___0_mesh;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_9, NULL);
		NullCheck(L_4);
		List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229(L_4, L_6, ((int32_t)il2cpp_codegen_subtract(L_8, L_10)), List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
	}

IL_0036:
	{
		// vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11 = ___0_mesh;
		NullCheck(L_11);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12;
		L_12 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_11, NULL);
		__this->___vertices_20 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_20), (void*)L_12);
		// for (int i = 0; i < mesh.vertexCount; i++)
		V_0 = 0;
		goto IL_00b5;
	}

IL_0046:
	{
		// if (m_UIVerts.Count <= i)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_13 = __this->___m_UIVerts_7;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_13, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0080;
		}
	}
	{
		// m_tempVertex = new UIVertex();
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_16 = (&__this->___m_tempVertex_8);
		il2cpp_codegen_initobj(L_16, sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		// GetUIVertexFromMesh(ref m_tempVertex, i);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_17 = (&__this->___m_tempVertex_8);
		int32_t L_18 = V_0;
		CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0(__this, L_17, L_18, NULL);
		// m_UIVerts.Add(m_tempVertex);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_19 = __this->___m_UIVerts_7;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_20 = __this->___m_tempVertex_8;
		NullCheck(L_19);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_19, L_20, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		goto IL_00b1;
	}

IL_0080:
	{
		// m_tempVertex = m_UIVerts[i];
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_21 = __this->___m_UIVerts_7;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_23;
		L_23 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_21, L_22, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		__this->___m_tempVertex_8 = L_23;
		// GetUIVertexFromMesh(ref m_tempVertex, i);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_24 = (&__this->___m_tempVertex_8);
		int32_t L_25 = V_0;
		CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0(__this, L_24, L_25, NULL);
		// m_UIVerts[i] = m_tempVertex;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_26 = __this->___m_UIVerts_7;
		int32_t L_27 = V_0;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_28 = __this->___m_tempVertex_8;
		NullCheck(L_26);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_26, L_27, L_28, List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
	}

IL_00b1:
	{
		// for (int i = 0; i < mesh.vertexCount; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < mesh.vertexCount; i++)
		int32_t L_30 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = ___0_mesh;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_31, NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0046;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::GetUIVertexFromMesh(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___0_vert, int32_t ___1_i, const RuntimeMethod* method) 
{
	{
		// vert.position = vertices[i];
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___0_vert;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___vertices_20;
		int32_t L_2 = ___1_i;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		L_0->___position_0 = L_4;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::FillMeshWithUIVertexList(UnityEngine.Mesh,System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FillMeshWithUIVertexList_mEDA5D96395071B4167976CBAD82678ECC503A350 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___1_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25EC8B5027C4C127EC75896F8B03EF13CBFF95DE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (list.Count >= 65536)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___1_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_0, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65536))))
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("CURVEDUI: Unity UI Mesh can not have more than 65536 vertices. Remove some UI elements or lower quality.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral25EC8B5027C4C127EC75896F8B03EF13CBFF95DE, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// for (int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0038;
	}

IL_001c:
	{
		// vertices[i] = list[i].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___vertices_20;
		int32_t L_3 = V_0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = ___1_list;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6;
		L_6 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_4, L_5, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___position_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_7);
		// for (int i = 0; i < list.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_9 = V_0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_10 = ___1_list;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_10, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001c;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = ___0_mesh;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___vertices_20;
		NullCheck(L_12);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_12, L_13, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = ___0_mesh;
		NullCheck(L_14);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_14, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::FindTMP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.GetComponent<TextMeshProUGUI>() != null)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// tmpText = this.gameObject.GetComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3;
		L_3 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_2, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		__this->___tmpText_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tmpText_5), (void*)L_3);
		// crvdVE = this.gameObject.GetComponent<CurvedUIVertexEffect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_5;
		L_5 = GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B(L_4, GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B_RuntimeMethod_var);
		__this->___crvdVE_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crvdVE_4), (void*)L_5);
		// mySettings = GetComponentInParent<CurvedUISettings>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_6;
		L_6 = Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7(__this, Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		__this->___mySettings_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySettings_6), (void*)L_6);
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_7, (bool)0, NULL);
		// FindSubmeshes();
		CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE(__this, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::FindSubmeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mB0EB50F12562E96A30AE3A067344068DBA3FE29B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* V_0 = NULL;
	int32_t V_1 = 0;
	TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* V_2 = NULL;
	{
		// foreach (TMP_SubMeshUI sub in GetComponentsInChildren<TMP_SubMeshUI>())
		TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* L_0;
		L_0 = Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730(__this, Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000b:
	{
		// foreach (TMP_SubMeshUI sub in GetComponentsInChildren<TMP_SubMeshUI>())
		TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m_tempSubMsh = sub.gameObject.AddComponentIfMissing<CurvedUITMPSubmesh>();
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_5 = V_2;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_7;
		L_7 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mB0EB50F12562E96A30AE3A067344068DBA3FE29B(L_6, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mB0EB50F12562E96A30AE3A067344068DBA3FE29B_RuntimeMethod_var);
		__this->___m_tempSubMsh_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_tempSubMsh_9), (void*)L_7);
		// if (!subMeshes.Contains(m_tempSubMsh))
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_8 = __this->___subMeshes_15;
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_9 = __this->___m_tempSubMsh_9;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7(L_8, L_9, List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0044;
		}
	}
	{
		// subMeshes.Add(m_tempSubMsh);
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_11 = __this->___subMeshes_15;
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_12 = __this->___m_tempSubMsh_9;
		NullCheck(L_11);
		List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_inline(L_11, L_12, List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_RuntimeMethod_var);
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		// foreach (TMP_SubMeshUI sub in GetComponentsInChildren<TMP_SubMeshUI>())
		int32_t L_14 = V_1;
		TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUITMP::ShouldTesselate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUITMP_ShouldTesselate_m689E16AB706109496751DEA326C551CF1214D54B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (savedSize != (transform as RectTransform).rect.size)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___savedSize_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		bool L_4;
		L_4 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_0, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0027:
	{
		// else if (savedLocalScale != mySettings.transform.localScale)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___savedLocalScale_13;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_6 = __this->___mySettings_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		bool L_9;
		L_9 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_5, L_8, NULL);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0046:
	{
		// else if (savedGlobalScale != mySettings.transform.lossyScale)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___savedGlobalScale_14;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_11 = __this->___mySettings_6;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_12, NULL);
		bool L_14;
		L_14 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_10, L_13, NULL);
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0065:
	{
		// else if (!savedUp.AlmostEqual(mySettings.transform.worldToLocalMatrix.MultiplyVector(transform.up)))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___savedUp_11;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_16 = __this->___mySettings_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_17, NULL);
		V_2 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_20, NULL);
		bool L_22;
		L_22 = CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E(L_15, L_21, (0.01), NULL);
		if (L_22)
		{
			goto IL_00a0;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00a0:
	{
		// Vector3 testedPos = mySettings.transform.worldToLocalMatrix.MultiplyPoint3x4(transform.position);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_23 = __this->___mySettings_6;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25;
		L_25 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_24, NULL);
		V_2 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_27, NULL);
		V_0 = L_28;
		// if (!savedPos.AlmostEqual(testedPos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___savedPos_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		bool L_31;
		L_31 = CurvedUIExtensionMethods_AlmostEqual_mC1A069C241D2E54BE27EC1CA6DEC8E829ADB080E(L_29, L_30, (0.01), NULL);
		if (L_31)
		{
			goto IL_013a;
		}
	}
	{
		// if (mySettings.Shape != CurvedUISettings.CurvedUIShape.CYLINDER || Mathf.Pow(testedPos.x - savedPos.x, 2) > 0.00001 || Mathf.Pow(testedPos.z - savedPos.z, 2) > 0.00001)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_32 = __this->___mySettings_6;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline(L_32, NULL);
		if (L_33)
		{
			goto IL_0138;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		float L_35 = L_34.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___savedPos_12);
		float L_37 = L_36->___x_2;
		float L_38;
		L_38 = powf(((float)il2cpp_codegen_subtract(L_35, L_37)), (2.0f));
		if ((((double)((double)L_38)) > ((double)(1.0000000000000001E-05))))
		{
			goto IL_0138;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_0;
		float L_40 = L_39.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___savedPos_12);
		float L_42 = L_41->___z_4;
		float L_43;
		L_43 = powf(((float)il2cpp_codegen_subtract(L_40, L_42)), (2.0f));
		if ((!(((double)((double)L_43)) > ((double)(1.0000000000000001E-05)))))
		{
			goto IL_013a;
		}
	}

IL_0138:
	{
		// return true;
		return (bool)1;
	}

IL_013a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void CurvedUI.CurvedUITMP::TMPTextChangedCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// if (obj != (object)tmpText) return;
		RuntimeObject* L_0 = ___0_obj;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___tmpText_5;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		// if (obj != (object)tmpText) return;
		return;
	}

IL_000a:
	{
		// tesselationRequired = true;
		__this->___tesselationRequired_18 = (bool)1;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::TesselationRequiredCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	{
		// tesselationRequired = true;
		__this->___tesselationRequired_18 = (bool)1;
		// curvingRequired = true;
		__this->___curvingRequired_17 = (bool)1;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP__ctor_m73B0E23ADEFBD75FE144923AA9829A139A459EF3 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<UIVertex> m_UIVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_0, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_UIVerts_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UIVerts_7), (void*)L_0);
		// private List<CurvedUITMPSubmesh> subMeshes = new List<CurvedUITMPSubmesh>();
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_1 = (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*)il2cpp_codegen_object_new(List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2(L_1, List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2_RuntimeMethod_var);
		__this->___subMeshes_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subMeshes_15), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_Awake_m4167FBF1271690D82ABE54633C06E80AD50DB605 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myField = this.GetComponent<TMP_InputField>();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0;
		L_0 = Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28(__this, Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var);
		__this->___myField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myField_4), (void*)L_0);
		// if (myField)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = __this->___myField_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// CheckAndConvertMask();
		CurvedUITMPInputFieldCaret_CheckAndConvertMask_mE0063CE6557D6EC0F7EFADCF6D652C1E107E1654(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_Update_mFD346CD3663B750FBD097C0C30E033A039CB87D3 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	{
		// if (selected)
		bool L_0 = __this->___selected_8;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateCaret();
		CurvedUITMPInputFieldCaret_UpdateCaret_m433E3D7AC784A906D073DFD42A3EBCAA1C424F25(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::OnSelect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_OnSelect_mC107B37A5A807A93928739D071CF1AA81A63DD32 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (myCaret == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myCaret_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// CreateCaret();
		CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92(__this, NULL);
	}

IL_0014:
	{
		// selected = true;
		__this->___selected_8 = (bool)1;
		// myCaret.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___myCaret_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// StartCoroutine(CaretBlinker());
		RuntimeObject* L_4;
		L_4 = CurvedUITMPInputFieldCaret_CaretBlinker_m72C5EC00E30E087A2970AEA2228794CA9D29CBAE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::OnDeselect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_OnDeselect_mC13CB58ABA420338B80D38EA52BA6B616D005612 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// selected = false;
		__this->___selected_8 = (bool)0;
		// myCaret.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myCaret_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CurvedUI.CurvedUITMPInputFieldCaret::CaretBlinker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUITMPInputFieldCaret_CaretBlinker_m72C5EC00E30E087A2970AEA2228794CA9D29CBAE (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* L_0 = (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C*)il2cpp_codegen_object_new(U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCaretBlinkerU3Ed__10__ctor_mC94964453788B59FFB9C854766DD5AE77DEFCF06(L_0, 0, NULL);
		U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CreateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC643805631DCFA7AF65357A1ADA341A23CA30AA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject go = new GameObject("CurvedUI_TMPCaret");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralDC643805631DCFA7AF65357A1ADA341A23CA30AA, NULL);
		V_0 = L_0;
		// go.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_1, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		// go.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_3, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// go.AddComponent<CurvedUIVertexEffect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_6;
		L_6 = GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783(L_5, GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		// go.transform.SetParent(transform.GetChild(0).GetChild(0));//Nest the cursor down with the scrolling child so it properly moves with text.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, 0, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 0, NULL);
		NullCheck(L_8);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_8, L_11, NULL);
		// go.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_14, NULL);
		// (go.transform as RectTransform).anchoredPosition3D = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_16, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_16, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_17, NULL);
		// (go.transform as RectTransform).pivot = new Vector2(0, 1.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_19, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_19, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_20, NULL);
		// go.GetComponent<Image>().color = myField.caretColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22;
		L_22 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_21, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = __this->___myField_4;
		NullCheck(L_23);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = TMP_InputField_get_caretColor_m9733E1CB5CAD3CCFA9C32343D12F0095BA6DC76F(L_23, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_24);
		// myCaret = go.transform as RectTransform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		__this->___myCaret_5 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_26, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCaret_5), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_26, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		// go.transform.SetAsFirstSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD(L_28, NULL);
		// myField.customCaretColor = true;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_29 = __this->___myField_4;
		NullCheck(L_29);
		TMP_InputField_set_customCaretColor_m9A33CA9154050A1C09881207B9C7B832B6C44B6B(L_29, (bool)1, NULL);
		// origCaretColor = myField.caretColor;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_30 = __this->___myField_4;
		NullCheck(L_30);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = TMP_InputField_get_caretColor_m9733E1CB5CAD3CCFA9C32343D12F0095BA6DC76F(L_30, NULL);
		__this->___origCaretColor_6 = L_31;
		// myField.caretColor = new Color(0f, 0f, 0f, 0f);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_32 = __this->___myField_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_33), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		TMP_InputField_set_caretColor_mAF2AF8646B44D6AAA885F2A664DB88431E22177C(L_32, L_33, NULL);
		// origSelectionColor = myField.selectionColor;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_34 = __this->___myField_4;
		NullCheck(L_34);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = TMP_InputField_get_selectionColor_m99D5B9FBC11FEAA170C113FB238120A73429F5BB_inline(L_34, NULL);
		__this->___origSelectionColor_7 = L_35;
		// myField.selectionColor = new Color(0f, 0f, 0f, 0f);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_36 = __this->___myField_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_37), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_36);
		TMP_InputField_set_selectionColor_m9B30F4DC90BBD21ECDA6B5888F2F8E4B2EC7686D(L_36, L_37, NULL);
		// go.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_0;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_38, NULL);
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::UpdateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_UpdateCaret_m433E3D7AC784A906D073DFD42A3EBCAA1C424F25 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// if (myCaret == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myCaret_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// CreateCaret();
		CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92(__this, NULL);
	}

IL_0014:
	{
		// Vector2 newCaretPos = GetLocalPositionInText(myField.caretPosition);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___myField_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_3, NULL);
		V_0 = L_4;
		// if (myField.selectionFocusPosition != myField.selectionAnchorPosition) // user is selecting text is those two are not equal.
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = __this->___myField_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_5, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___myField_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_7, NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0148;
		}
	}
	{
		// selectingText = true;
		__this->___selectingText_9 = (bool)1;
		// Vector2 selectionSize = new Vector2(
		//     GetLocalPositionInText(myField.selectionAnchorPosition).x - GetLocalPositionInText(myField.selectionFocusPosition).x,
		//     GetLocalPositionInText(myField.selectionAnchorPosition).y - GetLocalPositionInText(myField.selectionFocusPosition).y
		//     );
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_9 = __this->___myField_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_10, NULL);
		float L_12 = L_11.___x_0;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_13 = __this->___myField_4;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_14, NULL);
		float L_16 = L_15.___x_0;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_17 = __this->___myField_4;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_18, NULL);
		float L_20 = L_19.___y_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_21 = __this->___myField_4;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_22, NULL);
		float L_24 = L_23.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_subtract(L_12, L_16)), ((float)il2cpp_codegen_subtract(L_20, L_24)), NULL);
		// newCaretPos = selectionSize.x < 0 ? GetLocalPositionInText(myField.selectionAnchorPosition) : GetLocalPositionInText(myField.selectionFocusPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		float L_26 = L_25.___x_0;
		if ((((float)L_26) < ((float)(0.0f))))
		{
			goto IL_00c9;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_27 = __this->___myField_4;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_28, NULL);
		G_B6_0 = L_29;
		goto IL_00da;
	}

IL_00c9:
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_30 = __this->___myField_4;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_31, NULL);
		G_B6_0 = L_32;
	}

IL_00da:
	{
		V_0 = G_B6_0;
		// selectionSize = new Vector2(Mathf.Abs(selectionSize.x), Mathf.Abs(selectionSize.y) + myField.textComponent.fontSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		float L_34 = L_33.___x_0;
		float L_35;
		L_35 = fabsf(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_1;
		float L_37 = L_36.___y_1;
		float L_38;
		L_38 = fabsf(L_37);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_39 = __this->___myField_4;
		NullCheck(L_39);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40;
		L_40 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline(L_39, NULL);
		NullCheck(L_40);
		float L_41;
		L_41 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline(L_40, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_35, ((float)il2cpp_codegen_add(L_38, L_41)), NULL);
		// myCaret.sizeDelta = new Vector2(selectionSize.x, selectionSize.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->___myCaret_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_1;
		float L_44 = L_43.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_1;
		float L_46 = L_45.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), L_44, L_46, /*hidden argument*/NULL);
		NullCheck(L_42);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_42, L_47, NULL);
		// myCaret.anchoredPosition = newCaretPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->___myCaret_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_0;
		NullCheck(L_48);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_48, L_49, NULL);
		// myCaret.GetComponent<Image>().color = origSelectionColor;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___myCaret_5;
		NullCheck(L_50);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51;
		L_51 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_50, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = __this->___origSelectionColor_7;
		NullCheck(L_51);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_52);
		return;
	}

IL_0148:
	{
		// selectingText = false;
		__this->___selectingText_9 = (bool)0;
		// myCaret.sizeDelta = new Vector2(myField.caretWidth, myField.textComponent.fontSize);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = __this->___myCaret_5;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_54 = __this->___myField_4;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = TMP_InputField_get_caretWidth_mA95E0A88F505D9618791AEDE9D649CA70F7E3B65_inline(L_54, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_56 = __this->___myField_4;
		NullCheck(L_56);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_57;
		L_57 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline(L_56, NULL);
		NullCheck(L_57);
		float L_58;
		L_58 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline(L_57, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_59), ((float)L_55), L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_53, L_59, NULL);
		// myCaret.anchoredPosition = newCaretPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = __this->___myCaret_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_0;
		NullCheck(L_60);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_60, L_61, NULL);
		// myCaret.GetComponent<Image>().color = origCaretColor;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = __this->___myCaret_5;
		NullCheck(L_62);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_63;
		L_63 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_62, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = __this->___origCaretColor_6;
		NullCheck(L_63);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_63, L_64);
		// }
		return;
	}
}
// UnityEngine.Vector2 CurvedUI.CurvedUITMPInputFieldCaret::GetLocalPositionInText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, int32_t ___0_charNo, const RuntimeMethod* method) 
{
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* V_0 = NULL;
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (myField.isFocused)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___myField_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		// TMP_TextInfo txtInfo = myField.textComponent.textInfo;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___myField_4;
		NullCheck(L_2);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3;
		L_3 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline(L_2, NULL);
		NullCheck(L_3);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_4;
		L_4 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_3, NULL);
		V_0 = L_4;
		// if (charNo > txtInfo.characterCount - 1) //do not go over the text length.
		int32_t L_5 = ___0_charNo;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___characterCount_3;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0033;
		}
	}
	{
		// charNo = txtInfo.characterCount - 1;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___characterCount_3;
		___0_charNo = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0033:
	{
		// TMP_CharacterInfo charInfo = txtInfo.characterInfo[charNo];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_10 = V_0;
		NullCheck(L_10);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_11 = L_10->___characterInfo_11;
		int32_t L_12 = ___0_charNo;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_1 = L_14;
		// return new Vector2(charInfo.topLeft.x, charInfo.ascender);
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___topLeft_19;
		float L_17 = L_16.___x_2;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_18 = V_1;
		float L_19 = L_18.___ascender_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_17, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0057:
	{
		// else return Vector2.zero; // field not focused, return 0,0
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_21;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CheckAndConvertMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CheckAndConvertMask_mE0063CE6557D6EC0F7EFADCF6D652C1E107E1654 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mBDE615050DB119C56B475EDFF7B95B31780900EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m57E6D911E98D70AEEB60D0D7B2C21918A1F61D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach(Transform trans in this.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_000e_1:
			{
				// foreach(Transform trans in this.transform)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if(trans.GetComponent<RectMask2D>()!= null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
				NullCheck(L_7);
				RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* L_8;
				L_8 = Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2(L_7, Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_9)
				{
					goto IL_0041_1;
				}
			}
			{
				// DestroyImmediate (trans.GetComponent<RectMask2D>());
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
				NullCheck(L_10);
				RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* L_11;
				L_11 = Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2(L_10, Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_11, NULL);
				// trans.AddComponentIfMissing<Image>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
				L_13 = CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mBDE615050DB119C56B475EDFF7B95B31780900EF(L_12, CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mBDE615050DB119C56B475EDFF7B95B31780900EF_RuntimeMethod_var);
				// trans.AddComponentIfMissing<Mask>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
				Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_15;
				L_15 = CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m57E6D911E98D70AEEB60D0D7B2C21918A1F61D7E(L_14, CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m57E6D911E98D70AEEB60D0D7B2C21918A1F61D7E_RuntimeMethod_var);
			}

IL_0041_1:
			{
				// foreach(Transform trans in this.transform)
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::get_CaretColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CurvedUITMPInputFieldCaret_get_CaretColor_m4D7BFED4BAA481F61E54C735F82EEE2AF517FA3A (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	{
		// get { return origCaretColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___origCaretColor_6;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::set_CaretColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_set_CaretColor_mF9F00D2FD40360FC235877F057C4AD31C8046E79 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// set { origCaretColor = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___origCaretColor_6 = L_0;
		// set { origCaretColor = value; }
		return;
	}
}
// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::get_SelectionColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CurvedUITMPInputFieldCaret_get_SelectionColor_mD4BF91085A9DDF8382BD1F99F1E75B2566C766EA (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	{
		// get { return origSelectionColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___origSelectionColor_7;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::set_SelectionColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_set_SelectionColor_mB54150D6772E1B39CE66366F1DE443674FCBEE43 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// set { origSelectionColor = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___origSelectionColor_7 = L_0;
		// set { origSelectionColor = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUITMPInputFieldCaret::get_CaretBlinkRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUITMPInputFieldCaret_get_CaretBlinkRate_m59FF878D8BEED788983786D46E2E07EF10517414 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	{
		// get { return myField.caretBlinkRate; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___myField_4;
		NullCheck(L_0);
		float L_1;
		L_1 = TMP_InputField_get_caretBlinkRate_mACAF2093330BB9CB0B8C5F7D76EAA4EB0AE4DD18_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::set_CaretBlinkRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_set_CaretBlinkRate_m51D44DA31C805F4230D4748FF393A20665E67FEF (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { myField.caretBlinkRate = value; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___myField_4;
		float L_1 = ___0_value;
		NullCheck(L_0);
		TMP_InputField_set_caretBlinkRate_m4D4B8F3C2169EE3FA7B27BECBD1563BFAD7B41F7(L_0, L_1, NULL);
		// set { myField.caretBlinkRate = value; }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret__ctor_mEAD98784C4CC176617278B6634C6DBBF22E37B29 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10__ctor_mC94964453788B59FFB9C854766DD5AE77DEFCF06 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10_System_IDisposable_Dispose_m7047638C4D04F18DAFE67D4B1ED0CB4AC422A8FF (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCaretBlinkerU3Ed__10_MoveNext_m90B74856F6710E73256662FA30DF3A31971706B3 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0074;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_007b;
	}

IL_0020:
	{
		// myCaret.gameObject.SetActive(selectingText ? true : !myCaret.gameObject.activeSelf);
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = L_4->___myCaret_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = L_7->___selectingText_9;
		G_B5_0 = L_6;
		if (L_8)
		{
			G_B6_0 = L_6;
			goto IL_0048;
		}
	}
	{
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_9 = V_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9->___myCaret_5;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_11, NULL);
		G_B7_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		G_B7_1 = G_B5_0;
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0049:
	{
		NullCheck(G_B7_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B7_1, (bool)G_B7_0, NULL);
		// yield return new WaitForSeconds(0.5f / (float)myField.caretBlinkRate);
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_13 = V_1;
		NullCheck(L_13);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_14 = L_13->___myField_4;
		NullCheck(L_14);
		float L_15;
		L_15 = TMP_InputField_get_caretBlinkRate_mACAF2093330BB9CB0B8C5F7D76EAA4EB0AE4DD18_inline(L_14, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, ((float)((0.5f)/((float)L_15))), NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0074:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007b:
	{
		// while (selected)
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->___selected_8;
		if (L_18)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCaretBlinkerU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F6FDD0B8B49CB8F93F38F06C465B403C8910F34 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_Reset_m4DF2E74FC878045B0B26356BC2394CEA1A0C0A38 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_Reset_m4DF2E74FC878045B0B26356BC2394CEA1A0C0A38_RuntimeMethod_var)));
	}
}
// System.Object CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_get_Current_m57F4F1C216A14B675561231138678947DCAD8A87 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void CurvedUI.CurvedUITMPSubmesh::UpdateSubmesh(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPSubmesh_UpdateSubmesh_mA3045387F2148F655658002E28CF31A87BAC7F1D (CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* __this, bool ___0_tesselate, bool ___1_curve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m4FB2CCA09E466A5464466D9520F1B88CDB103BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TMPsub == null) TMPsub = gameObject.GetComponent<TMP_SubMeshUI>();
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_0 = __this->___TMPsub_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (TMPsub == null) TMPsub = gameObject.GetComponent<TMP_SubMeshUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_3;
		L_3 = GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD(L_2, GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD_RuntimeMethod_var);
		__this->___TMPsub_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TMPsub_8), (void*)L_3);
	}

IL_001f:
	{
		// if (TMPsub == null) return;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_4 = __this->___TMPsub_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// if (TMPsub == null) return;
		return;
	}

IL_002e:
	{
		// if (TMPtext == null)TMPtext = GetComponentInParent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___TMPtext_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (TMPtext == null)TMPtext = GetComponentInParent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8;
		L_8 = Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE(__this, Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE_RuntimeMethod_var);
		__this->___TMPtext_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TMPtext_9), (void*)L_8);
	}

IL_0048:
	{
		// if (crvdVE == null)crvdVE = gameObject.AddComponentIfMissing<CurvedUIVertexEffect>();
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_9 = __this->___crvdVE_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		// if (crvdVE == null)crvdVE = gameObject.AddComponentIfMissing<CurvedUIVertexEffect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_12;
		L_12 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m4FB2CCA09E466A5464466D9520F1B88CDB103BAB(L_11, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m4FB2CCA09E466A5464466D9520F1B88CDB103BAB_RuntimeMethod_var);
		__this->___crvdVE_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crvdVE_7), (void*)L_12);
	}

IL_0067:
	{
		// if (tesselate || straightMesh == null || vh == null || (!Application.isPlaying))
		bool L_13 = ___0_tesselate;
		if (L_13)
		{
			goto IL_0087;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = __this->___straightMesh_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_15)
		{
			goto IL_0087;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_16 = __this->___vh_4;
		if (!L_16)
		{
			goto IL_0087;
		}
	}
	{
		bool L_17;
		L_17 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_17)
		{
			goto IL_00bc;
		}
	}

IL_0087:
	{
		// vh = new VertexHelper(TMPsub.mesh);
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_18 = __this->___TMPsub_8;
		NullCheck(L_18);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_19;
		L_19 = TMP_SubMeshUI_get_mesh_m18BAE0DB357DC5D7993D07BD826429AF727548E2(L_18, NULL);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_20 = (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE*)il2cpp_codegen_object_new(VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VertexHelper__ctor_mE42FAE63F4A3200C38ACFDD9C3F601FDC7E258F8(L_20, L_19, NULL);
		__this->___vh_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vh_4), (void*)L_20);
		// straightMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_21, NULL);
		__this->___straightMesh_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___straightMesh_5), (void*)L_21);
		// vh.FillMesh(straightMesh);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_22 = __this->___vh_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = __this->___straightMesh_5;
		NullCheck(L_22);
		VertexHelper_FillMesh_m524F00287F0A0C7683E2CC7768A77B5755544A0E(L_22, L_23, NULL);
		// curve = true;
		___1_curve = (bool)1;
	}

IL_00bc:
	{
		// if (curve)
		bool L_24 = ___1_curve;
		if (!L_24)
		{
			goto IL_0109;
		}
	}
	{
		// vh = new VertexHelper(straightMesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = __this->___straightMesh_5;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_26 = (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE*)il2cpp_codegen_object_new(VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		VertexHelper__ctor_mE42FAE63F4A3200C38ACFDD9C3F601FDC7E258F8(L_26, L_25, NULL);
		__this->___vh_4 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vh_4), (void*)L_26);
		// crvdVE.ModifyMesh(vh);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_27 = __this->___crvdVE_7;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_28 = __this->___vh_4;
		NullCheck(L_27);
		VirtualActionInvoker1< VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* >::Invoke(20 /* System.Void UnityEngine.UI.BaseMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper) */, L_27, L_28);
		// curvedMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_29, NULL);
		__this->___curvedMesh_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curvedMesh_6), (void*)L_29);
		// vh.FillMesh(curvedMesh);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_30 = __this->___vh_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = __this->___curvedMesh_6;
		NullCheck(L_30);
		VertexHelper_FillMesh_m524F00287F0A0C7683E2CC7768A77B5755544A0E(L_30, L_31, NULL);
		// crvdVE.CurvingRequired = true;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_32 = __this->___crvdVE_7;
		NullCheck(L_32);
		CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778_inline(L_32, (bool)1, NULL);
	}

IL_0109:
	{
		// TMPsub.canvasRenderer.SetMesh(curvedMesh);
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_33 = __this->___TMPsub_8;
		NullCheck(L_33);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_34;
		L_34 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(L_33, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = __this->___curvedMesh_6;
		NullCheck(L_34);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_34, L_35, NULL);
		// if (TMPtext != null && TMPtext.textInfo.materialCount < 2)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36 = __this->___TMPtext_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_0158;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_38 = __this->___TMPtext_9;
		NullCheck(L_38);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_39;
		L_39 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_38, NULL);
		NullCheck(L_39);
		int32_t L_40 = L_39->___materialCount_10;
		if ((((int32_t)L_40) >= ((int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		// TMPsub.enabled = false;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_41 = __this->___TMPsub_8;
		NullCheck(L_41);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_41, (bool)0, NULL);
		// TMPsub.enabled = true;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_42 = __this->___TMPsub_8;
		NullCheck(L_42);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_42, (bool)1, NULL);
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPSubmesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPSubmesh__ctor_m2BC8C8249E4DB8F727A91B4A9B60C9622929AF53 (CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CurvedUI.OptionalDependencyAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionalDependencyAttribute__ctor_mD206637E5553A65E68C6D9A263964D4DAD965A9A (OptionalDependencyAttribute_tA4AF5D8DF636D9E52A8F86F02F7CE9B16E2E8708* __this, String_t* ___0_dependentClass, String_t* ___1_define, const RuntimeMethod* method) 
{
	{
		// public OptionalDependencyAttribute(string dependentClass, string define)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.dependentClass = dependentClass;
		String_t* L_0 = ___0_dependentClass;
		__this->___dependentClass_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dependentClass_0), (void*)L_0);
		// this.define = define;
		String_t* L_1 = ___1_define;
		__this->___define_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___define_1), (void*)L_1);
		// }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->___m_Interactable_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return angle; }
		int32_t L_0 = __this->___angle_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return ringFlipVertical; }
		bool L_0 = __this->___ringFlipVertical_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return ringExternalDiamater; }
		int32_t L_0 = __this->___ringExternalDiamater_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return ringFill; }
		float L_0 = __this->___ringFill_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return vertAngle; }
		int32_t L_0 = __this->___vertAngle_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return preserveAspect; }
		bool L_0 = __this->___preserveAspect_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return shape; }
		int32_t L_0 = __this->___shape_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUISettings_get_Quality_mD4FAA57D6D6197E3CB9D02D7CB1247AFCCF350F6_inline (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// get { return quality; }
		float L_0 = __this->___quality_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778_inline (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { curvingRequired = value; }
		bool L_0 = ___0_value;
		__this->___curvingRequired_13 = L_0;
		// set { curvingRequired = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIRaycaster_get_PointingAtCanvas_mAB3CF97B0286809A4116DA42464B7E61A20C29CA_inline (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) 
{
	{
		// get { return pointingAtCanvas; }
		bool L_0 = __this->___pointingAtCanvas_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIInputModule_get_GazeUseTimedClick_m5A4D1EF48159BAEAB7442199036ED6071DC0A98C_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// get => gazeUseTimedClick;
		bool L_0 = __this->___gazeUseTimedClick_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeUseTimedClick_m5103211575DCD154F3173A9DF228B16E1AE76CF0_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => gazeUseTimedClick = value;
		bool L_0 = ___0_value;
		__this->___gazeUseTimedClick_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimer_mBACA415983885ED0D52C2BA1806BD9D999CCAFC3_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// get => gazeClickTimer;
		float L_0 = __this->___gazeClickTimer_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimerDelay_mEE9D705F5B6072FA19FA68794CF59F697124E0B7_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// get => gazeClickTimerDelay;
		float L_0 = __this->___gazeClickTimerDelay_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeTimerProgress_m20F15F571020564B09F34E9E9E85B31B96792B74_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// public float GazeTimerProgress => gazeTimerProgress;
		float L_0 = __this->___gazeTimerProgress_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135_inline (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_tesselationRequired = value;
		bool L_0 = ___0_value;
		__this->___m_tesselationRequired_12 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29_inline (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_tesselationRequired; }
		bool L_0 = __this->___m_tesselationRequired_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_rhs;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_mD6A1C6E862F3EFB1B222A2DDCB7A7237042DE142_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public Type type { get { return m_Type; } set { if (SetPropertyUtility.SetStruct(ref m_Type, value)) SetVerticesDirty(); } }
		int32_t L_0 = __this->___m_Type_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		float L_2 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_a;
		float L_4 = L_3.___y_2;
		float L_5 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_a;
		float L_7 = L_6.___z_3;
		float L_8 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___0_a;
		float L_10 = L_9.___w_4;
		float L_11 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TMP_InputField_get_selectionColor_m99D5B9FBC11FEAA170C113FB238120A73429F5BB_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public Color selectionColor { get { return m_SelectionColor; } set { if (SetPropertyUtility.SetColor(ref m_SelectionColor, value)) MarkGeometryAsDirty(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_SelectionColor_59;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_TextComponent; }
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TextComponent_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_fontSize; }
		float L_0 = __this->___m_fontSize_74;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_caretWidth_mA95E0A88F505D9618791AEDE9D649CA70F7E3B65_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public int caretWidth { get { return m_CaretWidth; } set { if (SetPropertyUtility.SetStruct(ref m_CaretWidth, value)) MarkGeometryAsDirty(); } }
		int32_t L_0 = __this->___m_CaretWidth_62;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AllowInput; }
		bool L_0 = __this->___m_AllowInput_74;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_textInfo; }
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_0 = __this->___m_textInfo_153;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_InputField_get_caretBlinkRate_mACAF2093330BB9CB0B8C5F7D76EAA4EB0AE4DD18_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CaretBlinkRate; }
		float L_0 = __this->___m_CaretBlinkRate_61;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_3 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) 
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_1 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_6 = V_0;
		int32_t L_7 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_8);
		return;
	}

IL_0034:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_9 = ___0_item;
		((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_rhs;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_lhs;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_rhs;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_lhs;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_rhs;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_lhs;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_rhs;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
