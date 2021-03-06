#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef WGSDK_SWIFT_H
#define WGSDK_SWIFT_H
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
#include <Foundation/Foundation.h>
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WGSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif












/// 删除角色实体
SWIFT_CLASS("_TtC5WGSDK15WGSDKDeleteRole")
@interface WGSDKDeleteRole : NSObject
@property (nonatomic, copy) NSString * _Nonnull serverCode;
@property (nonatomic, copy) NSString * _Nonnull roleId;
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode roleId:(NSString * _Nonnull)roleId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 进入游戏日志实体
SWIFT_CLASS("_TtC5WGSDK17WGSDKEnterGameLog")
@interface WGSDKEnterGameLog : WGSDKDeleteRole
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode roleId:(NSString * _Nonnull)roleId OBJC_DESIGNATED_INITIALIZER;
@end


/// 支付实体
SWIFT_CLASS("_TtC5WGSDK15WGSDKIAPProduct")
@interface WGSDKIAPProduct : NSObject
- (nonnull instancetype)initWithProductId:(NSString * _Nonnull)productId serverCode:(NSString * _Nonnull)serverCode roleId:(NSString * _Nonnull)roleId roleName:(NSString * _Nonnull)roleName gameInfo:(NSString * _Nonnull)gameInfo OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 登录实体
SWIFT_CLASS("_TtC5WGSDK10WGSDKLogin")
@interface WGSDKLogin : NSObject
/// backgroundImage 登录背景图片
- (nonnull instancetype)initWithGameCode:(NSString * _Nonnull)gameCode gameSecret:(NSString * _Nonnull)gameSecret backgroundImage:(NSString * _Nonnull)backgroundImage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 登录结果实体
SWIFT_CLASS("_TtC5WGSDK16WGSDKLoginResult")
@interface WGSDKLoginResult : NSObject
@property (nonatomic, copy) NSString * _Nonnull guestId;
@property (nonatomic, copy) NSString * _Nonnull type;
@property (nonatomic, copy) NSString * _Nonnull token;
@property (nonatomic, copy) NSString * _Nonnull refreshToken;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 支付结果实体
SWIFT_CLASS("_TtC5WGSDK18WGSDKPaymentResult")
@interface WGSDKPaymentResult : NSObject
@property (nonatomic, copy) NSString * _Nonnull orderId;
@property (nonatomic, copy) NSString * _Nonnull productId;
@property (nonatomic, copy) NSString * _Nonnull purchaseTime;
@property (nonatomic, copy) NSString * _Nonnull productPrice;
@property (nonatomic, copy) NSString * _Nonnull priceLocale;
@property (nonatomic, copy) NSString * _Nonnull gameInfo;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 设置角色实体
SWIFT_CLASS("_TtC5WGSDK12WGSDKSetRole")
@interface WGSDKSetRole : NSObject
@property (nonatomic, copy) NSString * _Nonnull serverCode;
@property (nonatomic, copy) NSString * _Nonnull roleId;
@property (nonatomic, copy) NSString * _Nonnull roleName;
@property (nonatomic, copy) NSString * _Nonnull serverName;
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode serverName:(NSString * _Nonnull)serverName roleId:(NSString * _Nonnull)roleId roleName:(NSString * _Nonnull)roleName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 设置角色结果实体
SWIFT_CLASS("_TtC5WGSDK18WGSDKSetRoleResult")
@interface WGSDKSetRoleResult : WGSDKSetRole
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode serverName:(NSString * _Nonnull)serverName roleId:(NSString * _Nonnull)roleId roleName:(NSString * _Nonnull)roleName OBJC_DESIGNATED_INITIALIZER;
@end

@class UIApplication;

SWIFT_CLASS("_TtC5WGSDK10WGSDKSwift")
@interface WGSDKSwift : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) WGSDKSwift * _Nonnull shared;)
+ (WGSDKSwift * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// 重新登录回调（其他设备登录当前账号或token刷新失败）
@property (nonatomic, copy) void (^ _Nullable needReLoginHandler)(void);
/// 绑定账户回调
@property (nonatomic, copy) void (^ _Nullable bindAccountHandler)(NSString * _Nonnull);
/// 切换账户回调
@property (nonatomic, copy) void (^ _Nullable changeAccountResultHandler)(WGSDKLoginResult * _Nonnull, NSError * _Nullable);
/// WGSDK初始化  useDebug:开发环境 默认是正式环境
- (void)initSDK:(UIApplication * _Nonnull)application launchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions useDebug:(BOOL)useDebug SWIFT_METHOD_FAMILY(none);
- (void)initSDKUnityFacebook:(UIApplication * _Nonnull)application launchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_METHOD_FAMILY(none);
/// unity使用
- (void)initSDKUnityWithUseDebug:(BOOL)useDebug adjustAppToken:(NSString * _Nonnull)adjustAppToken lineChannelID:(NSString * _Nonnull)lineChannelID twitterKey:(NSString * _Nonnull)twitterKey twitterSecret:(NSString * _Nonnull)twitterSecret SWIFT_METHOD_FAMILY(none);
/// 第三方登录回调
- (BOOL)application:(UIApplication * _Nonnull)app open:(NSURL * _Nonnull)url options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
/// Facebook 回到前台重新激活
- (void)applicationDidBecomeActive;
/// 重置引继账户
- (void)resetYJAccount;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface WGSDKSwift (SWIFT_EXTENSION(WGSDK))
/// dictionary转换成json
- (NSString * _Nonnull)dictionaryToJson:(NSDictionary<NSString *, NSString *> * _Nonnull)info SWIFT_WARN_UNUSED_RESULT;
/// json转换成dictionary
- (NSDictionary<NSString *, id> * _Nonnull)jsonToDictionary:(NSString * _Nonnull)json SWIFT_WARN_UNUSED_RESULT;
@end

@class UIViewController;

@interface WGSDKSwift (SWIFT_EXTENSION(WGSDK))
/// 设置客户回报模式 默认SDK回报
@property (nonatomic) BOOL useServiceWay;
/// 设置开发环境
- (void)useDebug:(BOOL)useDebug;
/// 启动登录页
- (void)login:(WGSDKLogin * _Nonnull)login fromVC:(UIViewController * _Nonnull)fromVC handler:(void (^ _Nonnull)(WGSDKLoginResult * _Nonnull, NSError * _Nullable))handler;
/// 退出登录
- (void)loginOut;
/// 显示浮窗
- (void)showWidget:(UIViewController * _Nonnull)vc position:(NSInteger)position;
/// 移除浮窗
- (void)hideWidget:(UIViewController * _Nonnull)vc;
/// 设置角色
- (void)setRole:(WGSDKSetRole * _Nonnull)role handler:(void (^ _Nonnull)(WGSDKSetRoleResult * _Nullable, NSError * _Nullable))handler;
/// 删除角色
- (void)deleteRole:(WGSDKDeleteRole * _Nonnull)role handler:(void (^ _Nonnull)(NSError * _Nullable))handler;
/// 进入游戏记录
- (void)gameLog:(WGSDKEnterGameLog * _Nonnull)gameLog handler:(void (^ _Nonnull)(NSError * _Nullable))handler;
/// 购买商品
- (void)buyProduct:(WGSDKIAPProduct * _Nonnull)product callBack:(void (^ _Nonnull)(WGSDKPaymentResult * _Nullable, NSError * _Nullable))callBack;
@end

@class NSCoder;

SWIFT_CLASS("_TtC5WGSDK17WGSDKWidgetButton")
@interface WGSDKWidgetButton : UIButton
@property (nonatomic) BOOL isShowWidgetButton;
/// 显示WidgetButton
/// \param vc 显示的页面
///
/// \param position 显示的位置(WGSDKWidgetButtonPosition.left)
///
/// \param changeAccountCallback 切换账号回调
///
+ (void)show:(UIViewController * _Nonnull)vc position:(NSInteger)position;
+ (void)hide:(UIViewController * _Nullable)vc;
+ (BOOL)isShow:(UIViewController * _Nullable)vc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5WGSDK25WGSDKWidgetButtonPosition")
@interface WGSDKWidgetButtonPosition : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger left;)
+ (NSInteger)left SWIFT_WARN_UNUSED_RESULT;
+ (void)setLeft:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger leftTop;)
+ (NSInteger)leftTop SWIFT_WARN_UNUSED_RESULT;
+ (void)setLeftTop:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger leftBottom;)
+ (NSInteger)leftBottom SWIFT_WARN_UNUSED_RESULT;
+ (void)setLeftBottom:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger right;)
+ (NSInteger)right SWIFT_WARN_UNUSED_RESULT;
+ (void)setRight:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger rightTop;)
+ (NSInteger)rightTop SWIFT_WARN_UNUSED_RESULT;
+ (void)setRightTop:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger rightBottom;)
+ (NSInteger)rightBottom SWIFT_WARN_UNUSED_RESULT;
+ (void)setRightBottom:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger top;)
+ (NSInteger)top SWIFT_WARN_UNUSED_RESULT;
+ (void)setTop:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger bottom;)
+ (NSInteger)bottom SWIFT_WARN_UNUSED_RESULT;
+ (void)setBottom:(NSInteger)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef WGSDK_SWIFT_H
#define WGSDK_SWIFT_H
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
#include <Foundation/Foundation.h>
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WGSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif












/// 删除角色实体
SWIFT_CLASS("_TtC5WGSDK15WGSDKDeleteRole")
@interface WGSDKDeleteRole : NSObject
@property (nonatomic, copy) NSString * _Nonnull serverCode;
@property (nonatomic, copy) NSString * _Nonnull roleId;
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode roleId:(NSString * _Nonnull)roleId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 进入游戏日志实体
SWIFT_CLASS("_TtC5WGSDK17WGSDKEnterGameLog")
@interface WGSDKEnterGameLog : WGSDKDeleteRole
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode roleId:(NSString * _Nonnull)roleId OBJC_DESIGNATED_INITIALIZER;
@end


/// 支付实体
SWIFT_CLASS("_TtC5WGSDK15WGSDKIAPProduct")
@interface WGSDKIAPProduct : NSObject
- (nonnull instancetype)initWithProductId:(NSString * _Nonnull)productId serverCode:(NSString * _Nonnull)serverCode roleId:(NSString * _Nonnull)roleId roleName:(NSString * _Nonnull)roleName gameInfo:(NSString * _Nonnull)gameInfo OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 登录实体
SWIFT_CLASS("_TtC5WGSDK10WGSDKLogin")
@interface WGSDKLogin : NSObject
/// backgroundImage 登录背景图片
- (nonnull instancetype)initWithGameCode:(NSString * _Nonnull)gameCode gameSecret:(NSString * _Nonnull)gameSecret backgroundImage:(NSString * _Nonnull)backgroundImage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 登录结果实体
SWIFT_CLASS("_TtC5WGSDK16WGSDKLoginResult")
@interface WGSDKLoginResult : NSObject
@property (nonatomic, copy) NSString * _Nonnull guestId;
@property (nonatomic, copy) NSString * _Nonnull type;
@property (nonatomic, copy) NSString * _Nonnull token;
@property (nonatomic, copy) NSString * _Nonnull refreshToken;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 支付结果实体
SWIFT_CLASS("_TtC5WGSDK18WGSDKPaymentResult")
@interface WGSDKPaymentResult : NSObject
@property (nonatomic, copy) NSString * _Nonnull orderId;
@property (nonatomic, copy) NSString * _Nonnull productId;
@property (nonatomic, copy) NSString * _Nonnull purchaseTime;
@property (nonatomic, copy) NSString * _Nonnull productPrice;
@property (nonatomic, copy) NSString * _Nonnull priceLocale;
@property (nonatomic, copy) NSString * _Nonnull gameInfo;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 设置角色实体
SWIFT_CLASS("_TtC5WGSDK12WGSDKSetRole")
@interface WGSDKSetRole : NSObject
@property (nonatomic, copy) NSString * _Nonnull serverCode;
@property (nonatomic, copy) NSString * _Nonnull roleId;
@property (nonatomic, copy) NSString * _Nonnull roleName;
@property (nonatomic, copy) NSString * _Nonnull serverName;
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode serverName:(NSString * _Nonnull)serverName roleId:(NSString * _Nonnull)roleId roleName:(NSString * _Nonnull)roleName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 设置角色结果实体
SWIFT_CLASS("_TtC5WGSDK18WGSDKSetRoleResult")
@interface WGSDKSetRoleResult : WGSDKSetRole
- (nonnull instancetype)initWithServerCode:(NSString * _Nonnull)serverCode serverName:(NSString * _Nonnull)serverName roleId:(NSString * _Nonnull)roleId roleName:(NSString * _Nonnull)roleName OBJC_DESIGNATED_INITIALIZER;
@end

@class UIApplication;

SWIFT_CLASS("_TtC5WGSDK10WGSDKSwift")
@interface WGSDKSwift : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) WGSDKSwift * _Nonnull shared;)
+ (WGSDKSwift * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// 重新登录回调（其他设备登录当前账号或token刷新失败）
@property (nonatomic, copy) void (^ _Nullable needReLoginHandler)(void);
/// 绑定账户回调
@property (nonatomic, copy) void (^ _Nullable bindAccountHandler)(NSString * _Nonnull);
/// 切换账户回调
@property (nonatomic, copy) void (^ _Nullable changeAccountResultHandler)(WGSDKLoginResult * _Nonnull, NSError * _Nullable);
/// WGSDK初始化  useDebug:开发环境 默认是正式环境
- (void)initSDK:(UIApplication * _Nonnull)application launchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions useDebug:(BOOL)useDebug SWIFT_METHOD_FAMILY(none);
- (void)initSDKUnityFacebook:(UIApplication * _Nonnull)application launchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_METHOD_FAMILY(none);
/// unity使用
- (void)initSDKUnityWithUseDebug:(BOOL)useDebug adjustAppToken:(NSString * _Nonnull)adjustAppToken lineChannelID:(NSString * _Nonnull)lineChannelID twitterKey:(NSString * _Nonnull)twitterKey twitterSecret:(NSString * _Nonnull)twitterSecret SWIFT_METHOD_FAMILY(none);
/// 第三方登录回调
- (BOOL)application:(UIApplication * _Nonnull)app open:(NSURL * _Nonnull)url options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
/// Facebook 回到前台重新激活
- (void)applicationDidBecomeActive;
/// 重置引继账户
- (void)resetYJAccount;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface WGSDKSwift (SWIFT_EXTENSION(WGSDK))
/// dictionary转换成json
- (NSString * _Nonnull)dictionaryToJson:(NSDictionary<NSString *, NSString *> * _Nonnull)info SWIFT_WARN_UNUSED_RESULT;
/// json转换成dictionary
- (NSDictionary<NSString *, id> * _Nonnull)jsonToDictionary:(NSString * _Nonnull)json SWIFT_WARN_UNUSED_RESULT;
@end

@class UIViewController;

@interface WGSDKSwift (SWIFT_EXTENSION(WGSDK))
/// 设置客户回报模式 默认SDK回报
@property (nonatomic) BOOL useServiceWay;
/// 设置开发环境
- (void)useDebug:(BOOL)useDebug;
/// 启动登录页
- (void)login:(WGSDKLogin * _Nonnull)login fromVC:(UIViewController * _Nonnull)fromVC handler:(void (^ _Nonnull)(WGSDKLoginResult * _Nonnull, NSError * _Nullable))handler;
/// 退出登录
- (void)loginOut;
/// 显示浮窗
- (void)showWidget:(UIViewController * _Nonnull)vc position:(NSInteger)position;
/// 移除浮窗
- (void)hideWidget:(UIViewController * _Nonnull)vc;
/// 设置角色
- (void)setRole:(WGSDKSetRole * _Nonnull)role handler:(void (^ _Nonnull)(WGSDKSetRoleResult * _Nullable, NSError * _Nullable))handler;
/// 删除角色
- (void)deleteRole:(WGSDKDeleteRole * _Nonnull)role handler:(void (^ _Nonnull)(NSError * _Nullable))handler;
/// 进入游戏记录
- (void)gameLog:(WGSDKEnterGameLog * _Nonnull)gameLog handler:(void (^ _Nonnull)(NSError * _Nullable))handler;
/// 购买商品
- (void)buyProduct:(WGSDKIAPProduct * _Nonnull)product callBack:(void (^ _Nonnull)(WGSDKPaymentResult * _Nullable, NSError * _Nullable))callBack;
@end

@class NSCoder;

SWIFT_CLASS("_TtC5WGSDK17WGSDKWidgetButton")
@interface WGSDKWidgetButton : UIButton
@property (nonatomic) BOOL isShowWidgetButton;
/// 显示WidgetButton
/// \param vc 显示的页面
///
/// \param position 显示的位置(WGSDKWidgetButtonPosition.left)
///
/// \param changeAccountCallback 切换账号回调
///
+ (void)show:(UIViewController * _Nonnull)vc position:(NSInteger)position;
+ (void)hide:(UIViewController * _Nullable)vc;
+ (BOOL)isShow:(UIViewController * _Nullable)vc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5WGSDK25WGSDKWidgetButtonPosition")
@interface WGSDKWidgetButtonPosition : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger left;)
+ (NSInteger)left SWIFT_WARN_UNUSED_RESULT;
+ (void)setLeft:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger leftTop;)
+ (NSInteger)leftTop SWIFT_WARN_UNUSED_RESULT;
+ (void)setLeftTop:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger leftBottom;)
+ (NSInteger)leftBottom SWIFT_WARN_UNUSED_RESULT;
+ (void)setLeftBottom:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger right;)
+ (NSInteger)right SWIFT_WARN_UNUSED_RESULT;
+ (void)setRight:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger rightTop;)
+ (NSInteger)rightTop SWIFT_WARN_UNUSED_RESULT;
+ (void)setRightTop:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger rightBottom;)
+ (NSInteger)rightBottom SWIFT_WARN_UNUSED_RESULT;
+ (void)setRightBottom:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger top;)
+ (NSInteger)top SWIFT_WARN_UNUSED_RESULT;
+ (void)setTop:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger bottom;)
+ (NSInteger)bottom SWIFT_WARN_UNUSED_RESULT;
+ (void)setBottom:(NSInteger)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
