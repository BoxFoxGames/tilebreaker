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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t6C33D80670016FFA10F03F59FB542306FA60F1F3;
// System.Action`2<System.Boolean,System.String>
struct Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2;
// System.Action`3<System.Boolean,System.Object,System.Object>
struct Action_3_tB8290CEDF89EF089545D691C8F6D6C7A3A6003A9;
// System.Action`3<System.Boolean,System.String,System.String>
struct Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF;
// System.Action`3<System.Boolean,System.String,System.String>[]
struct Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>[]
struct EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Purchasing.Extension.ProductDescription>[]
struct SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_t5D4AD10DAB2A8CF2FBB428EC85E2BA5AAEB42C21;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct IEnumerable_1_t1481940173588FB0F383AF99276F4C3953A77197;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct IEnumerable_1_t724BC191F9F2A40FF74CD12C3DC80DFE7813D875;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerable_1_tDB472B55AE16CC5753D88358865F4C867D4F2F34;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerator_1_t03AC33D97EBA418F757A9065CE29CE44AA6487BB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct IEqualityComparer_1_t2AA6E2F817DDD5A3A0ACB3B623A42C3B23950949;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductDefinition>
struct IList_1_t7824A0F765D2F0CE61693435F4544AB7C81BD878;
// System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>
struct List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_t4460350C0067C025B12B0DBE63539EBA3F132783;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_t0C996785D2BB7DD3F070A47B3C2464482383B171;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_tC1407B3658061B95CD1C57A4C0176F6E92769D9F;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition>
struct List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_t5AAB87449A3BC8E83D69D277DD456E480723B52F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Uniject.IUtil
struct IUtil_tB126BA264C863A9E4D625BB1F178A06E17F8BBDC;
// UnityEngine.ChannelPurchase.IPurchaseListener
struct IPurchaseListener_tA4C69AC7EE35CB962A593E99A70F4C64F5D49C4B;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43;
// UnityEngine.Purchasing.Default.WinProductDescription[]
struct WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892;
// UnityEngine.Purchasing.EventQueue
struct EventQueue_tE64BAEBEF84EB1563058DB346F51951C87B497A9;
// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60;
// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_tC24CDB326071E76C6619BD6C513DADC4EBA9D9E6;
// UnityEngine.Purchasing.INativeUnityChannelStore
struct INativeUnityChannelStore_t83C469B20B7E04E402F32CF77DA9F2182B1885AF;
// UnityEngine.Purchasing.IProductCatalogImpl
struct IProductCatalogImpl_tEFC56D4CC6875E989B073CAF7A24AD5B220CD1E5;
// UnityEngine.Purchasing.JSONStore
struct JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086;
// UnityEngine.Purchasing.Price
struct Price_t3F41D6F6B9D16F07829D0DF87AF743BD0DD1842B;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48;
// UnityEngine.Purchasing.ProfileData
struct ProfileData_tFD9651A640A506B6FA58DE9C9DC57F8EA89FB881;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_tD1200803631F966053EF65381B041E99F0F78425;
// UnityEngine.Purchasing.StoreCatalogImpl
struct StoreCatalogImpl_t1E26CFB65F21A21F359990F3A8085D36ED592073;
// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2;
// UnityEngine.Purchasing.UIFakeStore/DialogRequest
struct DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252;
// UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier
struct LifecycleNotifier_t9A1E8984BE86FD3991618C0C078666E34DA0028A;
// UnityEngine.Purchasing.UnifiedReceipt
struct UnifiedReceipt_tAA84A8E13C93D91903A1E777299EB3BE1F6C87C4;
// UnityEngine.Purchasing.UnityChannelBindings
struct UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD;
// UnityEngine.Purchasing.UnityChannelBindings/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B;
// UnityEngine.Purchasing.UnityChannelImpl
struct UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8;
// UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D;
// UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_1
struct U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33;
// UnityEngine.Purchasing.UnityChannelPurchaseReceipt
struct UnityChannelPurchaseReceipt_t06BE912023C9642C9EC0B3052125CA554D5E8F57;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2;
// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDFCC87B7191D2546E8BC8437B4EE7FDB8DCF1E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t03AC33D97EBA418F757A9065CE29CE44AA6487BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAECC6295317C3C4CBCDAE193729EB217FFA6EB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeUnityChannelStore_t83C469B20B7E04E402F32CF77DA9F2182B1885AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseService_t7F12D5C55BBD81DB4420C2853172B9FED0FF3830_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB4F3A5B5F7FF6CBD6BD49661117C260799518394____8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662;
IL2CPP_EXTERN_C String_t* _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671;
IL2CPP_EXTERN_C String_t* _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B64CAA4AC5332E2069F86F967064FE587AF7820;
IL2CPP_EXTERN_C String_t* _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA;
IL2CPP_EXTERN_C String_t* _stringLiteral44E949CB95D4BBD927D61FBE6D06D28EB4960DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral57814CFBAE5C6D00F5CAB49E34B9AA2CE8269EB9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C59D560D31CCE9A5B206D8EA5F6C38267C1D0;
IL2CPP_EXTERN_C String_t* _stringLiteral862E356EFB96FF23BE395FDD8CF34602BA87D015;
IL2CPP_EXTERN_C String_t* _stringLiteral97CF83B8420705673DD9E20FFB51124368B3F7BC;
IL2CPP_EXTERN_C String_t* _stringLiteral97EDC12A699B77CD7DCA0C6ECC5E0AB625126F74;
IL2CPP_EXTERN_C String_t* _stringLiteralB41F2D713DC92217B42B25AA193107BD2F8863D6;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7819B34FF87570745FBE461E36A16F80E562CE;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9D01ECC70A5325ED60FF47E843538E385AE1F6;
IL2CPP_EXTERN_C String_t* _stringLiteralCBBD8674892389F6016A1136956BE7787E630B76;
IL2CPP_EXTERN_C String_t* _stringLiteralCDBA822F8324B05B69E1AA552687ED7C8B37C97F;
IL2CPP_EXTERN_C String_t* _stringLiteralD8556CF7451C22FF4E069B286916B24EBBF72F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE3FFEF980E651436BDA1810C67530580D1328C8;
IL2CPP_EXTERN_C String_t* _stringLiteralE005CDF78FC36965B839E7115A56CAE84B2994B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE75AEFABDAA785AC2B8267F716185360ED501BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralEDEDA8D96D6BEFA5C97172CAF6624B6A80182222;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1FDF0EDBB24CBF96DFA0339B642B2085C163F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55;
IL2CPP_EXTERN_C String_t* _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m3EA9A40A7E78188DAE114CD04AA8B8A7BB7A8AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m33DC1A34804F606E3D828BF0EC86F2407D99EBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mD52EFA24063C9908B580BF2F0C69D974C6E18C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_m173722A9406651C1947EBB8BB4C18D078A2DFA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_mEE5ED585085BA408C4E687D3C6EE2FACB2A12429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelBindings_FinishTransaction_m3D343D00D0BA7F91C5FA99CD8BD09CCAE6715509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelBindings_Purchase_mAE6F3B3A764DE795DB39CC6C84938CC163451520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelBindings_RetrieveProducts_m669B69F8E327A9AC6091A0066D4D63A8FDA90409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelImpl_U3CRetrieveProductsU3Eb__6_0_m36974464FA744A88E55A5FFE5BE095DAB769453A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m33DC1A34804F606E3D828BF0EC86F2407D99EBC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mD52EFA24063C9908B580BF2F0C69D974C6E18C26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_m173722A9406651C1947EBB8BB4C18D078A2DFA7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_mEE5ED585085BA408C4E687D3C6EE2FACB2A12429_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m7EB96867EC9F829639B542F54593887DAC013E0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC2B21F8CE37E6D9DF42AE539856605A5D56E2974_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_FinishTransaction_m3D343D00D0BA7F91C5FA99CD8BD09CCAE6715509_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_Purchase_mAE6F3B3A764DE795DB39CC6C84938CC163451520_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_Purchase_mE61111746D826CF58973463B6883DD8BD15B380D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_RequestUniquely_m564BFB86E9E35132B4E97DDABAC89E3A1091CB68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_RetrieveProducts_m669B69F8E327A9AC6091A0066D4D63A8FDA90409_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_RetrieveProducts_mAAAB3784C3D84F8ED0C12C2FD55C7154566FBBF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_ValidateReceipt_m93576269B71A336013DE8CBFF1116E817CD7A124_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings__ctor_mAECD6998E374677BB6B7F77EA3F6A149E147DEA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_Purchase_m619979D8626FD9DD7A4BC390626AE705772F3DAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_RetrieveProducts_mFB86735FC6CF5F60922933AB56A995B5F82C4EAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_ValidateReceipt_m1D0C196EAD264E2CE220A037FC27465992198B45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl__ctor_m56164F16BA7C281EC391D7D5BE71461753F33FEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_extractDeveloperPayload_m4E85D850DE7CC010DEC60349F03B7AD30A57798B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_FinishTransaction_mF79D195C5522BA520354031A3C2A8FB7654F33C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_Purchase_m4E9C0943FBF0A814A0AC42BBABFC7F5C535812DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RestoreTransactions_m78718960BD3272232458D525274671E7B21F55A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RetrieveProducts_m19E9EFFE08B41997C6A2F0AF0AA2D16B6F99315D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_init_m83E77AC733A7DC8AE72D83409BC46A207354C1EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_restoreTransactions_m241B4A16358668FA9AC0F19A3354830DF3FDDF4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XiaomiPriceTiers__cctor_m18D33A4801DF9E2BACC7AE160391DA39728FB095_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

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


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct  Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___entries_1)); }
	inline EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___keys_7)); }
	inline KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___values_8)); }
	inline ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct  HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____slots_8)); }
	inline SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>
struct  List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____items_1)); }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* get__items_1() const { return ____items_1; }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_StaticFields, ____emptyArray_5)); }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct  List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____items_1)); }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* get__items_1() const { return ____items_1; }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92_StaticFields, ____emptyArray_5)); }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct  ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// UnityEngine.Purchasing.Extension.AbstractStore
struct  AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.ProductCatalog
struct  ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableCodelessAutoInitialization
	bool ___enableCodelessAutoInitialization_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_t0C996785D2BB7DD3F070A47B3C2464482383B171 * ___products_2;

public:
	inline static int32_t get_offset_of_enableCodelessAutoInitialization_1() { return static_cast<int32_t>(offsetof(ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D, ___enableCodelessAutoInitialization_1)); }
	inline bool get_enableCodelessAutoInitialization_1() const { return ___enableCodelessAutoInitialization_1; }
	inline bool* get_address_of_enableCodelessAutoInitialization_1() { return &___enableCodelessAutoInitialization_1; }
	inline void set_enableCodelessAutoInitialization_1(bool value)
	{
		___enableCodelessAutoInitialization_1 = value;
	}

	inline static int32_t get_offset_of_products_2() { return static_cast<int32_t>(offsetof(ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D, ___products_2)); }
	inline List_1_t0C996785D2BB7DD3F070A47B3C2464482383B171 * get_products_2() const { return ___products_2; }
	inline List_1_t0C996785D2BB7DD3F070A47B3C2464482383B171 ** get_address_of_products_2() { return &___products_2; }
	inline void set_products_2(List_1_t0C996785D2BB7DD3F070A47B3C2464482383B171 * value)
	{
		___products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_2), (void*)value);
	}
};

struct ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D_StaticFields
{
public:
	// UnityEngine.Purchasing.IProductCatalogImpl UnityEngine.Purchasing.ProductCatalog::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore_<>c
struct  U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2_StaticFields
{
public:
	// UnityEngine.Purchasing.UIFakeStore_<>c UnityEngine.Purchasing.UIFakeStore_<>c::<>9
	U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.UIFakeStore_<>c::<>9__18_0
	Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore_DialogRequest
struct  DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::QueryText
	String_t* ___QueryText_0;
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::OkayButtonText
	String_t* ___OkayButtonText_1;
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::CancelButtonText
	String_t* ___CancelButtonText_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.UIFakeStore_DialogRequest::Options
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___Options_3;
	// System.Action`2<System.Boolean,System.Int32> UnityEngine.Purchasing.UIFakeStore_DialogRequest::Callback
	Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * ___Callback_4;

public:
	inline static int32_t get_offset_of_QueryText_0() { return static_cast<int32_t>(offsetof(DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252, ___QueryText_0)); }
	inline String_t* get_QueryText_0() const { return ___QueryText_0; }
	inline String_t** get_address_of_QueryText_0() { return &___QueryText_0; }
	inline void set_QueryText_0(String_t* value)
	{
		___QueryText_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryText_0), (void*)value);
	}

	inline static int32_t get_offset_of_OkayButtonText_1() { return static_cast<int32_t>(offsetof(DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252, ___OkayButtonText_1)); }
	inline String_t* get_OkayButtonText_1() const { return ___OkayButtonText_1; }
	inline String_t** get_address_of_OkayButtonText_1() { return &___OkayButtonText_1; }
	inline void set_OkayButtonText_1(String_t* value)
	{
		___OkayButtonText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OkayButtonText_1), (void*)value);
	}

	inline static int32_t get_offset_of_CancelButtonText_2() { return static_cast<int32_t>(offsetof(DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252, ___CancelButtonText_2)); }
	inline String_t* get_CancelButtonText_2() const { return ___CancelButtonText_2; }
	inline String_t** get_address_of_CancelButtonText_2() { return &___CancelButtonText_2; }
	inline void set_CancelButtonText_2(String_t* value)
	{
		___CancelButtonText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancelButtonText_2), (void*)value);
	}

	inline static int32_t get_offset_of_Options_3() { return static_cast<int32_t>(offsetof(DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252, ___Options_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_Options_3() const { return ___Options_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_Options_3() { return &___Options_3; }
	inline void set_Options_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___Options_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Options_3), (void*)value);
	}

	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252, ___Callback_4)); }
	inline Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * get_Callback_4() const { return ___Callback_4; }
	inline Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC ** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_4), (void*)value);
	}
};


// UnityEngine.Purchasing.UnifiedReceipt
struct  UnifiedReceipt_tAA84A8E13C93D91903A1E777299EB3BE1F6C87C4  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnifiedReceipt::Payload
	String_t* ___Payload_0;

public:
	inline static int32_t get_offset_of_Payload_0() { return static_cast<int32_t>(offsetof(UnifiedReceipt_tAA84A8E13C93D91903A1E777299EB3BE1F6C87C4, ___Payload_0)); }
	inline String_t* get_Payload_0() const { return ___Payload_0; }
	inline String_t** get_address_of_Payload_0() { return &___Payload_0; }
	inline void set_Payload_0(String_t* value)
	{
		___Payload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Payload_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelBindings
struct  UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UnityChannelBindings::m_PurchaseCallback
	Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___m_PurchaseCallback_0;
	// System.String UnityEngine.Purchasing.UnityChannelBindings::m_PurchaseGuid
	String_t* ___m_PurchaseGuid_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>> UnityEngine.Purchasing.UnityChannelBindings::m_ValidateCallbacks
	Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___m_ValidateCallbacks_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>> UnityEngine.Purchasing.UnityChannelBindings::m_PurchaseConfirmCallbacks
	Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___m_PurchaseConfirmCallbacks_3;

public:
	inline static int32_t get_offset_of_m_PurchaseCallback_0() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD, ___m_PurchaseCallback_0)); }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * get_m_PurchaseCallback_0() const { return ___m_PurchaseCallback_0; }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 ** get_address_of_m_PurchaseCallback_0() { return &___m_PurchaseCallback_0; }
	inline void set_m_PurchaseCallback_0(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * value)
	{
		___m_PurchaseCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchaseGuid_1() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD, ___m_PurchaseGuid_1)); }
	inline String_t* get_m_PurchaseGuid_1() const { return ___m_PurchaseGuid_1; }
	inline String_t** get_address_of_m_PurchaseGuid_1() { return &___m_PurchaseGuid_1; }
	inline void set_m_PurchaseGuid_1(String_t* value)
	{
		___m_PurchaseGuid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseGuid_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidateCallbacks_2() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD, ___m_ValidateCallbacks_2)); }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * get_m_ValidateCallbacks_2() const { return ___m_ValidateCallbacks_2; }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 ** get_address_of_m_ValidateCallbacks_2() { return &___m_ValidateCallbacks_2; }
	inline void set_m_ValidateCallbacks_2(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * value)
	{
		___m_ValidateCallbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ValidateCallbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchaseConfirmCallbacks_3() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD, ___m_PurchaseConfirmCallbacks_3)); }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * get_m_PurchaseConfirmCallbacks_3() const { return ___m_PurchaseConfirmCallbacks_3; }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 ** get_address_of_m_PurchaseConfirmCallbacks_3() { return &___m_PurchaseConfirmCallbacks_3; }
	inline void set_m_PurchaseConfirmCallbacks_3(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * value)
	{
		___m_PurchaseConfirmCallbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseConfirmCallbacks_3), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0
struct  U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::transactionId
	String_t* ___transactionId_0;
	// UnityEngine.Purchasing.UnityChannelBindings UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::<>4__this
	UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_transactionId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B, ___transactionId_0)); }
	inline String_t* get_transactionId_0() const { return ___transactionId_0; }
	inline String_t** get_address_of_transactionId_0() { return &___transactionId_0; }
	inline void set_transactionId_0(String_t* value)
	{
		___transactionId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B, ___U3CU3E4__this_1)); }
	inline UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::product
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product_0;
	// UnityEngine.Purchasing.UnityChannelImpl UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::<>4__this
	UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D, ___product_0)); }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D, ___U3CU3E4__this_1)); }
	inline UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1
struct  U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::dic
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic_0;
	// System.String UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::transactionId
	String_t* ___transactionId_1;
	// UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0 UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * ___CSU24U3CU3E8__locals1_2;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33, ___dic_0)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_dic_0() const { return ___dic_0; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dic_0), (void*)value);
	}

	inline static int32_t get_offset_of_transactionId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33, ___transactionId_1)); }
	inline String_t* get_transactionId_1() const { return ___transactionId_1; }
	inline String_t** get_address_of_transactionId_1() { return &___transactionId_1; }
	inline void set_transactionId_1(String_t* value)
	{
		___transactionId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_1), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33, ___CSU24U3CU3E8__locals1_2)); }
	inline U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * get_CSU24U3CU3E8__locals1_2() const { return ___CSU24U3CU3E8__locals1_2; }
	inline U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D ** get_address_of_CSU24U3CU3E8__locals1_2() { return &___CSU24U3CU3E8__locals1_2; }
	inline void set_CSU24U3CU3E8__locals1_2(U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * value)
	{
		___CSU24U3CU3E8__locals1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelPurchaseReceipt
struct  UnityChannelPurchaseReceipt_t06BE912023C9642C9EC0B3052125CA554D5E8F57  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::storeSpecificId
	String_t* ___storeSpecificId_0;
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::transactionId
	String_t* ___transactionId_1;
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::orderQueryToken
	String_t* ___orderQueryToken_2;

public:
	inline static int32_t get_offset_of_storeSpecificId_0() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t06BE912023C9642C9EC0B3052125CA554D5E8F57, ___storeSpecificId_0)); }
	inline String_t* get_storeSpecificId_0() const { return ___storeSpecificId_0; }
	inline String_t** get_address_of_storeSpecificId_0() { return &___storeSpecificId_0; }
	inline void set_storeSpecificId_0(String_t* value)
	{
		___storeSpecificId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeSpecificId_0), (void*)value);
	}

	inline static int32_t get_offset_of_transactionId_1() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t06BE912023C9642C9EC0B3052125CA554D5E8F57, ___transactionId_1)); }
	inline String_t* get_transactionId_1() const { return ___transactionId_1; }
	inline String_t** get_address_of_transactionId_1() { return &___transactionId_1; }
	inline void set_transactionId_1(String_t* value)
	{
		___transactionId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_1), (void*)value);
	}

	inline static int32_t get_offset_of_orderQueryToken_2() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t06BE912023C9642C9EC0B3052125CA554D5E8F57, ___orderQueryToken_2)); }
	inline String_t* get_orderQueryToken_2() const { return ___orderQueryToken_2; }
	inline String_t** get_address_of_orderQueryToken_2() { return &___orderQueryToken_2; }
	inline void set_orderQueryToken_2(String_t* value)
	{
		___orderQueryToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderQueryToken_2), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore_<>c
struct  U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields
{
public:
	// UnityEngine.Purchasing.WinRTStore_<>c UnityEngine.Purchasing.WinRTStore_<>c::<>9
	U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.WinRTStore_<>c::<>9__8_0
	Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription> UnityEngine.Purchasing.WinRTStore_<>c::<>9__8_1
	Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * ___U3CU3E9__8_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
	}
};


// UnityEngine.Purchasing.XiaomiPriceTiers
struct  XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5  : public RuntimeObject
{
public:

public:
};

struct XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_StaticFields
{
public:
	// System.Int32[] UnityEngine.Purchasing.XiaomiPriceTiers::XiaomiPriceTierPrices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___XiaomiPriceTierPrices_0;

public:
	inline static int32_t get_offset_of_XiaomiPriceTierPrices_0() { return static_cast<int32_t>(offsetof(XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_StaticFields, ___XiaomiPriceTierPrices_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_XiaomiPriceTierPrices_0() const { return ___XiaomiPriceTierPrices_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_XiaomiPriceTierPrices_0() { return &___XiaomiPriceTierPrices_0; }
	inline void set_XiaomiPriceTierPrices_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___XiaomiPriceTierPrices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XiaomiPriceTierPrices_0), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D368
struct  __StaticArrayInitTypeSizeU3D368_t83C424DD878D2D09D5469B198CDD31CDAB3631F7 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D368_t83C424DD878D2D09D5469B198CDD31CDAB3631F7__padding[368];
	};

public:
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// UnityEngine.Purchasing.WinRTStore
struct  WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2  : public AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C
{
public:
	// UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.WinRTStore::win8
	RuntimeObject* ___win8_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.WinRTStore::callback
	RuntimeObject* ___callback_1;
	// Uniject.IUtil UnityEngine.Purchasing.WinRTStore::util
	RuntimeObject* ___util_2;
	// UnityEngine.ILogger UnityEngine.Purchasing.WinRTStore::logger
	RuntimeObject* ___logger_3;
	// System.Boolean UnityEngine.Purchasing.WinRTStore::m_CanReceivePurchases
	bool ___m_CanReceivePurchases_4;

public:
	inline static int32_t get_offset_of_win8_0() { return static_cast<int32_t>(offsetof(WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2, ___win8_0)); }
	inline RuntimeObject* get_win8_0() const { return ___win8_0; }
	inline RuntimeObject** get_address_of_win8_0() { return &___win8_0; }
	inline void set_win8_0(RuntimeObject* value)
	{
		___win8_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win8_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2, ___callback_1)); }
	inline RuntimeObject* get_callback_1() const { return ___callback_1; }
	inline RuntimeObject** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(RuntimeObject* value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_util_2() { return static_cast<int32_t>(offsetof(WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2, ___util_2)); }
	inline RuntimeObject* get_util_2() const { return ___util_2; }
	inline RuntimeObject** get_address_of_util_2() { return &___util_2; }
	inline void set_util_2(RuntimeObject* value)
	{
		___util_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_2), (void*)value);
	}

	inline static int32_t get_offset_of_logger_3() { return static_cast<int32_t>(offsetof(WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2, ___logger_3)); }
	inline RuntimeObject* get_logger_3() const { return ___logger_3; }
	inline RuntimeObject** get_address_of_logger_3() { return &___logger_3; }
	inline void set_logger_3(RuntimeObject* value)
	{
		___logger_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanReceivePurchases_4() { return static_cast<int32_t>(offsetof(WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2, ___m_CanReceivePurchases_4)); }
	inline bool get_m_CanReceivePurchases_4() const { return ___m_CanReceivePurchases_4; }
	inline bool* get_address_of_m_CanReceivePurchases_4() { return &___m_CanReceivePurchases_4; }
	inline void set_m_CanReceivePurchases_4(bool value)
	{
		___m_CanReceivePurchases_4 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tB4F3A5B5F7FF6CBD6BD49661117C260799518394  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tB4F3A5B5F7FF6CBD6BD49661117C260799518394_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D368 <PrivateImplementationDetails>::8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41
	__StaticArrayInitTypeSizeU3D368_t83C424DD878D2D09D5469B198CDD31CDAB3631F7  ___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0;

public:
	inline static int32_t get_offset_of_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB4F3A5B5F7FF6CBD6BD49661117C260799518394_StaticFields, ___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0)); }
	inline __StaticArrayInitTypeSizeU3D368_t83C424DD878D2D09D5469B198CDD31CDAB3631F7  get_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0() const { return ___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0; }
	inline __StaticArrayInitTypeSizeU3D368_t83C424DD878D2D09D5469B198CDD31CDAB3631F7 * get_address_of_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0() { return &___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0; }
	inline void set_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0(__StaticArrayInitTypeSizeU3D368_t83C424DD878D2D09D5469B198CDD31CDAB3631F7  value)
	{
		___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.Default.WinProductDescription
struct  WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpriceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};


// UnityEngine.Purchasing.ProductMetadata
struct  ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedPriceStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedTitleU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedDescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisoCurrencyCodeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Purchasing.ProductType
struct  ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode
struct  StoreSpecificPurchaseErrorCode_tDBC6F231BCF6CC843B60F41590EBC27AB13375BD 
{
public:
	// System.Int32 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreSpecificPurchaseErrorCode_tDBC6F231BCF6CC843B60F41590EBC27AB13375BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.TranslationLocale
struct  TranslationLocale_tFA31C3819C6D9EEE2C9E5CF584F06FDD4EE5AC76 
{
public:
	// System.Int32 UnityEngine.Purchasing.TranslationLocale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TranslationLocale_tFA31C3819C6D9EEE2C9E5CF584F06FDD4EE5AC76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ValidateReceiptState
struct  ValidateReceiptState_t79EC76C28D40CA512B8629B5723AF2E6A8D3FD46 
{
public:
	// System.Int32 UnityEngine.Purchasing.ValidateReceiptState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidateReceiptState_t79EC76C28D40CA512B8629B5723AF2E6A8D3FD46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Purchasing.Extension.ProductDescription
struct  ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.Extension.ProductDescription::type
	int32_t ___type_1;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___U3CmetadataU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CmetadataU3Ek__BackingField_2)); }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * get_U3CmetadataU3Ek__BackingField_2() const { return ___U3CmetadataU3Ek__BackingField_2; }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 ** get_address_of_U3CmetadataU3Ek__BackingField_2() { return &___U3CmetadataU3Ek__BackingField_2; }
	inline void set_U3CmetadataU3Ek__BackingField_2(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * value)
	{
		___U3CmetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CreceiptU3Ek__BackingField_3)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_3() const { return ___U3CreceiptU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_3() { return &___U3CreceiptU3Ek__BackingField_3; }
	inline void set_U3CreceiptU3Ek__BackingField_3(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CtransactionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_4() const { return ___U3CtransactionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_4() { return &___U3CtransactionIdU3Ek__BackingField_4; }
	inline void set_U3CtransactionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIdU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct  PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Purchasing.JSONStore
struct  JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968  : public AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C
{
public:
	// UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.JSONStore::m_managedStore
	StoreCatalogImpl_t1E26CFB65F21A21F359990F3A8085D36ED592073 * ___m_managedStore_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.JSONStore::unity
	RuntimeObject* ___unity_1;
	// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.JSONStore::store
	RuntimeObject* ___store_2;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.JSONStore::m_storeCatalog
	List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB * ___m_storeCatalog_3;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isManagedStoreEnabled
	bool ___isManagedStoreEnabled_4;
	// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.JSONStore::m_profileData
	ProfileData_tFD9651A640A506B6FA58DE9C9DC57F8EA89FB881 * ___m_profileData_5;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isRefreshing
	bool ___isRefreshing_6;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isFirstTimeRetrievingProducts
	bool ___isFirstTimeRetrievingProducts_7;
	// System.Action UnityEngine.Purchasing.JSONStore::refreshCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___refreshCallback_8;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.JSONStore::m_Module
	StandardPurchasingModule_tD1200803631F966053EF65381B041E99F0F78425 * ___m_Module_9;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.JSONStore::m_BuilderProducts
	HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * ___m_BuilderProducts_10;
	// UnityEngine.ILogger UnityEngine.Purchasing.JSONStore::m_Logger
	RuntimeObject* ___m_Logger_11;
	// UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.JSONStore::m_EventQueue
	EventQueue_tE64BAEBEF84EB1563058DB346F51951C87B497A9 * ___m_EventQueue_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONStore::promoPayload
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___promoPayload_13;
	// System.Boolean UnityEngine.Purchasing.JSONStore::catalogDisabled
	bool ___catalogDisabled_14;
	// System.Boolean UnityEngine.Purchasing.JSONStore::testStore
	bool ___testStore_15;
	// System.String UnityEngine.Purchasing.JSONStore::iapBaseUrl
	String_t* ___iapBaseUrl_16;
	// System.String UnityEngine.Purchasing.JSONStore::eventBaseUrl
	String_t* ___eventBaseUrl_17;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::lastPurchaseFailureDescription
	PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * ___lastPurchaseFailureDescription_18;
	// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::_lastPurchaseErrorCode
	int32_t ____lastPurchaseErrorCode_19;
	// System.String UnityEngine.Purchasing.JSONStore::kStoreSpecificErrorCodeKey
	String_t* ___kStoreSpecificErrorCodeKey_20;

public:
	inline static int32_t get_offset_of_m_managedStore_0() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___m_managedStore_0)); }
	inline StoreCatalogImpl_t1E26CFB65F21A21F359990F3A8085D36ED592073 * get_m_managedStore_0() const { return ___m_managedStore_0; }
	inline StoreCatalogImpl_t1E26CFB65F21A21F359990F3A8085D36ED592073 ** get_address_of_m_managedStore_0() { return &___m_managedStore_0; }
	inline void set_m_managedStore_0(StoreCatalogImpl_t1E26CFB65F21A21F359990F3A8085D36ED592073 * value)
	{
		___m_managedStore_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_managedStore_0), (void*)value);
	}

	inline static int32_t get_offset_of_unity_1() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___unity_1)); }
	inline RuntimeObject* get_unity_1() const { return ___unity_1; }
	inline RuntimeObject** get_address_of_unity_1() { return &___unity_1; }
	inline void set_unity_1(RuntimeObject* value)
	{
		___unity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unity_1), (void*)value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___store_2)); }
	inline RuntimeObject* get_store_2() const { return ___store_2; }
	inline RuntimeObject** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(RuntimeObject* value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_storeCatalog_3() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___m_storeCatalog_3)); }
	inline List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB * get_m_storeCatalog_3() const { return ___m_storeCatalog_3; }
	inline List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB ** get_address_of_m_storeCatalog_3() { return &___m_storeCatalog_3; }
	inline void set_m_storeCatalog_3(List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB * value)
	{
		___m_storeCatalog_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_storeCatalog_3), (void*)value);
	}

	inline static int32_t get_offset_of_isManagedStoreEnabled_4() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___isManagedStoreEnabled_4)); }
	inline bool get_isManagedStoreEnabled_4() const { return ___isManagedStoreEnabled_4; }
	inline bool* get_address_of_isManagedStoreEnabled_4() { return &___isManagedStoreEnabled_4; }
	inline void set_isManagedStoreEnabled_4(bool value)
	{
		___isManagedStoreEnabled_4 = value;
	}

	inline static int32_t get_offset_of_m_profileData_5() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___m_profileData_5)); }
	inline ProfileData_tFD9651A640A506B6FA58DE9C9DC57F8EA89FB881 * get_m_profileData_5() const { return ___m_profileData_5; }
	inline ProfileData_tFD9651A640A506B6FA58DE9C9DC57F8EA89FB881 ** get_address_of_m_profileData_5() { return &___m_profileData_5; }
	inline void set_m_profileData_5(ProfileData_tFD9651A640A506B6FA58DE9C9DC57F8EA89FB881 * value)
	{
		___m_profileData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_profileData_5), (void*)value);
	}

	inline static int32_t get_offset_of_isRefreshing_6() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___isRefreshing_6)); }
	inline bool get_isRefreshing_6() const { return ___isRefreshing_6; }
	inline bool* get_address_of_isRefreshing_6() { return &___isRefreshing_6; }
	inline void set_isRefreshing_6(bool value)
	{
		___isRefreshing_6 = value;
	}

	inline static int32_t get_offset_of_isFirstTimeRetrievingProducts_7() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___isFirstTimeRetrievingProducts_7)); }
	inline bool get_isFirstTimeRetrievingProducts_7() const { return ___isFirstTimeRetrievingProducts_7; }
	inline bool* get_address_of_isFirstTimeRetrievingProducts_7() { return &___isFirstTimeRetrievingProducts_7; }
	inline void set_isFirstTimeRetrievingProducts_7(bool value)
	{
		___isFirstTimeRetrievingProducts_7 = value;
	}

	inline static int32_t get_offset_of_refreshCallback_8() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___refreshCallback_8)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_refreshCallback_8() const { return ___refreshCallback_8; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_refreshCallback_8() { return &___refreshCallback_8; }
	inline void set_refreshCallback_8(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___refreshCallback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refreshCallback_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Module_9() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___m_Module_9)); }
	inline StandardPurchasingModule_tD1200803631F966053EF65381B041E99F0F78425 * get_m_Module_9() const { return ___m_Module_9; }
	inline StandardPurchasingModule_tD1200803631F966053EF65381B041E99F0F78425 ** get_address_of_m_Module_9() { return &___m_Module_9; }
	inline void set_m_Module_9(StandardPurchasingModule_tD1200803631F966053EF65381B041E99F0F78425 * value)
	{
		___m_Module_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Module_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_BuilderProducts_10() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___m_BuilderProducts_10)); }
	inline HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * get_m_BuilderProducts_10() const { return ___m_BuilderProducts_10; }
	inline HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 ** get_address_of_m_BuilderProducts_10() { return &___m_BuilderProducts_10; }
	inline void set_m_BuilderProducts_10(HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * value)
	{
		___m_BuilderProducts_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BuilderProducts_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_11() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___m_Logger_11)); }
	inline RuntimeObject* get_m_Logger_11() const { return ___m_Logger_11; }
	inline RuntimeObject** get_address_of_m_Logger_11() { return &___m_Logger_11; }
	inline void set_m_Logger_11(RuntimeObject* value)
	{
		___m_Logger_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventQueue_12() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___m_EventQueue_12)); }
	inline EventQueue_tE64BAEBEF84EB1563058DB346F51951C87B497A9 * get_m_EventQueue_12() const { return ___m_EventQueue_12; }
	inline EventQueue_tE64BAEBEF84EB1563058DB346F51951C87B497A9 ** get_address_of_m_EventQueue_12() { return &___m_EventQueue_12; }
	inline void set_m_EventQueue_12(EventQueue_tE64BAEBEF84EB1563058DB346F51951C87B497A9 * value)
	{
		___m_EventQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_promoPayload_13() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___promoPayload_13)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_promoPayload_13() const { return ___promoPayload_13; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_promoPayload_13() { return &___promoPayload_13; }
	inline void set_promoPayload_13(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___promoPayload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promoPayload_13), (void*)value);
	}

	inline static int32_t get_offset_of_catalogDisabled_14() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___catalogDisabled_14)); }
	inline bool get_catalogDisabled_14() const { return ___catalogDisabled_14; }
	inline bool* get_address_of_catalogDisabled_14() { return &___catalogDisabled_14; }
	inline void set_catalogDisabled_14(bool value)
	{
		___catalogDisabled_14 = value;
	}

	inline static int32_t get_offset_of_testStore_15() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___testStore_15)); }
	inline bool get_testStore_15() const { return ___testStore_15; }
	inline bool* get_address_of_testStore_15() { return &___testStore_15; }
	inline void set_testStore_15(bool value)
	{
		___testStore_15 = value;
	}

	inline static int32_t get_offset_of_iapBaseUrl_16() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___iapBaseUrl_16)); }
	inline String_t* get_iapBaseUrl_16() const { return ___iapBaseUrl_16; }
	inline String_t** get_address_of_iapBaseUrl_16() { return &___iapBaseUrl_16; }
	inline void set_iapBaseUrl_16(String_t* value)
	{
		___iapBaseUrl_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iapBaseUrl_16), (void*)value);
	}

	inline static int32_t get_offset_of_eventBaseUrl_17() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___eventBaseUrl_17)); }
	inline String_t* get_eventBaseUrl_17() const { return ___eventBaseUrl_17; }
	inline String_t** get_address_of_eventBaseUrl_17() { return &___eventBaseUrl_17; }
	inline void set_eventBaseUrl_17(String_t* value)
	{
		___eventBaseUrl_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventBaseUrl_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastPurchaseFailureDescription_18() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___lastPurchaseFailureDescription_18)); }
	inline PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * get_lastPurchaseFailureDescription_18() const { return ___lastPurchaseFailureDescription_18; }
	inline PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C ** get_address_of_lastPurchaseFailureDescription_18() { return &___lastPurchaseFailureDescription_18; }
	inline void set_lastPurchaseFailureDescription_18(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * value)
	{
		___lastPurchaseFailureDescription_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastPurchaseFailureDescription_18), (void*)value);
	}

	inline static int32_t get_offset_of__lastPurchaseErrorCode_19() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ____lastPurchaseErrorCode_19)); }
	inline int32_t get__lastPurchaseErrorCode_19() const { return ____lastPurchaseErrorCode_19; }
	inline int32_t* get_address_of__lastPurchaseErrorCode_19() { return &____lastPurchaseErrorCode_19; }
	inline void set__lastPurchaseErrorCode_19(int32_t value)
	{
		____lastPurchaseErrorCode_19 = value;
	}

	inline static int32_t get_offset_of_kStoreSpecificErrorCodeKey_20() { return static_cast<int32_t>(offsetof(JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968, ___kStoreSpecificErrorCodeKey_20)); }
	inline String_t* get_kStoreSpecificErrorCodeKey_20() const { return ___kStoreSpecificErrorCodeKey_20; }
	inline String_t** get_address_of_kStoreSpecificErrorCodeKey_20() { return &___kStoreSpecificErrorCodeKey_20; }
	inline void set_kStoreSpecificErrorCodeKey_20(String_t* value)
	{
		___kStoreSpecificErrorCodeKey_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kStoreSpecificErrorCodeKey_20), (void*)value);
	}
};


// UnityEngine.Purchasing.LocalizedProductDescription
struct  LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.TranslationLocale UnityEngine.Purchasing.LocalizedProductDescription::googleLocale
	int32_t ___googleLocale_0;
	// System.String UnityEngine.Purchasing.LocalizedProductDescription::title
	String_t* ___title_1;
	// System.String UnityEngine.Purchasing.LocalizedProductDescription::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_googleLocale_0() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086, ___googleLocale_0)); }
	inline int32_t get_googleLocale_0() const { return ___googleLocale_0; }
	inline int32_t* get_address_of_googleLocale_0() { return &___googleLocale_0; }
	inline void set_googleLocale_0(int32_t value)
	{
		___googleLocale_0 = value;
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_1), (void*)value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogItem
struct  ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_t5AAB87449A3BC8E83D69D277DD456E480723B52F * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * ___defaultDescription_3;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::applePriceTier
	int32_t ___applePriceTier_4;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::xiaomiPriceTier
	int32_t ___xiaomiPriceTier_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t3F41D6F6B9D16F07829D0DF87AF743BD0DD1842B * ___googlePrice_6;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_t4460350C0067C025B12B0DBE63539EBA3F132783 * ___descriptions_7;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_tC1407B3658061B95CD1C57A4C0176F6E92769D9F * ___payouts_8;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___storeIDs_2)); }
	inline List_1_t5AAB87449A3BC8E83D69D277DD456E480723B52F * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_t5AAB87449A3BC8E83D69D277DD456E480723B52F ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_t5AAB87449A3BC8E83D69D277DD456E480723B52F * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeIDs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___defaultDescription_3)); }
	inline LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_applePriceTier_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___applePriceTier_4)); }
	inline int32_t get_applePriceTier_4() const { return ___applePriceTier_4; }
	inline int32_t* get_address_of_applePriceTier_4() { return &___applePriceTier_4; }
	inline void set_applePriceTier_4(int32_t value)
	{
		___applePriceTier_4 = value;
	}

	inline static int32_t get_offset_of_xiaomiPriceTier_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___xiaomiPriceTier_5)); }
	inline int32_t get_xiaomiPriceTier_5() const { return ___xiaomiPriceTier_5; }
	inline int32_t* get_address_of_xiaomiPriceTier_5() { return &___xiaomiPriceTier_5; }
	inline void set_xiaomiPriceTier_5(int32_t value)
	{
		___xiaomiPriceTier_5 = value;
	}

	inline static int32_t get_offset_of_googlePrice_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___googlePrice_6)); }
	inline Price_t3F41D6F6B9D16F07829D0DF87AF743BD0DD1842B * get_googlePrice_6() const { return ___googlePrice_6; }
	inline Price_t3F41D6F6B9D16F07829D0DF87AF743BD0DD1842B ** get_address_of_googlePrice_6() { return &___googlePrice_6; }
	inline void set_googlePrice_6(Price_t3F41D6F6B9D16F07829D0DF87AF743BD0DD1842B * value)
	{
		___googlePrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_descriptions_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___descriptions_7)); }
	inline List_1_t4460350C0067C025B12B0DBE63539EBA3F132783 * get_descriptions_7() const { return ___descriptions_7; }
	inline List_1_t4460350C0067C025B12B0DBE63539EBA3F132783 ** get_address_of_descriptions_7() { return &___descriptions_7; }
	inline void set_descriptions_7(List_1_t4460350C0067C025B12B0DBE63539EBA3F132783 * value)
	{
		___descriptions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptions_7), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_8() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D, ___payouts_8)); }
	inline List_1_tC1407B3658061B95CD1C57A4C0176F6E92769D9F * get_payouts_8() const { return ___payouts_8; }
	inline List_1_tC1407B3658061B95CD1C57A4C0176F6E92769D9F ** get_address_of_payouts_8() { return &___payouts_8; }
	inline void set_payouts_8(List_1_tC1407B3658061B95CD1C57A4C0176F6E92769D9F * value)
	{
		___payouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_8), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductDefinition
struct  ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___m_Payouts_4)); }
	inline List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct  Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Boolean,System.String,System.String>
struct  Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct  Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct  Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Purchasing.UnityChannelImpl
struct  UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8  : public JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968
{
public:
	// UnityEngine.Purchasing.INativeUnityChannelStore UnityEngine.Purchasing.UnityChannelImpl::m_Bindings
	RuntimeObject* ___m_Bindings_21;
	// System.String UnityEngine.Purchasing.UnityChannelImpl::m_LastPurchaseError
	String_t* ___m_LastPurchaseError_22;
	// System.Boolean UnityEngine.Purchasing.UnityChannelImpl::<fetchReceiptPayloadOnPurchase>k__BackingField
	bool ___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_m_Bindings_21() { return static_cast<int32_t>(offsetof(UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8, ___m_Bindings_21)); }
	inline RuntimeObject* get_m_Bindings_21() const { return ___m_Bindings_21; }
	inline RuntimeObject** get_address_of_m_Bindings_21() { return &___m_Bindings_21; }
	inline void set_m_Bindings_21(RuntimeObject* value)
	{
		___m_Bindings_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPurchaseError_22() { return static_cast<int32_t>(offsetof(UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8, ___m_LastPurchaseError_22)); }
	inline String_t* get_m_LastPurchaseError_22() const { return ___m_LastPurchaseError_22; }
	inline String_t** get_address_of_m_LastPurchaseError_22() { return &___m_LastPurchaseError_22; }
	inline void set_m_LastPurchaseError_22(String_t* value)
	{
		___m_LastPurchaseError_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastPurchaseError_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8, ___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23)); }
	inline bool get_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23() const { return ___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23() { return &___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23; }
	inline void set_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23(bool value)
	{
		___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier
struct  LifecycleNotifier_t9A1E8984BE86FD3991618C0C078666E34DA0028A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroyCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDestroyCallback_4;

public:
	inline static int32_t get_offset_of_OnDestroyCallback_4() { return static_cast<int32_t>(offsetof(LifecycleNotifier_t9A1E8984BE86FD3991618C0C078666E34DA0028A, ___OnDestroyCallback_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnDestroyCallback_4() const { return ___OnDestroyCallback_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnDestroyCallback_4() { return &___OnDestroyCallback_4; }
	inline void set_OnDestroyCallback_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnDestroyCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDestroyCallback_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mA21ADF47E3138BEEB6A3E0015B2587A341D9FC36_gshared (Action_2_t6C33D80670016FFA10F03F59FB542306FA60F1F3 * __this, bool p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD42210B24B60EF3FE585AC51F7D237FB59F8C1D7_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m5C5C93EC82B1448E5890A57160FE0700FBE62DDC_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m61510A0DEB05A70217B0698145657BEC6C0401B1_gshared (Action_3_tB8290CEDF89EF089545D691C8F6D6C7A3A6003A9 * __this, bool p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m554B24ED5873B2CD7DF609F61D2D11CC35DF6AE7_gshared (Action_2_t6C33D80670016FFA10F03F59FB542306FA60F1F3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m1595AB638474543FA079C9E7F2B313722EF691EF_gshared (Action_3_tB8290CEDF89EF089545D691C8F6D6C7A3A6003A9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared (Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared (RuntimeObject* p0, Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared (RuntimeObject* p0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared (RuntimeObject* p0, const RuntimeMethod* method);

// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m32C5EB30422122239AF49EE84702EF4B1F4ABF81 (U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468 (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903 (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * __this, bool p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_mA21ADF47E3138BEEB6A3E0015B2587A341D9FC36_gshared)(__this, p0, p1, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5 (Guid_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ChannelPurchase.PurchaseService::Purchase(System.String,System.String,UnityEngine.ChannelPurchase.IPurchaseListener,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService_Purchase_mC65FF5DFE61961585B7E1666DADBA5DC047BE46A (String_t* p0, String_t* p1, RuntimeObject* p2, String_t* p3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>::.ctor()
inline void HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0 (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A *, const RuntimeMethod*))HashSet_1__ctor_mD42210B24B60EF3FE585AC51F7D237FB59F8C1D7_gshared)(__this, method);
}
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D * ProductCatalog_LoadDefaultCatalog_mEBC37A2EFA51DFCA3C0218B7EE6DFB67AAD3835B (const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allValidProducts_mA6CBE94BEF0665695A48189971B8813D9CBC1736 (ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556 (ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared)(__this, method);
}
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::GetDescription(UnityEngine.Purchasing.TranslationLocale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * ProductCatalogItem_GetDescription_m15C926BB37919AA4003FA6B3F9F6D9E876AD4B4C (ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * __this, int32_t ___locale0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizedProductDescription_get_Title_m1F402AA16FB3E24FA73E9392B9ED88DD6F7FE0B7 (LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizedProductDescription_get_Description_m8A7F897D35C34FE2488EDDE5EE9705B06C655657 (LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * __this, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Decimal_op_Implicit_m654C5710B68EAA7C5E606F28F084CE5FDA339415 (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductMetadata__ctor_m70965CC8C6DAC8C37A0C8FC08FAE2DE7C091435C (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, String_t* p0, String_t* p1, String_t* p2, String_t* p3, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  p4, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0 (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDescription__ctor_m8832B1A2CE8063B4AD5ACF5B0E9F8AC68AC35B84 (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * __this, String_t* p0, ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>::Add(!0)
inline bool HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331 (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * __this, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A *, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *, const RuntimeMethod*))HashSet_1_Add_m5C5C93EC82B1448E5890A57160FE0700FBE62DDC_gshared)(__this, p0, method);
}
// System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDescs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONSerializer_SerializeProductDescs_m1BAEEEC38C8F0BDCE5656C72B921FA8B2B380A50 (RuntimeObject* ___products0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelBindings/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m25F85C90D2DF4081EA182F3D89C115C6110B3A0E (U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RequestUniquely(System.String,System.Action`3<System.Boolean,System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RequestUniquely_m564BFB86E9E35132B4E97DDABAC89E3A1091CB68 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, String_t* ___transactionId0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___callbackDictionary2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___requestAction3, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.String,System.String>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672 (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * __this, bool p0, String_t* p1, String_t* p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *, bool, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_m61510A0DEB05A70217B0698145657BEC6C0401B1_gshared)(__this, p0, p1, p2, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>::.ctor()
inline void List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>::Add(!0)
inline void List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0 (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * __this, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::Add(!0,!1)
inline void Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43 (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, String_t* p0, List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, String_t*, List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::get_Item(!0)
inline List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74 (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::.ctor()
inline void Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39 (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::ValidateReceipt(System.String,UnityEngine.ChannelPurchase.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService_ValidateReceipt_m98B3D125BE4906AB67D40336B9F20CA5B79CED82 (String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore__ctor_m8D697E4741923796DDE45A914DB946442BA03234 (JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore_SetNativeStore_mB54A83C68CDCDABC143C43FE7B4EE105E576064C (JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968 * __this, RuntimeObject* ___native0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8 (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m554B24ED5873B2CD7DF609F61D2D11CC35DF6AE7_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m1167092AFB7FA692A88DA0382D33425455E20818 (U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * __this, const RuntimeMethod* method);
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MiniJson_JsonDecode_m0A6D03F0F80315320598F10C4E5EAC2B39E1395C (String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1__ctor_m7859806D1439CF67D47FEE7B03515DAF2EF6763B (U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * MiniJsonExtensions_HashtableFromJson_mB96FF9D0D724E4D36A6CD94C1E3EA9CA28FAF541 (String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_mCE8B846CDE6889422F81B756B60DAF49EFEF45AD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.UnityChannelImpl::get_fetchReceiptPayloadOnPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityChannelImpl_get_fetchReceiptPayloadOnPurchase_m8B1D389FFC0D640FD9D20EE3866BC21263982B21 (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m1595AB638474543FA079C9E7F2B313722EF691EF_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_ValidateReceipt_m1D0C196EAD264E2CE220A037FC27465992198B45 (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, String_t* ___transactionIdentifier0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_mA6EABFBF2954B71E27DDF7372D24A790ABF14120 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3 (Type_t * p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m5EA8C5E47A3BF0223FD368503B36206256937A61 (String_t* p0, bool* p1, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2 (Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseFailureDescription__ctor_mD1B896C37FDB5EBB659FED6024169FFB1CAE0CF1 (PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * __this, String_t* p0, int32_t p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelImpl::extractDeveloperPayload(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_extractDeveloperPayload_m4E85D850DE7CC010DEC60349F03B7AD30A57798B (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___signData1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.AbstractStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractStore__ctor_mD841D92381EA66878B36E6CC24970523A01068B3 (AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A (Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28 (RuntimeObject* p0, Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared)(p0, p1, method);
}
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5 (Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E (RuntimeObject* p0, Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(p0, p1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared)(p0, method);
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m83E77AC733A7DC8AE72D83409BC46A207354C1EA (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, int32_t ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FD2E56DE220FB25F758D744E3914E81E6784995 (U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07 (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mD2BEAABCBAC5D1AF62D0F8E01B2DCD2B725B2C2C (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, uint8_t p4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_mAAEF8B336277574079D4490C9100998BF237AF8F (WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 * __this, String_t* p0, String_t* p1, String_t* p2, String_t* p3, String_t* p4, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  p5, String_t* p6, String_t* p7, bool p8, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7EB96867EC9F829639B542F54593887DAC013E0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m7EB96867EC9F829639B542F54593887DAC013E0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 * L_0 = (U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 *)il2cpp_codegen_object_new(U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m32C5EB30422122239AF49EE84702EF4B1F4ABF81(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m32C5EB30422122239AF49EE84702EF4B1F4ABF81 (U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore_<>c::<CreateRetrieveProductsQuestion>b__18_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_mA81FFE1A86467C6075A71FD39E437A17E0EBB058 (U3CU3Ec_tCCDE66F0FFE94E52DF9B954AB208E22E1E3CCDC2 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___pid0, const RuntimeMethod* method)
{
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___pid0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468(L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UIFakeStore_DialogRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogRequest__ctor_m9F500AA80A607768C0FC70C224A7B2680D108C82 (DialogRequest_tAAC5A0BE50567845D22E2EBD1BD8767CD6F4D252 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier_OnDestroy_mC9E955B7997DEBFCB87BE93D3BEC14A67043DAA4 (LifecycleNotifier_t9A1E8984BE86FD3991618C0C078666E34DA0028A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnDestroyCallback_4();
		V_0 = (bool)((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = __this->get_OnDestroyCallback_4();
		NullCheck(L_2);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier__ctor_m103E8A01BFD63497AF2044E70E09E30149C9A23B (LifecycleNotifier_t9A1E8984BE86FD3991618C0C078666E34DA0028A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UnifiedReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedReceipt__ctor_m39ACDCD5A5BDF2734E1389A21B7730126ACEB94F (UnifiedReceipt_tAA84A8E13C93D91903A1E777299EB3BE1F6C87C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UnityChannelBindings::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_Purchase_mE61111746D826CF58973463B6883DD8BD15B380D (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, String_t* ___productId0, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___callback1, String_t* ___developerPayload2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_Purchase_mE61111746D826CF58973463B6883DD8BD15B380D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Guid_t  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_0 = ___callback1;
		V_0 = (bool)((((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0058;
	}

IL_000c:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_2 = __this->get_m_PurchaseCallback_0();
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_4 = ___callback1;
		NullCheck(L_4);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_4, (bool)0, _stringLiteral7F8C59D560D31CCE9A5B206D8EA5F6C38267C1D0, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		goto IL_0058;
	}

IL_0029:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_5 = ___callback1;
		__this->set_m_PurchaseCallback_0(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_6 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_2), /*hidden argument*/NULL);
		__this->set_m_PurchaseGuid_1(L_7);
		String_t* L_8 = ___productId0;
		String_t* L_9 = __this->get_m_PurchaseGuid_1();
		String_t* L_10 = ___developerPayload2;
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t7F12D5C55BBD81DB4420C2853172B9FED0FF3830_il2cpp_TypeInfo_var);
		PurchaseService_Purchase_mC65FF5DFE61961585B7E1666DADBA5DC047BE46A(L_8, L_9, __this, L_10, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RetrieveProducts_mAAAB3784C3D84F8ED0C12C2FD55C7154566FBBF2 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___products0, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_RetrieveProducts_mAAAB3784C3D84F8ED0C12C2FD55C7154566FBBF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * V_0 = NULL;
	ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D * V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * V_10 = NULL;
	LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * V_11 = NULL;
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * V_12 = NULL;
	ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * G_B7_0 = NULL;
	LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * G_B6_0 = NULL;
	{
		HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_0 = (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A *)il2cpp_codegen_object_new(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0(L_0, /*hidden argument*/HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0_RuntimeMethod_var);
		V_0 = L_0;
		ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D * L_1 = ProductCatalog_LoadDefaultCatalog_mEBC37A2EFA51DFCA3C0218B7EE6DFB67AAD3835B(/*hidden argument*/NULL);
		V_1 = L_1;
		ProductCatalog_t323FE51F46706146D49B09704199420D7023D20D * L_2 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = ProductCatalog_get_allValidProducts_mA6CBE94BEF0665695A48189971B8813D9CBC1736(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_tDFCC87B7191D2546E8BC8437B4EE7FDB8DCF1E05_il2cpp_TypeInfo_var, L_3);
		V_3 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f4;
		}

IL_001f:
		{
			RuntimeObject* L_5 = V_3;
			NullCheck(L_5);
			ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * L_6 = InterfaceFuncInvoker0< ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_tAECC6295317C3C4CBCDAE193729EB217FFA6EB1C_il2cpp_TypeInfo_var, L_5);
			V_4 = L_6;
			ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_7 = ___products0;
			NullCheck(L_7);
			RuntimeObject* L_8 = ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556(L_7, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556_RuntimeMethod_var);
			V_5 = L_8;
		}

IL_0031:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00d8;
			}

IL_0036:
			{
				RuntimeObject* L_9 = V_5;
				NullCheck(L_9);
				ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_10 = InterfaceFuncInvoker0< ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductDefinition>::get_Current() */, IEnumerator_1_t03AC33D97EBA418F757A9065CE29CE44AA6487BB_il2cpp_TypeInfo_var, L_9);
				V_6 = L_10;
				ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * L_11 = V_4;
				NullCheck(L_11);
				String_t* L_12 = L_11->get_id_0();
				ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_13 = V_6;
				NullCheck(L_13);
				String_t* L_14 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468(L_13, /*hidden argument*/NULL);
				bool L_15 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_12, L_14, /*hidden argument*/NULL);
				V_7 = L_15;
				bool L_16 = V_7;
				if (!L_16)
				{
					goto IL_00d7;
				}
			}

IL_0059:
			{
				IL2CPP_RUNTIME_CLASS_INIT(XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_il2cpp_TypeInfo_var);
				Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = ((XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_StaticFields*)il2cpp_codegen_static_fields_for(XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_il2cpp_TypeInfo_var))->get_XiaomiPriceTierPrices_0();
				ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * L_18 = V_4;
				NullCheck(L_18);
				int32_t L_19 = L_18->get_xiaomiPriceTier_5();
				NullCheck(L_17);
				int32_t L_20 = L_19;
				int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
				V_8 = L_21;
				int32_t L_22 = V_8;
				int32_t L_23 = L_22;
				RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
				String_t* L_25 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralCBBD8674892389F6016A1136956BE7787E630B76, L_24, /*hidden argument*/NULL);
				V_9 = L_25;
				ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * L_26 = V_4;
				NullCheck(L_26);
				LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * L_27 = L_26->get_defaultDescription_3();
				V_10 = L_27;
				ProductCatalogItem_t7151B9F417BC2538D6AAB88F36436534A8BD5F0D * L_28 = V_4;
				NullCheck(L_28);
				LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * L_29 = ProductCatalogItem_GetDescription_m15C926BB37919AA4003FA6B3F9F6D9E876AD4B4C(L_28, ((int32_t)19), /*hidden argument*/NULL);
				V_11 = L_29;
				LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * L_30 = V_11;
				LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * L_31 = L_30;
				G_B6_0 = L_31;
				if (L_31)
				{
					G_B7_0 = L_31;
					goto IL_0098;
				}
			}

IL_0095:
			{
				LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * L_32 = V_10;
				G_B7_0 = L_32;
			}

IL_0098:
			{
				V_10 = G_B7_0;
				String_t* L_33 = V_9;
				LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * L_34 = V_10;
				NullCheck(L_34);
				String_t* L_35 = LocalizedProductDescription_get_Title_m1F402AA16FB3E24FA73E9392B9ED88DD6F7FE0B7(L_34, /*hidden argument*/NULL);
				LocalizedProductDescription_tF84E1F3E38950FC583535A81BA3C21831CF2E086 * L_36 = V_10;
				NullCheck(L_36);
				String_t* L_37 = LocalizedProductDescription_get_Description_m8A7F897D35C34FE2488EDDE5EE9705B06C655657(L_36, /*hidden argument*/NULL);
				int32_t L_38 = V_8;
				IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
				Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_39 = Decimal_op_Implicit_m654C5710B68EAA7C5E606F28F084CE5FDA339415(L_38, /*hidden argument*/NULL);
				ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_40 = (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 *)il2cpp_codegen_object_new(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48_il2cpp_TypeInfo_var);
				ProductMetadata__ctor_m70965CC8C6DAC8C37A0C8FC08FAE2DE7C091435C(L_40, L_33, L_35, L_37, _stringLiteral44E949CB95D4BBD927D61FBE6D06D28EB4960DD6, L_39, /*hidden argument*/NULL);
				V_12 = L_40;
				ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_41 = V_6;
				NullCheck(L_41);
				String_t* L_42 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_41, /*hidden argument*/NULL);
				ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_43 = V_12;
				ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_44 = (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *)il2cpp_codegen_object_new(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var);
				ProductDescription__ctor_m8832B1A2CE8063B4AD5ACF5B0E9F8AC68AC35B84(L_44, L_42, L_43, /*hidden argument*/NULL);
				V_13 = L_44;
				HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_45 = V_0;
				ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_46 = V_13;
				NullCheck(L_45);
				HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331(L_45, L_46, /*hidden argument*/HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331_RuntimeMethod_var);
			}

IL_00d7:
			{
			}

IL_00d8:
			{
				RuntimeObject* L_47 = V_5;
				NullCheck(L_47);
				bool L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_0036;
				}
			}

IL_00e4:
			{
				IL2CPP_LEAVE(0xF3, FINALLY_00e6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e6;
		}

FINALLY_00e6:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_49 = V_5;
				if (!L_49)
				{
					goto IL_00f2;
				}
			}

IL_00ea:
			{
				RuntimeObject* L_50 = V_5;
				NullCheck(L_50);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_50);
			}

IL_00f2:
			{
				IL2CPP_RESET_LEAVE(0xF3);
				IL2CPP_END_FINALLY(230)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(230)
		{
			IL2CPP_JUMP_TBL(0xF3, IL_00f3)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00f3:
		{
		}

IL_00f4:
		{
			RuntimeObject* L_51 = V_3;
			NullCheck(L_51);
			bool L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_001f;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x10C, FINALLY_0101);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0101;
	}

FINALLY_0101:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_53 = V_3;
			if (!L_53)
			{
				goto IL_010b;
			}
		}

IL_0104:
		{
			RuntimeObject* L_54 = V_3;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_54);
		}

IL_010b:
		{
			IL2CPP_RESET_LEAVE(0x10C);
			IL2CPP_END_FINALLY(257)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(257)
	{
		IL2CPP_JUMP_TBL(0x10C, IL_010c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010c:
	{
		HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_55 = V_0;
		String_t* L_56 = JSONSerializer_SerializeProductDescs_m1BAEEEC38C8F0BDCE5656C72B921FA8B2B380A50(L_55, /*hidden argument*/NULL);
		V_2 = L_56;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_57 = ___callback1;
		String_t* L_58 = V_2;
		NullCheck(L_57);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_57, (bool)1, L_58, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_ValidateReceipt_m93576269B71A336013DE8CBFF1116E817CD7A124 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, String_t* ___transactionId0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_ValidateReceipt_m93576269B71A336013DE8CBFF1116E817CD7A124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * L_0 = (U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_m25F85C90D2DF4081EA182F3D89C115C6110B3A0E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * L_2 = V_0;
		String_t* L_3 = ___transactionId0;
		NullCheck(L_2);
		L_2->set_transactionId_0(L_3);
		U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_transactionId_0();
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_6 = ___callback1;
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_7 = __this->get_m_ValidateCallbacks_2();
		U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * L_8 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mD52EFA24063C9908B580BF2F0C69D974C6E18C26_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityChannelBindings_RequestUniquely_m564BFB86E9E35132B4E97DDABAC89E3A1091CB68(__this, L_5, L_6, L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RequestUniquely(System.String,System.Action`3<System.Boolean,System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RequestUniquely_m564BFB86E9E35132B4E97DDABAC89E3A1091CB68 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, String_t* ___transactionId0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___callbackDictionary2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___requestAction3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_RequestUniquely_m564BFB86E9E35132B4E97DDABAC89E3A1091CB68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_0 = ___callback1;
		V_0 = (bool)((((RuntimeObject*)(Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0066;
	}

IL_000c:
	{
		String_t* L_2 = ___transactionId0;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_5 = ___callback1;
		NullCheck(L_5);
		Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672(L_5, (bool)0, _stringLiteralDE3FFEF980E651436BDA1810C67530580D1328C8, (String_t*)NULL, /*hidden argument*/Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672_RuntimeMethod_var);
		goto IL_0066;
	}

IL_0027:
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_6 = ___callbackDictionary2;
		String_t* L_7 = ___transactionId0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F(L_6, L_7, /*hidden argument*/Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_10 = ___callbackDictionary2;
		String_t* L_11 = ___transactionId0;
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_12 = (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *)il2cpp_codegen_object_new(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_il2cpp_TypeInfo_var);
		List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC(L_12, /*hidden argument*/List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC_RuntimeMethod_var);
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_13 = L_12;
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_14 = ___callback1;
		NullCheck(L_13);
		List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0(L_13, L_14, /*hidden argument*/List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0_RuntimeMethod_var);
		NullCheck(L_10);
		Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43(L_10, L_11, L_13, /*hidden argument*/Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43_RuntimeMethod_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_15 = ___requestAction3;
		NullCheck(L_15);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_15, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0056:
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_16 = ___callbackDictionary2;
		String_t* L_17 = ___transactionId0;
		NullCheck(L_16);
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_18 = Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74_RuntimeMethod_var);
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_19 = ___callback1;
		NullCheck(L_18);
		List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0(L_18, L_19, /*hidden argument*/List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RetrieveProducts_m669B69F8E327A9AC6091A0066D4D63A8FDA90409 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_RetrieveProducts_m669B69F8E327A9AC6091A0066D4D63A8FDA90409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnityChannelBindings_RetrieveProducts_m669B69F8E327A9AC6091A0066D4D63A8FDA90409_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::Purchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_Purchase_mAE6F3B3A764DE795DB39CC6C84938CC163451520 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_Purchase_mAE6F3B3A764DE795DB39CC6C84938CC163451520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnityChannelBindings_Purchase_mAE6F3B3A764DE795DB39CC6C84938CC163451520_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::FinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_FinishTransaction_m3D343D00D0BA7F91C5FA99CD8BD09CCAE6715509 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, String_t* ___productJSON0, String_t* ___transactionID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_FinishTransaction_m3D343D00D0BA7F91C5FA99CD8BD09CCAE6715509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnityChannelBindings_FinishTransaction_m3D343D00D0BA7F91C5FA99CD8BD09CCAE6715509_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings__ctor_mAECD6998E374677BB6B7F77EA3F6A149E147DEA6 (UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings__ctor_mAECD6998E374677BB6B7F77EA3F6A149E147DEA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_0 = (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *)il2cpp_codegen_object_new(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39(L_0, /*hidden argument*/Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39_RuntimeMethod_var);
		__this->set_m_ValidateCallbacks_2(L_0);
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_1 = (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *)il2cpp_codegen_object_new(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39(L_1, /*hidden argument*/Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39_RuntimeMethod_var);
		__this->set_m_PurchaseConfirmCallbacks_3(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m25F85C90D2DF4081EA182F3D89C115C6110B3A0E (U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::<ValidateReceipt>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mD52EFA24063C9908B580BF2F0C69D974C6E18C26 (U3CU3Ec__DisplayClass16_0_tDEDA4E4B9BB74E8D2721FC85C142606E3FDFA49B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mD52EFA24063C9908B580BF2F0C69D974C6E18C26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_transactionId_0();
		UnityChannelBindings_t1EE1546CB4B4B44F9A7DAE4D3E03A29E46B4E0DD * L_1 = __this->get_U3CU3E4__this_1();
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t7F12D5C55BBD81DB4420C2853172B9FED0FF3830_il2cpp_TypeInfo_var);
		PurchaseService_ValidateReceipt_m98B3D125BE4906AB67D40336B9F20CA5B79CED82(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UnityChannelImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl__ctor_m56164F16BA7C281EC391D7D5BE71461753F33FEC (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl__ctor_m56164F16BA7C281EC391D7D5BE71461753F33FEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_LastPurchaseError_22(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		JSONStore__ctor_m8D697E4741923796DDE45A914DB946442BA03234(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::SetNativeStore(UnityEngine.Purchasing.INativeUnityChannelStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_SetNativeStore_m952CE68555042A583DC4939ADDA27D8CB981C761 (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, RuntimeObject* ___unityChannelBindings0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___unityChannelBindings0;
		JSONStore_SetNativeStore_mB54A83C68CDCDABC143C43FE7B4EE105E576064C(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___unityChannelBindings0;
		__this->set_m_Bindings_21(L_1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_RetrieveProducts_mFB86735FC6CF5F60922933AB56A995B5F82C4EAE (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_RetrieveProducts_mFB86735FC6CF5F60922933AB56A995B5F82C4EAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_Bindings_21();
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_1 = ___products0;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_2 = (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)il2cpp_codegen_object_new(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8(L_2, __this, (intptr_t)((intptr_t)UnityChannelImpl_U3CRetrieveProductsU3Eb__6_0_m36974464FA744A88E55A5FFE5BE095DAB769453A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D *, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * >::Invoke(1 /* System.Void UnityEngine.Purchasing.INativeUnityChannelStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUnityChannelStore_t83C469B20B7E04E402F32CF77DA9F2182B1885AF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_Purchase_m619979D8626FD9DD7A4BC390626AE705772F3DAA (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_Purchase_m619979D8626FD9DD7A4BC390626AE705772F3DAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_0 = (U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m1167092AFB7FA692A88DA0382D33425455E20818(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_2 = V_0;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = ___product0;
		NullCheck(L_2);
		L_2->set_product_0(L_3);
		RuntimeObject* L_4 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_5 = V_0;
		NullCheck(L_5);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_6 = L_5->get_product_0();
		NullCheck(L_6);
		String_t* L_7 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_8 = V_0;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_9 = (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)il2cpp_codegen_object_new(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_m173722A9406651C1947EBB8BB4C18D078A2DFA7F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var);
		String_t* L_10 = ___developerPayload1;
		NullCheck(L_4);
		InterfaceActionInvoker3< String_t*, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *, String_t* >::Invoke(0 /* System.Void UnityEngine.Purchasing.INativeUnityChannelStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String) */, INativeUnityChannelStore_t83C469B20B7E04E402F32CF77DA9F2182B1885AF_il2cpp_TypeInfo_var, L_4, L_7, L_9, L_10);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::extractDeveloperPayload(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_extractDeveloperPayload_m4E85D850DE7CC010DEC60349F03B7AD30A57798B (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___signData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_extractDeveloperPayload_m4E85D850DE7CC010DEC60349F03B7AD30A57798B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		String_t* L_0 = ___signData1;
		RuntimeObject * L_1 = MiniJson_JsonDecode_m0A6D03F0F80315320598F10C4E5EAC2B39E1395C(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)CastclassClass((RuntimeObject*)L_1, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_2, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_007e;
	}

IL_0021:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_5, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var));
		String_t* L_7 = V_1;
		bool L_8 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_007e;
	}

IL_0040:
	{
		String_t* L_10 = V_1;
		RuntimeObject * L_11 = MiniJson_JsonDecode_m0A6D03F0F80315320598F10C4E5EAC2B39E1395C(L_10, /*hidden argument*/NULL);
		V_2 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)CastclassClass((RuntimeObject*)L_11, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_12, _stringLiteralB41F2D713DC92217B42B25AA193107BD2F8863D6, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_007e;
	}

IL_0062:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_15 = ___dic0;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_16 = V_2;
		NullCheck(L_16);
		RuntimeObject * L_17 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_16, _stringLiteralB41F2D713DC92217B42B25AA193107BD2F8863D6, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		NullCheck(L_15);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_15, _stringLiteral3B64CAA4AC5332E2069F86F967064FE587AF7820, ((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_007e:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_FinishTransaction_m2500A1D3E6DEC02CD589ABD64123642C28E609F5 (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UnityChannelImpl::get_fetchReceiptPayloadOnPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityChannelImpl_get_fetchReceiptPayloadOnPurchase_m8B1D389FFC0D640FD9D20EE3866BC21263982B21 (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::set_fetchReceiptPayloadOnPurchase(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_set_fetchReceiptPayloadOnPurchase_m957388F4E7092BFFA213EE959CBA375CC7F109AF (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_ValidateReceipt_m1D0C196EAD264E2CE220A037FC27465992198B45 (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, String_t* ___transactionIdentifier0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_ValidateReceipt_m1D0C196EAD264E2CE220A037FC27465992198B45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_Bindings_21();
		String_t* L_1 = ___transactionIdentifier0;
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_2 = ___callback1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUnityChannelStore::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>) */, INativeUnityChannelStore_t83C469B20B7E04E402F32CF77DA9F2182B1885AF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.String UnityEngine.Purchasing.UnityChannelImpl::GetLastPurchaseError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityChannelImpl_GetLastPurchaseError_mDA54BE79982D8E02FF7422004BA6C37B1869F412 (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_LastPurchaseError_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::<RetrieveProducts>b__6_0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_U3CRetrieveProductsU3Eb__6_0_m36974464FA744A88E55A5FFE5BE095DAB769453A (UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * __this, bool ___result0, String_t* ___json1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json1;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, __this, L_0);
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
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m1167092AFB7FA692A88DA0382D33425455E20818 (U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::<Purchase>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_m173722A9406651C1947EBB8BB4C18D078A2DFA7F (U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * __this, bool ___purchaseSuccess0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_m173722A9406651C1947EBB8BB4C18D078A2DFA7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_10 = NULL;
	String_t* V_11 = NULL;
	bool V_12 = false;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_13 = NULL;
	String_t* V_14 = NULL;
	PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	{
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		L_0->set_m_LastPurchaseError_22(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		bool L_1 = ___purchaseSuccess0;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_3 = (U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_1__ctor_m7859806D1439CF67D47FEE7B03515DAF2EF6763B(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_CSU24U3CU3E8__locals1_2(__this);
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_5 = V_1;
		String_t* L_6 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_7 = MiniJsonExtensions_HashtableFromJson_mB96FF9D0D724E4D36A6CD94C1E3EA9CA28FAF541(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_dic_0(L_7);
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_8 = V_1;
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_9 = V_1;
		NullCheck(L_9);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_10 = L_9->get_dic_0();
		String_t* L_11 = MiniJsonExtensions_GetString_mCE8B846CDE6889422F81B756B60DAF49EFEF45AD(L_10, _stringLiteralD8556CF7451C22FF4E069B286916B24EBBF72F1F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_transactionId_1(L_11);
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_12 = V_1;
		NullCheck(L_12);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_13 = L_12->get_dic_0();
		String_t* L_14 = MiniJsonExtensions_GetString_mCE8B846CDE6889422F81B756B60DAF49EFEF45AD(L_13, _stringLiteralCDBA822F8324B05B69E1AA552687ED7C8B37C97F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_2 = L_14;
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_transactionId_1();
		bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_16, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_19 = V_1;
		NullCheck(L_19);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_20 = L_19->get_dic_0();
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_transactionId_1();
		NullCheck(L_20);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_20, _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55, L_22, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_008f:
	{
		String_t* L_23 = V_2;
		bool L_24 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_23, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00b2;
		}
	}
	{
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_27 = L_26->get_dic_0();
		String_t* L_28 = V_2;
		NullCheck(L_27);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_27, _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA, L_28, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_00b2:
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_29 = __this->get_product_0();
		NullCheck(L_29);
		String_t* L_30 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_30);
		bool L_32 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_30, L_31, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_00f1;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = L_34;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_36 = __this->get_product_0();
		NullCheck(L_36);
		String_t* L_37 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_35;
		String_t* L_39 = V_2;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_39);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral97EDC12A699B77CD7DCA0C6ECC5E0AB625126F74, L_38, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_40 = __this->get_U3CU3E4__this_1();
		NullCheck(L_40);
		bool L_41 = UnityChannelImpl_get_fetchReceiptPayloadOnPurchase_m8B1D389FFC0D640FD9D20EE3866BC21263982B21(L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_0124;
		}
	}
	{
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_43 = __this->get_U3CU3E4__this_1();
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45 = L_44->get_transactionId_1();
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_46 = V_1;
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_47 = (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *)il2cpp_codegen_object_new(Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF_il2cpp_TypeInfo_var);
		Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A(L_47, L_46, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_mEE5ED585085BA408C4E687D3C6EE2FACB2A12429_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A_RuntimeMethod_var);
		NullCheck(L_43);
		UnityChannelImpl_ValidateReceipt_m1D0C196EAD264E2CE220A037FC27465992198B45(L_43, L_45, L_47, /*hidden argument*/NULL);
		goto IL_0157;
	}

IL_0124:
	{
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_48 = V_1;
		NullCheck(L_48);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_49 = L_48->get_dic_0();
		String_t* L_50 = MiniJsonExtensions_toJson_mA6EABFBF2954B71E27DDF7372D24A790ABF14120(L_49, /*hidden argument*/NULL);
		V_7 = L_50;
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_51 = __this->get_U3CU3E4__this_1();
		NullCheck(L_51);
		RuntimeObject* L_52 = ((JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968 *)L_51)->get_unity_1();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_53 = __this->get_product_0();
		NullCheck(L_53);
		String_t* L_54 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_53, /*hidden argument*/NULL);
		String_t* L_55 = V_7;
		U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = L_56->get_transactionId_1();
		NullCheck(L_52);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_52, L_54, L_55, L_57);
	}

IL_0157:
	{
		goto IL_0277;
	}

IL_015d:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_58 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_60 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_59, _stringLiteralBC7819B34FF87570745FBE461E36A16F80E562CE, /*hidden argument*/NULL);
		V_8 = ((*(int32_t*)((int32_t*)UnBox(L_60, PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var))));
		RuntimeObject * L_61 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, (&V_8));
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_61);
		V_8 = *(int32_t*)UnBox(L_61);
		V_9 = L_62;
		String_t* L_63 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_64 = MiniJsonExtensions_HashtableFromJson_mB96FF9D0D724E4D36A6CD94C1E3EA9CA28FAF541(L_63, /*hidden argument*/NULL);
		V_10 = L_64;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_65 = V_10;
		String_t* L_66 = MiniJsonExtensions_GetString_mCE8B846CDE6889422F81B756B60DAF49EFEF45AD(L_65, _stringLiteralE005CDF78FC36965B839E7115A56CAE84B2994B3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_11 = L_66;
		String_t* L_67 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var);
		Boolean_TryParse_m5EA8C5E47A3BF0223FD368503B36206256937A61(L_67, (bool*)(&V_12), /*hidden argument*/NULL);
		bool L_68 = V_12;
		V_16 = L_68;
		bool L_69 = V_16;
		if (!L_69)
		{
			goto IL_01f5;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_70 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_71 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_72 = Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2(L_71, _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394, /*hidden argument*/NULL);
		V_17 = L_72;
		bool L_73 = V_17;
		if (!L_73)
		{
			goto IL_01ed;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_74 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_75 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_76 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_75, _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394, /*hidden argument*/NULL);
		V_8 = ((*(int32_t*)((int32_t*)UnBox(L_76, PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var))));
	}

IL_01ed:
	{
		V_9 = _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394;
	}

IL_01f5:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_77 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_77, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_13 = L_77;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_78 = V_13;
		String_t* L_79 = V_9;
		NullCheck(L_78);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_78, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_79, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_80 = V_10;
		NullCheck(L_80);
		bool L_81 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_80, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_18 = L_81;
		bool L_82 = V_18;
		if (!L_82)
		{
			goto IL_0238;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_83 = V_13;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_84 = V_10;
		NullCheck(L_84);
		RuntimeObject * L_85 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_84, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		NullCheck(L_83);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_83, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, L_85, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0238:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_86 = V_13;
		String_t* L_87 = MiniJsonExtensions_toJson_mA6EABFBF2954B71E27DDF7372D24A790ABF14120(L_86, /*hidden argument*/NULL);
		V_14 = L_87;
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_88 = __this->get_U3CU3E4__this_1();
		String_t* L_89 = V_14;
		NullCheck(L_88);
		L_88->set_m_LastPurchaseError_22(L_89);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_90 = __this->get_product_0();
		NullCheck(L_90);
		String_t* L_91 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_90, /*hidden argument*/NULL);
		int32_t L_92 = V_8;
		String_t* L_93 = ___message1;
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_94 = (PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C *)il2cpp_codegen_object_new(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_mD1B896C37FDB5EBB659FED6024169FFB1CAE0CF1(L_94, L_91, L_92, L_93, /*hidden argument*/NULL);
		V_15 = L_94;
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_95 = __this->get_U3CU3E4__this_1();
		NullCheck(L_95);
		RuntimeObject* L_96 = ((JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968 *)L_95)->get_unity_1();
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_97 = V_15;
		NullCheck(L_96);
		InterfaceActionInvoker1< PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_96, L_97);
	}

IL_0277:
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
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1__ctor_m7859806D1439CF67D47FEE7B03515DAF2EF6763B (U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::<Purchase>b__1(System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_mEE5ED585085BA408C4E687D3C6EE2FACB2A12429 (U3CU3Ec__DisplayClass7_1_t48544AFE2996D845A9187F4D965D84A1DCE8FB33 * __this, bool ___success0, String_t* ___signData1, String_t* ___signature2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_mEE5ED585085BA408C4E687D3C6EE2FACB2A12429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B5_2 = NULL;
	{
		bool L_0 = ___success0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = __this->get_dic_0();
		String_t* L_3 = ___signData1;
		NullCheck(L_2);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_2, _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662, L_3, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = __this->get_dic_0();
		String_t* L_5 = ___signature2;
		NullCheck(L_4);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_4, _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A, L_5, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_6 = __this->get_CSU24U3CU3E8__locals1_2();
		NullCheck(L_6);
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_7 = L_6->get_U3CU3E4__this_1();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_8 = __this->get_dic_0();
		String_t* L_9 = ___signData1;
		NullCheck(L_7);
		UnityChannelImpl_extractDeveloperPayload_m4E85D850DE7CC010DEC60349F03B7AD30A57798B(L_7, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0094;
	}

IL_0046:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_10 = __this->get_dic_0();
		String_t* L_11 = ___signData1;
		String_t* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662;
		G_B3_2 = L_10;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662;
			G_B4_2 = L_10;
			goto IL_005c;
		}
	}
	{
		G_B4_0 = _stringLiteralEE1FDF0EDBB24CBF96DFA0339B642B2085C163F6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_005c:
	{
		NullCheck(G_B4_2);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_13 = __this->get_dic_0();
		String_t* L_14 = ___signature2;
		String_t* L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
		G_B5_2 = L_13;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
			G_B6_2 = L_13;
			goto IL_0077;
		}
	}
	{
		G_B6_0 = _stringLiteralEE1FDF0EDBB24CBF96DFA0339B642B2085C163F6;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_16 = __this->get_dic_0();
		NullCheck(L_16);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_16, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, _stringLiteral97CF83B8420705673DD9E20FFB51124368B3F7BC, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0094:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_17 = __this->get_dic_0();
		String_t* L_18 = MiniJsonExtensions_toJson_mA6EABFBF2954B71E27DDF7372D24A790ABF14120(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_19 = __this->get_CSU24U3CU3E8__locals1_2();
		NullCheck(L_19);
		UnityChannelImpl_tF01A2E6E11C7B153AB9CC9CD24EBDF14D450E0F8 * L_20 = L_19->get_U3CU3E4__this_1();
		NullCheck(L_20);
		RuntimeObject* L_21 = ((JSONStore_tA91CD667C8232ECFF4073E86E05FCB372EC68968 *)L_20)->get_unity_1();
		U3CU3Ec__DisplayClass7_0_t7FDA3B419E143F26EDB658FE8E5A51AB8155CC6D * L_22 = __this->get_CSU24U3CU3E8__locals1_2();
		NullCheck(L_22);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_23 = L_22->get_product_0();
		NullCheck(L_23);
		String_t* L_24 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_23, /*hidden argument*/NULL);
		String_t* L_25 = V_0;
		String_t* L_26 = __this->get_transactionId_1();
		NullCheck(L_21);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_21, L_24, L_25, L_26);
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
// System.Void UnityEngine.Purchasing.UnityChannelPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelPurchaseReceipt__ctor_m343439EDE3A1441C9A8AA7B42B2D873E83388259 (UnityChannelPurchaseReceipt_t06BE912023C9642C9EC0B3052125CA554D5E8F57 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore__ctor_m91A908B5C72AC36236670F000DB04EDC5ACA013B (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, RuntimeObject* ___win80, RuntimeObject* ___util1, RuntimeObject* ___logger2, const RuntimeMethod* method)
{
	{
		__this->set_m_CanReceivePurchases_4((bool)0);
		AbstractStore__ctor_mD841D92381EA66878B36E6CC24970523A01068B3(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___win80;
		__this->set_win8_0(L_0);
		RuntimeObject* L_1 = ___util1;
		__this->set_util_2(L_1);
		RuntimeObject* L_2 = ___logger2;
		__this->set_logger_3(L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_SetWindowsIAP_m4CA0519A95E3926238FDA659ECB711D00F749629 (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, RuntimeObject* ___iap0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___iap0;
		__this->set_win8_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Initialize_m3491DFBA8756327A1DFC5A0908E266C5C34127A6 (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, RuntimeObject* ___biller0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___biller0;
		__this->set_callback_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RetrieveProducts_m19E9EFFE08B41997C6A2F0AF0AA2D16B6F99315D (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___productDefs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RetrieveProducts_m19E9EFFE08B41997C6A2F0AF0AA2D16B6F99315D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * G_B2_0 = NULL;
	ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * G_B2_1 = NULL;
	Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * G_B1_0 = NULL;
	ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * G_B1_1 = NULL;
	Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_0 = ___productDefs0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var);
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_1 = ((U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var))->get_U3CU3E9__8_0_1();
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * L_3 = ((U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_4 = (Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 *)il2cpp_codegen_object_new(Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7_il2cpp_TypeInfo_var);
		Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m3EA9A40A7E78188DAE114CD04AA8B8A7BB7A8AC2_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A_RuntimeMethod_var);
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_5 = L_4;
		((U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var))->set_U3CU3E9__8_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		RuntimeObject* L_6 = Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var);
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_7 = ((U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var))->get_U3CU3E9__8_1_2();
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * L_9 = ((U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_10 = (Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E *)il2cpp_codegen_object_new(Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E_il2cpp_TypeInfo_var);
		Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m33DC1A34804F606E3D828BF0EC86F2407D99EBC5_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5_RuntimeMethod_var);
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_11 = L_10;
		((U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var))->set_U3CU3E9__8_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		RuntimeObject* L_12 = Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E_RuntimeMethod_var);
		V_0 = L_12;
		RuntimeObject* L_13 = __this->get_win8_0();
		RuntimeObject* L_14 = V_0;
		List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * L_15 = Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530(L_14, /*hidden argument*/Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::BuildDummyProducts(System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_13, L_15);
		WinRTStore_init_m83E77AC733A7DC8AE72D83409BC46A207354C1EA(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_FinishTransaction_mF79D195C5522BA520354031A3C2A8FB7654F33C1 (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_FinishTransaction_mF79D195C5522BA520354031A3C2A8FB7654F33C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		String_t* L_1 = ___transactionId1;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::FinaliseTransaction(System.String) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m83E77AC733A7DC8AE72D83409BC46A207354C1EA (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, int32_t ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_init_m83E77AC733A7DC8AE72D83409BC46A207354C1EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Initialize(UnityEngine.Purchasing.Default.IWindowsIAPCallback) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_0, __this);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_1, (bool)1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Purchase_m4E9C0943FBF0A814A0AC42BBABFC7F5C535812DB (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_Purchase_m4E9C0943FBF0A814A0AC42BBABFC7F5C535812DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_1 = ___product0;
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Purchase(System.String) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_restoreTransactions_m241B4A16358668FA9AC0F19A3354830DF3FDDF4B (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, bool ___pausing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_restoreTransactions_m241B4A16358668FA9AC0F19A3354830DF3FDDF4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___pausing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = __this->get_m_CanReceivePurchases_4();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_win8_0();
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_4, (bool)0);
	}

IL_0023:
	{
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RestoreTransactions_m78718960BD3272232458D525274671E7B21F55A9 (WinRTStore_tB82D5D92B5A76DD862189B6F3D0717542E94CFE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RestoreTransactions_m78718960BD3272232458D525274671E7B21F55A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_logger_3();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_0, _stringLiteralEDEDA8D96D6BEFA5C97172CAF6624B6A80182222);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_1, (bool)0);
		__this->set_m_CanReceivePurchases_4((bool)1);
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
// System.Void UnityEngine.Purchasing.WinRTStore_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC2B21F8CE37E6D9DF42AE539856605A5D56E2974 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC2B21F8CE37E6D9DF42AE539856605A5D56E2974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * L_0 = (U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D *)il2cpp_codegen_object_new(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3FD2E56DE220FB25F758D744E3914E81E6784995(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FD2E56DE220FB25F758D744E3914E81E6784995 (U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m3EA9A40A7E78188DAE114CD04AA8B8A7BB7A8AC2 (U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___def0, const RuntimeMethod* method)
{
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___def0;
		NullCheck(L_0);
		int32_t L_1 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 * U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m33DC1A34804F606E3D828BF0EC86F2407D99EBC5 (U3CU3Ec_t2CA74199DE5E7903C96F03BA177EB9214061FC1D * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___def0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m33DC1A34804F606E3D828BF0EC86F2407D99EBC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___def0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_0, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_2 = ___def0;
		NullCheck(L_2);
		String_t* L_3 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCA9D01ECC70A5325ED60FF47E843538E385AE1F6, L_3, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_5 = ___def0;
		NullCheck(L_5);
		String_t* L_6 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE75AEFABDAA785AC2B8267F716185360ED501BCB, L_6, /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Decimal__ctor_mD2BEAABCBAC5D1AF62D0F8E01B2DCD2B725B2C2C((&L_8), 1, 0, 0, (bool)0, (uint8_t)2, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_9 = ___def0;
		NullCheck(L_9);
		int32_t L_10 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07(L_9, /*hidden argument*/NULL);
		WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 * L_11 = (WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 *)il2cpp_codegen_object_new(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_il2cpp_TypeInfo_var);
		WinProductDescription__ctor_mAAEF8B336277574079D4490C9100998BF237AF8F(L_11, L_1, _stringLiteral862E356EFB96FF23BE395FDD8CF34602BA87D015, L_4, L_7, _stringLiteral57814CFBAE5C6D00F5CAB49E34B9AA2CE8269EB9, L_8, (String_t*)NULL, (String_t*)NULL, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_11;
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
// System.Void UnityEngine.Purchasing.XiaomiPriceTiers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XiaomiPriceTiers__cctor_m18D33A4801DF9E2BACC7AE160391DA39728FB095 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XiaomiPriceTiers__cctor_m18D33A4801DF9E2BACC7AE160391DA39728FB095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)92));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB4F3A5B5F7FF6CBD6BD49661117C260799518394____8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_StaticFields*)il2cpp_codegen_static_fields_for(XiaomiPriceTiers_t5B00C19A170AB7D438EA49E638CD0806B4B819D5_il2cpp_TypeInfo_var))->set_XiaomiPriceTierPrices_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
