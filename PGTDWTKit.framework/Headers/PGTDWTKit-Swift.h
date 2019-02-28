// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreBluetooth;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PGTDWTKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC9PGTDWTKit16BDBluetoothTools")
@interface BDBluetoothTools : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class CBCentralManager;
@class CBPeripheral;
@class NSNumber;
@class CBService;
@class CBCharacteristic;

@interface BDBluetoothTools (SWIFT_EXTENSION(PGTDWTKit)) <CBCentralManagerDelegate, CBPeripheralDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDiscoverPeripheral:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI;
- (void)centralManager:(CBCentralManager * _Nonnull)central didConnectPeripheral:(CBPeripheral * _Nonnull)peripheral;
- (void)centralManager:(CBCentralManager * _Nonnull)central didFailToConnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDisconnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverServices:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverCharacteristicsForService:(CBService * _Nonnull)service error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didUpdateValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didWriteValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
@end

@class PGMessage;
@class BDBoxInfo;

SWIFT_PROTOCOL("_TtP9PGTDWTKit13BDBoxDelegate_")
@protocol BDBoxDelegate <NSObject>
@optional
/// 是否自己自定义连接北斗盒子界面 - 默认false
/// 如果自己实现连接北斗盒子界面，则不再弹出设备选择连接北斗盒子视图，而会调用boxtoolsTools(_ boxtoolsTools: BDboxtoolsTools, didDiscover peripheral: CBPeripheral, advertisementData: [String : Any], rssi RSSI: NSNumber)代理
- (BOOL)boxToolsCustomConnectView:(BDBluetoothTools * _Nonnull)boxTools SWIFT_WARN_UNUSED_RESULT;
/// 发现新的蓝牙设备（请做过滤处理），如果自定义连接北斗盒子界面，这调用这个协议，如果使用默认的视图，则不调用。
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools didDiscover:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData rssi:(NSNumber * _Nonnull)RSSI;
/// 已经连接 同时发送通知 BDBoxConnectSuccess
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools didConnect:(CBPeripheral * _Nonnull)peripheral;
/// 连接失败
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools didFailToConnect:(CBPeripheral * _Nonnull)peripheral;
/// 断开连接 同时发送通知 BDBoxDisconnect
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools didDisconnectPeripheral:(CBPeripheral * _Nonnull)peripheral;
/// 接收到数据 - 天地卫通协议消息
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools didUpdateValueForObject:(PGMessage * _Nonnull)message;
/// 接收到数据 - 自定义协议：十六进制
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools didUpdateValueForHexString:(NSString * _Nonnull)hexString;
/// 接收到数据 - 终端信息更新 同时发送通知 BDUpdateZDXX
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools updateZDXX:(BDBoxInfo * _Nonnull)box;
/// 发送消息结果
/// message 是发送成功或者失败的消息提示。如:“报文已发出”
/// 发送错误有相关错误提示词 “发射命令失败”、“信号未锁定” 、“电量不足” 、“发射频度未到” 、“加解密错误” 、“定位/通信查询/定时结果的CRC错误”、 “北斗系统繁忙，请稍后再试” 、“无线静默”、 “未取到分帧号未发射” 、“DSP复位”、 “终端被遥毙” 、“通信存入缓存” 、“发射抑制解除”、 “接收到系统的抑制指令，发射被抑制” 、“电量不足，发射被抑制” 、“当前设置为无线电静默状态，发射被抑制”
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools sendMessageReslut:(BOOL)status message:(NSString * _Nonnull)message;
/// 平台回执 -收到回执代表对方北斗设备收到消息了
/// received  消息接收者的手机号/北斗卡号
/// time 平台接收到消息的时间戳 （由于卫星接收到消息-中转-到平台有时间差（<=10秒）,所以这个时间应该做一个范围性参考）
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools returnReceipt:(NSString * _Nonnull)received time:(NSInteger)time;
/// 设置频度是否正确 频度设置成功 or 频度设置失败
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools setFrequencyReslut:(BOOL)isError;
/// 发送频度倒计时 同时发送通知 BDSendFrequenyCountdown
/// 每发送一次数据都会执行倒计时 一般是60s 具体和北斗盒子的频度有关
/// 特别注意，由于北斗信号问题有可能这个频度计算有差异（2s左右）。建议自已添加定时器来控制发送频度  盒子频度为 boxtools.box.frequent
/// 一般使用这个接口就可以知道正确的剩余频度，如果需要自己添加定时器监控频度请注意定时器的RunLoopMode 请使用 Swift:.commonModes OC:NSRunLoopCommonModes
- (void)boxTools:(BDBluetoothTools * _Nonnull)boxTools frequency:(NSInteger)countdown;
/// 是否自定义定频度发送定时器管理. 默认是 false ，由SDK控制定时器 – 这个方法会在连接盒子后调用一次，和每次发送消息调用一次
/// 如果自定义控制频度发送计时器，那么将不会调用boxtoolsTools(_ boxtoolsTools:BDboxtoolsTools, frequency countdown:Int) 也不会发送BDSendFrequenyCountdown通知
/// frequency:盒子频度
- (BOOL)boxTools:(BDBluetoothTools * _Nonnull)boxTools customTimer:(NSInteger)frequency SWIFT_WARN_UNUSED_RESULT;
@end


/// 盒子信息
SWIFT_CLASS("_TtC9PGTDWTKit9BDBoxInfo")
@interface BDBoxInfo : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9PGTDWTKit11BDBoxManage")
@interface BDBoxManage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end






SWIFT_CLASS("_TtC9PGTDWTKit10PGLocation")
@interface PGLocation : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9PGTDWTKit9PGMessage")
@interface PGMessage : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
