#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TCSDKAccuracy, TCSDKAccuracyCompanion, TCSDKCallbackPositionProvider, TCSDKConfig, TCSDKConfigCompanion, TCSDKConfigQueries, TCSDKConfig_, TCSDKDatabaseCompanion, TCSDKIosBackgroundHeartbeat, TCSDKKotlinAbstractCoroutineContextElement, TCSDKKotlinAbstractCoroutineContextKey<B, E>, TCSDKKotlinArray<T>, TCSDKKotlinByteArray, TCSDKKotlinByteIterator, TCSDKKotlinCancellationException, TCSDKKotlinEnum<E>, TCSDKKotlinEnumCompanion, TCSDKKotlinException, TCSDKKotlinIllegalStateException, TCSDKKotlinKTypeProjection, TCSDKKotlinKTypeProjectionCompanion, TCSDKKotlinKVariance, TCSDKKotlinNothing, TCSDKKotlinRuntimeException, TCSDKKotlinThrowable, TCSDKKotlinUnit, TCSDKKotlinx_coroutines_coreCoroutineDispatcher, TCSDKKotlinx_coroutines_coreCoroutineDispatcherKey, TCSDKKotlinx_io_coreBuffer, TCSDKKotlinx_serialization_coreSerialKind, TCSDKKotlinx_serialization_coreSerializersModule, TCSDKKtor_client_coreHttpClient, TCSDKKtor_client_coreHttpClientCall, TCSDKKtor_client_coreHttpClientCallCompanion, TCSDKKtor_client_coreHttpClientConfig<T>, TCSDKKtor_client_coreHttpClientEngineConfig, TCSDKKtor_client_coreHttpReceivePipeline, TCSDKKtor_client_coreHttpReceivePipelinePhases, TCSDKKtor_client_coreHttpRequestBuilder, TCSDKKtor_client_coreHttpRequestBuilderCompanion, TCSDKKtor_client_coreHttpRequestData, TCSDKKtor_client_coreHttpRequestPipeline, TCSDKKtor_client_coreHttpRequestPipelinePhases, TCSDKKtor_client_coreHttpResponse, TCSDKKtor_client_coreHttpResponseContainer, TCSDKKtor_client_coreHttpResponseData, TCSDKKtor_client_coreHttpResponsePipeline, TCSDKKtor_client_coreHttpResponsePipelinePhases, TCSDKKtor_client_coreHttpSendPipeline, TCSDKKtor_client_coreHttpSendPipelinePhases, TCSDKKtor_client_coreProxyConfig, TCSDKKtor_eventsEventDefinition<T>, TCSDKKtor_eventsEvents, TCSDKKtor_httpContentType, TCSDKKtor_httpContentTypeCompanion, TCSDKKtor_httpHeaderValueParam, TCSDKKtor_httpHeaderValueWithParameters, TCSDKKtor_httpHeaderValueWithParametersCompanion, TCSDKKtor_httpHeadersBuilder, TCSDKKtor_httpHttpMethod, TCSDKKtor_httpHttpMethodCompanion, TCSDKKtor_httpHttpProtocolVersion, TCSDKKtor_httpHttpProtocolVersionCompanion, TCSDKKtor_httpHttpStatusCode, TCSDKKtor_httpHttpStatusCodeCompanion, TCSDKKtor_httpOutgoingContent, TCSDKKtor_httpURLBuilder, TCSDKKtor_httpURLBuilderCompanion, TCSDKKtor_httpURLProtocol, TCSDKKtor_httpURLProtocolCompanion, TCSDKKtor_httpUrl, TCSDKKtor_httpUrlCompanion, TCSDKKtor_utilsAttributeKey<T>, TCSDKKtor_utilsGMTDate, TCSDKKtor_utilsGMTDateCompanion, TCSDKKtor_utilsMonth, TCSDKKtor_utilsMonthCompanion, TCSDKKtor_utilsPipeline<TSubject, TContext>, TCSDKKtor_utilsPipelinePhase, TCSDKKtor_utilsStringValuesBuilderImpl, TCSDKKtor_utilsTypeInfo, TCSDKKtor_utilsWeekDay, TCSDKKtor_utilsWeekDayCompanion, TCSDKLocationConfig, TCSDKLocationConfigCompanion, TCSDKLogEntry, TCSDKLogEntryQueries, TCSDKLogEntry_, TCSDKNotificationConfig, TCSDKNotificationConfigCompanion, TCSDKPeek, TCSDKPosition, TCSDKPositionCompanion, TCSDKPositionQueries, TCSDKPosition_, TCSDKRuntimeAfterVersion, TCSDKRuntimeBaseTransacterImpl, TCSDKRuntimeExecutableQuery<__covariant RowType>, TCSDKRuntimeQuery<__covariant RowType>, TCSDKRuntimeTransacterImpl, TCSDKRuntimeTransacterTransaction, TCSDKSelectAll, TCSDKState, TCSDKStateCompanion, TCSDKStateQueries, TCSDKStateStore, TCSDKStateStoreCompanion, TCSDKState_, TCSDKTracker, TCSDKTrackerEngine;

@protocol TCSDKDatabase, TCSDKKotlinAnnotation, TCSDKKotlinAutoCloseable, TCSDKKotlinComparable, TCSDKKotlinContinuation, TCSDKKotlinContinuationInterceptor, TCSDKKotlinCoroutineContext, TCSDKKotlinCoroutineContextElement, TCSDKKotlinCoroutineContextKey, TCSDKKotlinFunction, TCSDKKotlinIterator, TCSDKKotlinKAnnotatedElement, TCSDKKotlinKClass, TCSDKKotlinKClassifier, TCSDKKotlinKDeclarationContainer, TCSDKKotlinKType, TCSDKKotlinMapEntry, TCSDKKotlinSequence, TCSDKKotlinSuspendFunction2, TCSDKKotlinx_coroutines_coreChildHandle, TCSDKKotlinx_coroutines_coreChildJob, TCSDKKotlinx_coroutines_coreCoroutineScope, TCSDKKotlinx_coroutines_coreDisposableHandle, TCSDKKotlinx_coroutines_coreFlow, TCSDKKotlinx_coroutines_coreFlowCollector, TCSDKKotlinx_coroutines_coreJob, TCSDKKotlinx_coroutines_coreMutableSharedFlow, TCSDKKotlinx_coroutines_coreMutableStateFlow, TCSDKKotlinx_coroutines_coreParentJob, TCSDKKotlinx_coroutines_coreRunnable, TCSDKKotlinx_coroutines_coreSelectClause, TCSDKKotlinx_coroutines_coreSelectClause0, TCSDKKotlinx_coroutines_coreSelectInstance, TCSDKKotlinx_coroutines_coreSharedFlow, TCSDKKotlinx_coroutines_coreStateFlow, TCSDKKotlinx_io_coreRawSink, TCSDKKotlinx_io_coreRawSource, TCSDKKotlinx_io_coreSink, TCSDKKotlinx_io_coreSource, TCSDKKotlinx_serialization_coreCompositeDecoder, TCSDKKotlinx_serialization_coreCompositeEncoder, TCSDKKotlinx_serialization_coreDecoder, TCSDKKotlinx_serialization_coreDeserializationStrategy, TCSDKKotlinx_serialization_coreEncoder, TCSDKKotlinx_serialization_coreKSerializer, TCSDKKotlinx_serialization_coreSerialDescriptor, TCSDKKotlinx_serialization_coreSerializationStrategy, TCSDKKotlinx_serialization_coreSerializersModuleCollector, TCSDKKtor_client_coreHttpClientEngine, TCSDKKtor_client_coreHttpClientEngineCapability, TCSDKKtor_client_coreHttpClientPlugin, TCSDKKtor_client_coreHttpRequest, TCSDKKtor_httpHeaders, TCSDKKtor_httpHttpMessage, TCSDKKtor_httpHttpMessageBuilder, TCSDKKtor_httpParameters, TCSDKKtor_httpParametersBuilder, TCSDKKtor_ioByteReadChannel, TCSDKKtor_ioCloseable, TCSDKKtor_ioJvmSerializable, TCSDKKtor_utilsAttributes, TCSDKKtor_utilsStringValues, TCSDKKtor_utilsStringValuesBuilder, TCSDKNetworkMonitor, TCSDKPositionFilter, TCSDKPositionProvider, TCSDKPositionQueue, TCSDKRuntimeCloseable, TCSDKRuntimeQueryListener, TCSDKRuntimeQueryResult, TCSDKRuntimeSqlCursor, TCSDKRuntimeSqlDriver, TCSDKRuntimeSqlPreparedStatement, TCSDKRuntimeSqlSchema, TCSDKRuntimeTransacter, TCSDKRuntimeTransacterBase, TCSDKRuntimeTransactionCallbacks, TCSDKRuntimeTransactionWithReturn, TCSDKRuntimeTransactionWithoutReturn, TCSDKUploader;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface TCSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface TCSDKBase (TCSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface TCSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TCSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorTCSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface TCSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface TCSDKByte : TCSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface TCSDKUByte : TCSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface TCSDKShort : TCSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface TCSDKUShort : TCSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface TCSDKInt : TCSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface TCSDKUInt : TCSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface TCSDKLong : TCSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface TCSDKULong : TCSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface TCSDKFloat : TCSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface TCSDKDouble : TCSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface TCSDKBoolean : TCSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KotlinComparable")))
@protocol TCSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface TCSDKKotlinEnum<E> : TCSDKBase <TCSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Accuracy")))
@interface TCSDKAccuracy : TCSDKKotlinEnum<TCSDKAccuracy *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKAccuracyCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TCSDKAccuracy *highest __attribute__((swift_name("highest")));
@property (class, readonly) TCSDKAccuracy *high __attribute__((swift_name("high")));
@property (class, readonly) TCSDKAccuracy *medium __attribute__((swift_name("medium")));
@property (class, readonly) TCSDKAccuracy *low __attribute__((swift_name("low")));
+ (TCSDKKotlinArray<TCSDKAccuracy *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TCSDKAccuracy *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Accuracy.Companion")))
@interface TCSDKAccuracyCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKAccuracyCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TCSDKKotlinArray<id<TCSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("PositionProvider")))
@protocol TCSDKPositionProvider
@required
- (id<TCSDKKotlinx_coroutines_coreFlow>)positions __attribute__((swift_name("positions()")));
@end

__attribute__((swift_name("CallbackPositionProvider")))
@interface TCSDKCallbackPositionProvider : TCSDKBase <TCSDKPositionProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<TCSDKKotlinx_coroutines_coreFlow>)positions __attribute__((swift_name("positions()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)startEmit:(void (^)(TCSDKPosition *))emit completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(emit:completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)stop __attribute__((swift_name("stop()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface TCSDKConfig : TCSDKBase
- (instancetype)initWithServerUrl:(NSString *)serverUrl deviceId:(NSString *)deviceId __attribute__((swift_name("init(serverUrl:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithServerUrl:(NSString *)serverUrl deviceId:(NSString *)deviceId location:(TCSDKLocationConfig *)location wakeLock:(BOOL)wakeLock buffer:(BOOL)buffer notification:(TCSDKNotificationConfig *)notification __attribute__((swift_name("init(serverUrl:deviceId:location:wakeLock:buffer:notification:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKConfigCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKConfig *)doCopyServerUrl:(NSString *)serverUrl deviceId:(NSString *)deviceId location:(TCSDKLocationConfig *)location wakeLock:(BOOL)wakeLock buffer:(BOOL)buffer notification:(TCSDKNotificationConfig *)notification __attribute__((swift_name("doCopy(serverUrl:deviceId:location:wakeLock:buffer:notification:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL buffer __attribute__((swift_name("buffer")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) TCSDKLocationConfig *location __attribute__((swift_name("location")));
@property (readonly) TCSDKNotificationConfig *notification __attribute__((swift_name("notification")));
@property (readonly) NSString *serverUrl __attribute__((swift_name("serverUrl")));
@property (readonly) BOOL wakeLock __attribute__((swift_name("wakeLock")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.Companion")))
@interface TCSDKConfigCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigStore")))
@interface TCSDKConfigStore : TCSDKBase
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(id<TCSDKRuntimeQueryResult> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadWithCompletionHandler:(void (^)(TCSDKConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("load(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveConfig:(TCSDKConfig *)config completionHandler:(void (^)(id<TCSDKRuntimeQueryResult> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("save(config:completionHandler:)")));
@end

__attribute__((swift_name("PositionQueue")))
@protocol TCSDKPositionQueue
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)enqueuePosition:(TCSDKPosition *)position completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("enqueue(position:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekWithCompletionHandler:(void (^)(TCSDKPosition * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("peek(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFirstWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("removeFirst(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseQueue")))
@interface TCSDKDatabaseQueue : TCSDKBase <TCSDKPositionQueue>
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)enqueuePosition:(TCSDKPosition *)position completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("enqueue(position:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekWithCompletionHandler:(void (^)(TCSDKPosition * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("peek(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFirstWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("removeFirst(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EngineBuilder")))
@interface TCSDKEngineBuilder : TCSDKBase
- (TCSDKTrackerEngine *)buildConfig:(TCSDKConfig *)config __attribute__((swift_name("build(config:)")));
@end

__attribute__((swift_name("Uploader")))
@protocol TCSDKUploader
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadPosition:(TCSDKPosition *)position completionHandler:(void (^)(TCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(position:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpUploader")))
@interface TCSDKHttpUploader : TCSDKBase <TCSDKUploader>
- (instancetype)initWithConfig:(TCSDKConfig *)config httpClient:(TCSDKKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(config:httpClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadPosition:(TCSDKPosition *)position completionHandler:(void (^)(TCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(position:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosBackgroundHeartbeat")))
@interface TCSDKIosBackgroundHeartbeat : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iosBackgroundHeartbeat __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKIosBackgroundHeartbeat *shared __attribute__((swift_name("shared")));
- (void)register __attribute__((swift_name("register()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosLocationProvider")))
@interface TCSDKIosLocationProvider : TCSDKCallbackPositionProvider
- (instancetype)initWithConfig:(TCSDKLocationConfig *)config stateStore:(TCSDKStateStore *)stateStore __attribute__((swift_name("init(config:stateStore:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)startEmit:(void (^)(TCSDKPosition *))emit completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(emit:completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)stop __attribute__((swift_name("stop()")));
@end

__attribute__((swift_name("NetworkMonitor")))
@protocol TCSDKNetworkMonitor
@required
@property (readonly) id<TCSDKKotlinx_coroutines_coreStateFlow> isOnline __attribute__((swift_name("isOnline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosNetworkMonitor")))
@interface TCSDKIosNetworkMonitor : TCSDKBase <TCSDKNetworkMonitor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<TCSDKKotlinx_coroutines_coreMutableStateFlow> isOnline __attribute__((swift_name("isOnline")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationConfig")))
@interface TCSDKLocationConfig : TCSDKBase
- (instancetype)initWithAccuracy:(TCSDKAccuracy *)accuracy distanceMeters:(int32_t)distanceMeters intervalSeconds:(int32_t)intervalSeconds angleDegrees:(int32_t)angleDegrees stopDetection:(BOOL)stopDetection stopTimeoutSeconds:(int32_t)stopTimeoutSeconds stationaryRadiusMeters:(int32_t)stationaryRadiusMeters heartbeatIntervalSeconds:(int32_t)heartbeatIntervalSeconds __attribute__((swift_name("init(accuracy:distanceMeters:intervalSeconds:angleDegrees:stopDetection:stopTimeoutSeconds:stationaryRadiusMeters:heartbeatIntervalSeconds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKLocationConfigCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKLocationConfig *)doCopyAccuracy:(TCSDKAccuracy *)accuracy distanceMeters:(int32_t)distanceMeters intervalSeconds:(int32_t)intervalSeconds angleDegrees:(int32_t)angleDegrees stopDetection:(BOOL)stopDetection stopTimeoutSeconds:(int32_t)stopTimeoutSeconds stationaryRadiusMeters:(int32_t)stationaryRadiusMeters heartbeatIntervalSeconds:(int32_t)heartbeatIntervalSeconds __attribute__((swift_name("doCopy(accuracy:distanceMeters:intervalSeconds:angleDegrees:stopDetection:stopTimeoutSeconds:stationaryRadiusMeters:heartbeatIntervalSeconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TCSDKAccuracy *accuracy __attribute__((swift_name("accuracy")));
@property (readonly) int32_t angleDegrees __attribute__((swift_name("angleDegrees")));
@property (readonly) int32_t distanceMeters __attribute__((swift_name("distanceMeters")));
@property (readonly) int32_t heartbeatIntervalSeconds __attribute__((swift_name("heartbeatIntervalSeconds")));
@property (readonly) int32_t intervalSeconds __attribute__((swift_name("intervalSeconds")));
@property (readonly) int32_t stationaryRadiusMeters __attribute__((swift_name("stationaryRadiusMeters")));
@property (readonly) BOOL stopDetection __attribute__((swift_name("stopDetection")));
@property (readonly) int32_t stopTimeoutSeconds __attribute__((swift_name("stopTimeoutSeconds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationConfig.Companion")))
@interface TCSDKLocationConfigCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKLocationConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("PositionFilter")))
@protocol TCSDKPositionFilter
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acceptPosition:(TCSDKPosition *)position completionHandler:(void (^)(TCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("accept(position:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationFilter")))
@interface TCSDKLocationFilter : TCSDKBase <TCSDKPositionFilter>
- (instancetype)initWithConfig:(TCSDKLocationConfig *)config stateStore:(TCSDKStateStore *)stateStore __attribute__((swift_name("init(config:stateStore:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acceptPosition:(TCSDKPosition *)position completionHandler:(void (^)(TCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("accept(position:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogEntry")))
@interface TCSDKLogEntry : TCSDKBase
- (instancetype)initWithTime:(int64_t)time message:(NSString *)message __attribute__((swift_name("init(time:message:)"))) __attribute__((objc_designated_initializer));
- (TCSDKLogEntry *)doCopyTime:(int64_t)time message:(NSString *)message __attribute__((swift_name("doCopy(time:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogStore")))
@interface TCSDKLogStore : TCSDKBase
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)allWithCompletionHandler:(void (^)(NSArray<TCSDKLogEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("all(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(id<TCSDKRuntimeQueryResult> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertMessage:(NSString *)message completionHandler:(void (^)(id<TCSDKRuntimeQueryResult> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insert(message:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)trimKeep:(int32_t)keep completionHandler:(void (^)(id<TCSDKRuntimeQueryResult> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("trim(keep:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationConfig")))
@interface TCSDKNotificationConfig : TCSDKBase
- (instancetype)initWithText:(NSString *)text __attribute__((swift_name("init(text:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKNotificationConfigCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKNotificationConfig *)doCopyText:(NSString *)text __attribute__((swift_name("doCopy(text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationConfig.Companion")))
@interface TCSDKNotificationConfigCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKNotificationConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position")))
@interface TCSDKPosition : TCSDKBase
- (instancetype)initWithLatitude:(TCSDKDouble * _Nullable)latitude longitude:(TCSDKDouble * _Nullable)longitude accuracy:(TCSDKDouble * _Nullable)accuracy time:(int64_t)time altitude:(TCSDKDouble * _Nullable)altitude speed:(TCSDKDouble * _Nullable)speed bearing:(TCSDKDouble * _Nullable)bearing battery:(TCSDKInt * _Nullable)battery charging:(TCSDKBoolean * _Nullable)charging __attribute__((swift_name("init(latitude:longitude:accuracy:time:altitude:speed:bearing:battery:charging:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKPositionCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKPosition *)doCopyLatitude:(TCSDKDouble * _Nullable)latitude longitude:(TCSDKDouble * _Nullable)longitude accuracy:(TCSDKDouble * _Nullable)accuracy time:(int64_t)time altitude:(TCSDKDouble * _Nullable)altitude speed:(TCSDKDouble * _Nullable)speed bearing:(TCSDKDouble * _Nullable)bearing battery:(TCSDKInt * _Nullable)battery charging:(TCSDKBoolean * _Nullable)charging __attribute__((swift_name("doCopy(latitude:longitude:accuracy:time:altitude:speed:bearing:battery:charging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TCSDKDouble * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) TCSDKDouble * _Nullable altitude __attribute__((swift_name("altitude")));
@property (readonly) TCSDKInt * _Nullable battery __attribute__((swift_name("battery")));
@property (readonly) TCSDKDouble * _Nullable bearing __attribute__((swift_name("bearing")));
@property (readonly) TCSDKBoolean * _Nullable charging __attribute__((swift_name("charging")));
@property (readonly) TCSDKDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) TCSDKDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) TCSDKDouble * _Nullable speed __attribute__((swift_name("speed")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position.Companion")))
@interface TCSDKPositionCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State")))
@interface TCSDKState : TCSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled paused:(BOOL)paused lastAcceptedLocation:(TCSDKPosition * _Nullable)lastAcceptedLocation __attribute__((swift_name("init(enabled:paused:lastAcceptedLocation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKStateCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKState *)doCopyEnabled:(BOOL)enabled paused:(BOOL)paused lastAcceptedLocation:(TCSDKPosition * _Nullable)lastAcceptedLocation __attribute__((swift_name("doCopy(enabled:paused:lastAcceptedLocation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) TCSDKPosition * _Nullable lastAcceptedLocation __attribute__((swift_name("lastAcceptedLocation")));
@property (readonly) BOOL paused __attribute__((swift_name("paused")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.Companion")))
@interface TCSDKStateCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKStateCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateStore")))
@interface TCSDKStateStore : TCSDKBase
@property (class, readonly, getter=companion) TCSDKStateStoreCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateTransform:(TCSDKState *(^)(TCSDKState *))transform completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("update(transform:completionHandler:)")));
@property (readonly) id<TCSDKKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateStore.Companion")))
@interface TCSDKStateStoreCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKStateStoreCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createDriver:(id<TCSDKRuntimeSqlDriver>)driver completionHandler:(void (^)(TCSDKStateStore * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(driver:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tracker")))
@interface TCSDKTracker : TCSDKBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearLogsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearLogs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLogsWithCompletionHandler:(void (^)(NSArray<TCSDKLogEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLogs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestPositionConfig:(TCSDKConfig *)config completionHandler:(void (^)(TCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestPosition(config:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resumeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("resume(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startConfig:(TCSDKConfig *)config completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(config:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@property (readonly) id<TCSDKKotlinx_coroutines_coreStateFlow> isTracking __attribute__((swift_name("isTracking")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackerEngine")))
@interface TCSDKTrackerEngine : TCSDKBase
- (instancetype)initWithProvider:(id<TCSDKPositionProvider>)provider uploader:(id<TCSDKUploader>)uploader queue:(id<TCSDKPositionQueue>)queue network:(id<TCSDKNetworkMonitor>)network filter:(id<TCSDKPositionFilter>)filter buffer:(BOOL)buffer initialBackoff:(int64_t)initialBackoff maxBackoff:(int64_t)maxBackoff __attribute__((swift_name("init(provider:uploader:queue:network:filter:buffer:initialBackoff:maxBackoff:)"))) __attribute__((objc_designated_initializer));
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_")))
@interface TCSDKConfig_ : TCSDKBase
- (instancetype)initWithId:(int64_t)id json:(NSString *)json __attribute__((swift_name("init(id:json:)"))) __attribute__((objc_designated_initializer));
- (TCSDKConfig_ *)doCopyId:(int64_t)id json:(NSString *)json __attribute__((swift_name("doCopy(id:json:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *json __attribute__((swift_name("json")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface TCSDKRuntimeBaseTransacterImpl : TCSDKBase
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * For internal use, creates a string in the format (?, ?, ?) where there are [count] question marks.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * For internal use, notifies the listeners provided by [listenerProvider] that their underlying result set has
 * changed.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(TCSDKKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(TCSDKRuntimeTransacterTransaction *)transaction enclosing:(TCSDKRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(TCSDKKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<TCSDKRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol TCSDKRuntimeTransacterBase
@required
@end


/**
 * A transaction-aware [SqlDriver] wrapper which can begin a [Transaction] on the current connection.
 */
__attribute__((swift_name("RuntimeTransacter")))
@protocol TCSDKRuntimeTransacter <TCSDKRuntimeTransacterBase>
@required

/**
 * Starts a [Transaction] and runs [body] in that transaction.
 *
 * @throws IllegalStateException if [noEnclosing] is true and there is already an active
 *   [Transaction] on this thread.
 */
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<TCSDKRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));

/**
 * Starts a [Transaction] and runs [bodyWithReturn] in that transaction.
 *
 * @throws IllegalStateException if [noEnclosing] is true and there is already an active
 *   [Transaction] on this thread.
 */
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<TCSDKRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end


/**
 * A transaction-aware [SqlDriver] wrapper which can begin a [Transaction] on the current connection.
 */
__attribute__((swift_name("RuntimeTransacterImpl")))
@interface TCSDKRuntimeTransacterImpl : TCSDKRuntimeBaseTransacterImpl <TCSDKRuntimeTransacter>
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<TCSDKRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<TCSDKRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigQueries")))
@interface TCSDKConfigQueries : TCSDKRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)clearConfig __attribute__((swift_name("clearConfig()")));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)saveConfigJson:(NSString *)json __attribute__((swift_name("saveConfig(json:)")));
- (TCSDKRuntimeQuery<NSString *> *)selectConfig __attribute__((swift_name("selectConfig()")));
@end

__attribute__((swift_name("Database")))
@protocol TCSDKDatabase <TCSDKRuntimeTransacter>
@required
@property (readonly) TCSDKConfigQueries *configQueries __attribute__((swift_name("configQueries")));
@property (readonly) TCSDKLogEntryQueries *logEntryQueries __attribute__((swift_name("logEntryQueries")));
@property (readonly) TCSDKPositionQueries *positionQueries __attribute__((swift_name("positionQueries")));
@property (readonly) TCSDKStateQueries *stateQueries __attribute__((swift_name("stateQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseCompanion")))
@interface TCSDKDatabaseCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKDatabase>)invokeDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<TCSDKRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogEntry_")))
@interface TCSDKLogEntry_ : TCSDKBase
- (instancetype)initWithId:(int64_t)id time:(int64_t)time message:(NSString *)message __attribute__((swift_name("init(id:time:message:)"))) __attribute__((objc_designated_initializer));
- (TCSDKLogEntry_ *)doCopyId:(int64_t)id time:(int64_t)time message:(NSString *)message __attribute__((swift_name("doCopy(id:time:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogEntryQueries")))
@interface TCSDKLogEntryQueries : TCSDKRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)clear __attribute__((swift_name("clear()")));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)insertTime:(int64_t)time message:(NSString *)message __attribute__((swift_name("insert(time:message:)")));
- (TCSDKRuntimeQuery<TCSDKSelectAll *> *)selectAll __attribute__((swift_name("selectAll()")));
- (TCSDKRuntimeQuery<id> *)selectAllMapper:(id (^)(TCSDKLong *, NSString *))mapper __attribute__((swift_name("selectAll(mapper:)")));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)trimKeep:(TCSDKLong * _Nullable)keep __attribute__((swift_name("trim(keep:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Peek")))
@interface TCSDKPeek : TCSDKBase
- (instancetype)initWithLatitude:(TCSDKDouble * _Nullable)latitude longitude:(TCSDKDouble * _Nullable)longitude accuracy:(TCSDKDouble * _Nullable)accuracy time:(int64_t)time altitude:(TCSDKDouble * _Nullable)altitude speed:(TCSDKDouble * _Nullable)speed bearing:(TCSDKDouble * _Nullable)bearing battery:(TCSDKLong * _Nullable)battery charging:(TCSDKBoolean * _Nullable)charging __attribute__((swift_name("init(latitude:longitude:accuracy:time:altitude:speed:bearing:battery:charging:)"))) __attribute__((objc_designated_initializer));
- (TCSDKPeek *)doCopyLatitude:(TCSDKDouble * _Nullable)latitude longitude:(TCSDKDouble * _Nullable)longitude accuracy:(TCSDKDouble * _Nullable)accuracy time:(int64_t)time altitude:(TCSDKDouble * _Nullable)altitude speed:(TCSDKDouble * _Nullable)speed bearing:(TCSDKDouble * _Nullable)bearing battery:(TCSDKLong * _Nullable)battery charging:(TCSDKBoolean * _Nullable)charging __attribute__((swift_name("doCopy(latitude:longitude:accuracy:time:altitude:speed:bearing:battery:charging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TCSDKDouble * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) TCSDKDouble * _Nullable altitude __attribute__((swift_name("altitude")));
@property (readonly) TCSDKLong * _Nullable battery __attribute__((swift_name("battery")));
@property (readonly) TCSDKDouble * _Nullable bearing __attribute__((swift_name("bearing")));
@property (readonly) TCSDKBoolean * _Nullable charging __attribute__((swift_name("charging")));
@property (readonly) TCSDKDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) TCSDKDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) TCSDKDouble * _Nullable speed __attribute__((swift_name("speed")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position_")))
@interface TCSDKPosition_ : TCSDKBase
- (instancetype)initWithId:(int64_t)id latitude:(TCSDKDouble * _Nullable)latitude longitude:(TCSDKDouble * _Nullable)longitude accuracy:(TCSDKDouble * _Nullable)accuracy time:(int64_t)time altitude:(TCSDKDouble * _Nullable)altitude speed:(TCSDKDouble * _Nullable)speed bearing:(TCSDKDouble * _Nullable)bearing battery:(TCSDKLong * _Nullable)battery charging:(TCSDKBoolean * _Nullable)charging __attribute__((swift_name("init(id:latitude:longitude:accuracy:time:altitude:speed:bearing:battery:charging:)"))) __attribute__((objc_designated_initializer));
- (TCSDKPosition_ *)doCopyId:(int64_t)id latitude:(TCSDKDouble * _Nullable)latitude longitude:(TCSDKDouble * _Nullable)longitude accuracy:(TCSDKDouble * _Nullable)accuracy time:(int64_t)time altitude:(TCSDKDouble * _Nullable)altitude speed:(TCSDKDouble * _Nullable)speed bearing:(TCSDKDouble * _Nullable)bearing battery:(TCSDKLong * _Nullable)battery charging:(TCSDKBoolean * _Nullable)charging __attribute__((swift_name("doCopy(id:latitude:longitude:accuracy:time:altitude:speed:bearing:battery:charging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TCSDKDouble * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) TCSDKDouble * _Nullable altitude __attribute__((swift_name("altitude")));
@property (readonly) TCSDKLong * _Nullable battery __attribute__((swift_name("battery")));
@property (readonly) TCSDKDouble * _Nullable bearing __attribute__((swift_name("bearing")));
@property (readonly) TCSDKBoolean * _Nullable charging __attribute__((swift_name("charging")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) TCSDKDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) TCSDKDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) TCSDKDouble * _Nullable speed __attribute__((swift_name("speed")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionQueries")))
@interface TCSDKPositionQueries : TCSDKRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)enqueueLatitude:(TCSDKDouble * _Nullable)latitude longitude:(TCSDKDouble * _Nullable)longitude accuracy:(TCSDKDouble * _Nullable)accuracy time:(int64_t)time altitude:(TCSDKDouble * _Nullable)altitude speed:(TCSDKDouble * _Nullable)speed bearing:(TCSDKDouble * _Nullable)bearing battery:(TCSDKLong * _Nullable)battery charging:(TCSDKBoolean * _Nullable)charging __attribute__((swift_name("enqueue(latitude:longitude:accuracy:time:altitude:speed:bearing:battery:charging:)")));
- (TCSDKRuntimeQuery<TCSDKPeek *> *)peek __attribute__((swift_name("peek()")));
- (TCSDKRuntimeQuery<id> *)peekMapper:(id (^)(TCSDKDouble * _Nullable, TCSDKDouble * _Nullable, TCSDKDouble * _Nullable, TCSDKLong *, TCSDKDouble * _Nullable, TCSDKDouble * _Nullable, TCSDKDouble * _Nullable, TCSDKLong * _Nullable, TCSDKBoolean * _Nullable))mapper __attribute__((swift_name("peek(mapper:)")));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)removeFirst __attribute__((swift_name("removeFirst()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAll")))
@interface TCSDKSelectAll : TCSDKBase
- (instancetype)initWithTime:(int64_t)time message:(NSString *)message __attribute__((swift_name("init(time:message:)"))) __attribute__((objc_designated_initializer));
- (TCSDKSelectAll *)doCopyTime:(int64_t)time message:(NSString *)message __attribute__((swift_name("doCopy(time:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State_")))
@interface TCSDKState_ : TCSDKBase
- (instancetype)initWithId:(int64_t)id json:(NSString *)json __attribute__((swift_name("init(id:json:)"))) __attribute__((objc_designated_initializer));
- (TCSDKState_ *)doCopyId:(int64_t)id json:(NSString *)json __attribute__((swift_name("doCopy(id:json:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateQueries")))
@interface TCSDKStateQueries : TCSDKRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)clearState __attribute__((swift_name("clearState()")));

/**
 * @return The number of rows updated.
 */
- (id<TCSDKRuntimeQueryResult>)saveStateJson:(NSString *)json __attribute__((swift_name("saveState(json:)")));
- (TCSDKRuntimeQuery<NSString *> *)selectState __attribute__((swift_name("selectState()")));
@end

@interface TCSDKLocationConfig (Extensions)
@property (readonly) TCSDKLocationConfig *effective __attribute__((swift_name("effective")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackerKt")))
@interface TCSDKTrackerKt : TCSDKBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)sharedTrackerWithCompletionHandler:(void (^)(TCSDKTracker * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sharedTracker(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface TCSDKKotlinEnumCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TCSDKKotlinArray<T> : TCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TCSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol TCSDKKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<TCSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<TCSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol TCSDKKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<TCSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<TCSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol TCSDKKotlinx_serialization_coreKSerializer <TCSDKKotlinx_serialization_coreSerializationStrategy, TCSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * An asynchronous data stream that sequentially emits values and completes normally or with an exception.
 *
 * _Intermediate operators_ on the flow such as [map], [filter], [take], [zip], etc are functions that are
 * applied to the _upstream_ flow or flows and return a _downstream_ flow where further operators can be applied to.
 * Intermediate operations do not execute any code in the flow and are not suspending functions themselves.
 * They only set up a chain of operations for future execution and quickly return.
 * This is known as a _cold flow_ property.
 *
 * _Terminal operators_ on the flow are either suspending functions such as [collect], [single], [reduce], [toList], etc.
 * or [launchIn] operator that starts collection of the flow in the given scope.
 * They are applied to the upstream flow and trigger execution of all operations.
 * Execution of the flow is also called _collecting the flow_  and is always performed in a suspending manner
 * without actual blocking. Terminal operators complete normally or exceptionally depending on successful or failed
 * execution of all the flow operations in the upstream. The most basic terminal operator is [collect], for example:
 *
 * ```
 * try {
 *     flow.collect { value ->
 *         println("Received $value")
 *     }
 * } catch (e: Exception) {
 *     println("The flow has thrown an exception: $e")
 * }
 * ```
 *
 * By default, flows are _sequential_ and all flow operations are executed sequentially in the same coroutine,
 * with an exception for a few operations specifically designed to introduce concurrency into flow
 * execution such as [buffer] and [flatMapMerge]. See their documentation for details.
 *
 * The `Flow` interface does not carry information whether a flow is a _cold_ stream that can be collected repeatedly and
 * triggers execution of the same code every time it is collected, or if it is a _hot_ stream that emits different
 * values from the same running source on each collection. Usually flows represent _cold_ streams, but
 * there is a [SharedFlow] subtype that represents _hot_ streams. In addition to that, any flow can be turned
 * into a _hot_ one by the [stateIn] and [shareIn] operators, or by converting the flow into a hot channel
 * via the [produceIn] operator.
 *
 * ### Flow builders
 *
 * There are the following basic ways to create a flow:
 *
 * - [flowOf(...)][flowOf] functions to create a flow from a fixed set of values.
 * - [asFlow()][asFlow] extension functions on various types to convert them into flows.
 * - [flow { ... }][flow] builder function to construct arbitrary flows from
 *   sequential calls to [emit][FlowCollector.emit] function.
 * - [channelFlow { ... }][channelFlow] builder function to construct arbitrary flows from
 *   potentially concurrent calls to the [send][kotlinx.coroutines.channels.SendChannel.send] function.
 * - [MutableStateFlow] and [MutableSharedFlow] define the corresponding constructor functions to create
 *   a _hot_ flow that can be directly updated.
 *
 * ### Flow constraints
 *
 * All implementations of the `Flow` interface must adhere to two key properties described in detail below:
 *
 * - Context preservation.
 * - Exception transparency.
 *
 * These properties ensure the ability to perform local reasoning about the code with flows and modularize the code
 * in such a way that upstream flow emitters can be developed separately from downstream flow collectors.
 * A user of a flow does not need to be aware of implementation details of the upstream flows it uses.
 *
 * ### Context preservation
 *
 * The flow has a context preservation property: it encapsulates its own execution context and never propagates or leaks
 * it downstream, thus making reasoning about the execution context of particular transformations or terminal
 * operations trivial.
 *
 * There is only one way to change the context of a flow: the [flowOn][Flow.flowOn] operator
 * that changes the upstream context ("everything above the `flowOn` operator").
 * For additional information refer to its documentation.
 *
 * This reasoning can be demonstrated in practice:
 *
 * ```
 * val flowA = flowOf(1, 2, 3)
 *     .map { it + 1 } // Will be executed in ctxA
 *     .flowOn(ctxA) // Changes the upstream context: flowOf and map
 *
 * // Now we have a context-preserving flow: it is executed somewhere but this information is encapsulated in the flow itself
 *
 * val filtered = flowA // ctxA is encapsulated in flowA
 *    .filter { it == 3 } // Pure operator without a context yet
 *
 * withContext(Dispatchers.Main) {
 *     // All non-encapsulated operators will be executed in Main: filter and single
 *     val result = filtered.single()
 *     myUi.text = result
 * }
 * ```
 *
 * From the implementation point of view, it means that all flow implementations should
 * only emit from the same coroutine context.
 * This constraint is efficiently enforced by the default [flow] builder.
 * The [flow] builder should be used if the flow implementation does not start any coroutines.
 * Its implementation prevents most of the development mistakes:
 *
 * ```
 * val myFlow = flow {
 *     // GlobalScope.launch { // is prohibited
 *     // launch(Dispatchers.IO) { // is prohibited
 *     // withContext(CoroutineName("myFlow")) { // is prohibited
 *     emit(1) // OK
 *     coroutineScope {
 *         emit(2) // OK -- still the same coroutine
 *     }
 * }
 * ```
 *
 * Use [channelFlow] if the collection and emission of a flow are to be separated into multiple coroutines.
 * It encapsulates all the context preservation work and allows you to focus on your
 * domain-specific problem, rather than invariant implementation details.
 * It is possible to use any combination of coroutine builders from within [channelFlow].
 *
 * If you are looking for performance and are sure that no concurrent emits and context jumps will happen,
 * the [flow] builder can be used alongside a [coroutineScope] or [supervisorScope] instead:
 * - Scoped primitive should be used to provide a [CoroutineScope].
 * - Changing the context of emission is prohibited, no matter whether it is `withContext(ctx)` or
 *   a builder argument (e.g. `launch(ctx)`).
 * - Collecting another flow from a separate context is allowed, but it has the same effect as
 *   applying the [flowOn] operator to that flow, which is more efficient.
 *
 * ### Exception transparency
 *
 * When `emit` or `emitAll` throws, the Flow implementations must immediately stop emitting new values and finish with an exception.
 * For diagnostics or application-specific purposes, the exception may be different from the one thrown by the emit operation,
 * suppressing the original exception as discussed below.
 * If there is a need to emit values after the downstream failed, please use the [catch][Flow.catch] operator.
 *
 * The [catch][Flow.catch] operator only catches upstream exceptions, but passes
 * all downstream exceptions. Similarly, terminal operators like [collect][Flow.collect]
 * throw any unhandled exceptions that occur in their code or in upstream flows, for example:
 *
 * ```
 * flow { emitData() }
 *     .map { computeOne(it) }
 *     .catch { ... } // catches exceptions in emitData and computeOne
 *     .map { computeTwo(it) }
 *     .collect { process(it) } // throws exceptions from process and computeTwo
 * ```
 * The same reasoning can be applied to the [onCompletion] operator that is a declarative replacement for the `finally` block.
 *
 * All exception-handling Flow operators follow the principle of exception suppression:
 *
 * If the upstream flow throws an exception during its completion when the downstream exception has been thrown,
 * the downstream exception becomes superseded and suppressed by the upstream exception, being a semantic
 * equivalent of throwing from `finally` block. However, this doesn't affect the operation of the exception-handling operators,
 * which consider the downstream exception to be the root cause and behave as if the upstream didn't throw anything.
 *
 * Failure to adhere to the exception transparency requirement can lead to strange behaviors which make
 * it hard to reason about the code because an exception in the `collect { ... }` could be somehow "caught"
 * by an upstream flow, limiting the ability of local reasoning about the code.
 *
 * Flow machinery enforces exception transparency at runtime and throws [IllegalStateException] on any attempt to emit a value,
 * if an exception has been thrown on previous attempt.
 *
 * ### Reactive streams
 *
 * Flow is [Reactive Streams](http://www.reactive-streams.org/) compliant, you can safely interop it with
 * reactive streams using `Flow.asPublisher` and `Publisher.asFlow` from `kotlinx-coroutines-reactive` module.
 *
 * ### Not stable for inheritance
 *
 * **The `Flow` interface is not stable for inheritance in 3rd party libraries**, as new methods
 * might be added to this interface in the future, but is stable for use.
 *
 * Use the `flow { ... }` builder function to create an implementation, or extend [AbstractFlow].
 * These implementations ensure that the context preservation property is not violated, and prevent most
 * of the developer mistakes related to concurrency, inconsistent flow dispatchers, and cancellation.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol TCSDKKotlinx_coroutines_coreFlow
@required

/**
 * Accepts the given [collector] and [emits][FlowCollector.emit] values into it.
 *
 * This method can be used along with SAM-conversion of [FlowCollector]:
 * ```
 * myFlow.collect { value -> println("Collected $value") }
 * ```
 *
 * ### Method inheritance
 *
 * To ensure the context preservation property, it is not recommended implementing this method directly.
 * Instead, [AbstractFlow] can be used as the base type to properly ensure flow's properties.
 *
 * All default flow implementations ensure context preservation and exception transparency properties on a best-effort basis
 * and throw [IllegalStateException] if a violation was detected.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TCSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface TCSDKKotlinThrowable : TCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (TCSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TCSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface TCSDKKotlinException : TCSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface TCSDKKotlinRuntimeException : TCSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface TCSDKKotlinIllegalStateException : TCSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface TCSDKKotlinCancellationException : TCSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol TCSDKRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end


/**
 * Maintains connections to an underlying SQL database and provides APIs for managing transactions
 * and executing SQL statements.
 */
__attribute__((swift_name("RuntimeSqlDriver")))
@protocol TCSDKRuntimeSqlDriver <TCSDKRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(TCSDKKotlinArray<NSString *> *)queryKeys listener:(id<TCSDKRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));

/**
 * The currently open [Transacter.Transaction] on the database.
 *
 * It's up to the implementor how this method behaves for different connection/threading patterns.
 */
- (TCSDKRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));

/**
 * Execute a SQL statement.
 *
 * @param [identifier] An opaque, unique value that can be used to implement any driver-side
 *   caching of prepared statements. If [identifier] is null, a fresh statement is required.
 * @param [sql] The SQL string to be executed.
 * @param [parameters] The number of bindable parameters [sql] contains.
 * @param [binders] A lambda which is called before execution to bind any parameters to the SQL
 *   statement.
 *
 * @return The number of rows updated for an INSERT/DELETE/UPDATE, or 0 for other SQL statements.
 *
 * NOTE it is up to the specific driver to correctly return the row changes. Notably the SQLJS
 * driver does not do this and you should query changes() manually.
 */
- (id<TCSDKRuntimeQueryResult>)executeIdentifier:(TCSDKInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<TCSDKRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));

/**
 * Execute a SQL statement and evaluate its result set using the given block.
 *
 * @param [identifier] An opaque, unique value that can be used to implement any driver-side
 *   caching of prepared statements. If [identifier] is null, a fresh statement is required.
 * @param [sql] The SQL string to be executed.
 * @param [mapper] A lambda which is called with the cursor when the statement is executed
 *   successfully. The generic result of the lambda is returned to the caller, as soon as the
 *   mutual exclusion on the database connection ends. The cursor **must not escape** the block
 *   scope.
 * @param [parameters] The number of bindable parameters [sql] contains.
 * @param [binders] A lambda which is called before execution to bind any parameters to the SQL
 *   statement.
 */
- (id<TCSDKRuntimeQueryResult>)executeQueryIdentifier:(TCSDKInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<TCSDKRuntimeQueryResult> (^)(id<TCSDKRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<TCSDKRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));

/**
 * Start a new [Transacter.Transaction] on the database.
 *
 * It's up to the implementor how this method behaves for different connection/threading patterns.
 */
- (id<TCSDKRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(TCSDKKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(TCSDKKotlinArray<NSString *> *)queryKeys listener:(id<TCSDKRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end


/**
 * The returned [value] is the result of a database query or other database operation.
 *
 * This interface enables drivers to be based on non-blocking APIs where the result can be obtained using the suspending
 * [await] method. See [AsyncValue].
 */
__attribute__((swift_name("RuntimeQueryResult")))
@protocol TCSDKRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A scope in which coroutines run.
 *
 * A coroutine scope allows managing the lifecycles of several coroutines simultaneously
 * and setting the execution properties with which coroutines (its "children") are launched.
 *
 * Execution properties are [CoroutineContext.Element] values that may affect the behavior of
 * `kotlinx.coroutines`—for example, which thread pool a coroutine should run on.
 * See a more detailed explanation of coroutine context elements in a separate section below.
 *
 * A set of rules called "structured concurrency" ensures that the lifecycles of children
 * are nested inside the lifecycles of their parent scopes.
 * For example, if a scope is cancelled, all coroutines in it are cancelled too, and the scope itself
 * cannot be completed until all its children are completed.
 * See a more detailed explanation of structured concurrency in a separate section below.
 *
 * ## Using coroutine scopes
 *
 * The methods of this interface are not intended to be called directly.
 * Instead, a [CoroutineScope] is passed as a receiver to the coroutine builders such as [launch] and [async]
 * and affects the execution properties and lifetimes of the created coroutines.
 *
 * ## Coroutine context elements
 *
 * A [CoroutineScope] is defined by a set of [CoroutineContext] elements, one of which is typically a [Job],
 * described in the section on structured concurrency and responsible for managing lifetimes of coroutines.
 *
 * Other coroutine context elements include, but are not limited to, the following:
 *
 * - The scheduling policy, represented by a [CoroutineDispatcher] element.
 *   Some commonly used dispatchers are provided in the [Dispatchers] object.
 * - [CoroutineExceptionHandler] that defines how to handle coroutine failures that cannot
 *   be propagated to any other coroutine.
 * - A [CoroutineName] element that can be used to name coroutines for debugging purposes.
 * - On the JVM, a `ThreadContextElement` ensures that a specific thread-local value gets set on the thread
 *   that executes the coroutine.
 *
 * ## Obtaining a coroutine scope
 *
 * Manual implementations of this interface are not recommended.
 * Instead, a [CoroutineScope] should be obtained in a way that reflects the
 * intended structured concurrency relationships.
 *
 * ### Lexical scopes
 *
 * [coroutineScope] and [supervisorScope] functions can be called in any `suspend` function to define a scope
 * lexically, ensuring that all coroutines launched in this scope complete by the time the scope-limiting
 * function exits.
 *
 * ```
 * suspend fun doSomething() = coroutineScope { // scope `A`
 *     repeat(5) { outer ->
 *         // spawn a new coroutine in the scope `A`
 *         launch {
 *             println("Coroutine $outer started")
 *             coroutineScope { // scope `B`, separate for each `outer` coroutine
 *                 repeat(5) { inner ->
 *                     // spawn a new coroutine in the scope `B`
 *                     launch {
 *                         println("Coroutine $outer.$inner started")
 *                         delay(10.milliseconds)
 *                         println("Coroutine $outer.$inner finished")
 *                     }
 *                 }
 *             }
 *             // will only exit once all `Coroutine $outer.X finished` messages are printed
 *             println("Coroutine $outer finished")
 *         }
 *     }
 * } // will only exit once all `Coroutine X finished` messages are printed
 * ```
 *
 * This is the preferred way to create a [CoroutineScope].
 *
 * ### `CoroutineScope` constructor function
 *
 * When the lifecycle of the scope is not limited lexically
 * (for example, when coroutines should outlive the function that creates them)
 * but is tied to the lifecycle of some entity, the [CoroutineScope] constructor function can be used
 * to define a personal scope for the entity. This scope should be stored as a field in the entity.
 *
 * **The key part of using a custom `CoroutineScope` is cancelling it at the end of the lifecycle.**
 * The [CoroutineScope.cancel] extension function shall be used when the entity launching coroutines
 * is no longer needed. It cancels all the coroutines that might still be running on its behalf.
 *
 * ```
 * class MyEntity(scope: CoroutineScope? = null): AutoCloseable {
 *    // careful: do not write `get() =` here by accident!
 *    private val scope = scope ?: CoroutineScope(SupervisorJob() + CoroutineExceptionHandler { _, e ->
 *        println("Error in coroutine: $e")
 *    })
 *
 *    fun doSomethingWhileEntityExists() = scope.launch {
 *        while (true) {
 *            // do some work
 *            delay(50.milliseconds)
 *            println("Doing something")
 *        }
 *    }
 *
 *    override fun close() {
 *        // cancel all computations related to this entity
 *        scope.cancel()
 *    }
 * }
 *
 * fun main() {
 *     MyEntity().use { entity ->
 *         entity.doSomethingWhileEntityExists()
 *         Thread.sleep(200)
 *     }
 * }
 * ```
 *
 * Usually, a custom [CoroutineScope] should be created with a [SupervisorJob] and
 * a [CoroutineExceptionHandler] to handle exceptions in child coroutines.
 * See the documentation for the [CoroutineScope] constructor function for more details.
 * Also note that `MyEntity` accepts the `scope` parameter that can be used to pass a custom scope for testing.
 *
 * Sometimes, coroutine-aware frameworks provide [CoroutineScope] instances like this out of the box.
 * For example, on Android, all entities with a lifecycle and all `ViewModel` instances expose a [CoroutineScope]:
 * see [the corresponding documentation](https://developer.android.com/topic/libraries/architecture/coroutines).
 *
 * ### Taking another view of an existing scope
 *
 * Occasionally, several coroutines need to be launched with the same additional [CoroutineContext] that is not
 * present in the original scope.
 * In this case, the [CoroutineScope.plus] operator can be used to create a new view of an existing scope:
 *
 * ```
 * coroutineScope {
 *     val sameScopeButInUiThread = this + Dispatchers.Main
 *     sameScopeButInUiThread.launch {
 *         println("Running on the main thread")
 *     }
 *     launch {
 *         println("This will run using the original dispatcher")
 *     }
 *     sameScopeButInUiThread.launch {
 *         println("And this will also run on the main thread")
 *     }
 * }
 * ```
 *
 * The lifecycle of the new scope is the same as the original one, but the context includes new elements.
 *
 * ### Application lifecycle scope
 *
 * [GlobalScope] is a [CoroutineScope] that has the lifetime of the whole application.
 * Although it is convenient for launching top-level coroutines that are not tied to the lifecycle of any entity,
 * it is easy to misuse it and create memory or resource leaks when a coroutine actually should be tied
 * to the lifecycle of some entity.
 *
 * ```
 * GlobalScope.launch(CoroutineExceptionHandler { _, e ->
 *     println("Error in coroutine: $e")
 * }) {
 *    while (true) {
 *        println("I will be running forever, you cannot stop me!")
 *        delay(1.seconds)
 *    }
 * }
 * ```
 *
 * ### `by`-delegation
 *
 * When the approaches listed above are not applicable and a custom [CoroutineScope] implementation is needed,
 * it is recommended to use `by`-delegation to implement the interface:
 *
 * ```
 * class MyEntity : CoroutineScope by CoroutineScope(
 *     SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *         println("Error in coroutine: $e")
 *     }
 * )
 * ```
 *
 * ## Structured concurrency in detail
 *
 * ### Overview
 *
 * *Structured concurrency* is an approach to concurrent programming that attempts to clarify the lifecycles of
 * concurrent operations and to make them easier to reason about.
 *
 * Skim the following motivating example:
 *
 * ```
 * suspend fun downloadFile(url: String): ByteArray {
 *     return withContext(Dispatchers.IO) {
 *         // this code will execute on a thread for blocking work
 *         val file = byteArrayOf()
 *         // download the file
 *         file
 *     }
 * }
 *
 * suspend fun downloadAndCompareTwoFiles() {
 *     coroutineScope {
 *         val file1 = async {
 *             // if this fails, everything else quickly fails too
 *             downloadFile("http://example.com/file1")
 *         }
 *         val file2 = async {
 *             downloadFile("http://example.com/file2")
 *         }
 *         launch(Dispatchers.Main) {
 *             // create a separate coroutine on the UI thread
 *             if (file1.await().contentEquals(file2.await())) {
 *                 uiShow("Files are equal")
 *             } else {
 *                 uiShow("Files are not equal")
 *             }
 *         }
 *     }
 *     // this line will only run once all the coroutines created above
 *     // finish their work or get cancelled
 * }
 * ```
 *
 * In this example, two asynchronous operations are launched in parallel to download two files.
 * If one of the files fails to download, the other one is cancelled too, and the whole operation fails.
 * The `coroutineScope` function will not return until all the coroutines inside it are completed or cancelled.
 * In addition, it is possible to cancel the coroutine calling `downloadAndCompareTwoFiles`, and all the coroutines
 * inside it will be cancelled too.
 *
 * Without structured concurrency, ensuring that no resource leaks occur by the end of the operation and that
 * the operation responds promptly to failure and cancellation requests is challenging.
 * With structured concurrency, this orchestration is done automatically by the coroutine library,
 * and it is enough to specify the relationships between operations declaratively, as shown in the example,
 * without being overwhelmed by intricate inter-thread communications.
 *
 * ### Specifics
 *
 * Coroutines and [CoroutineScope] instances have an associated lifecycle.
 * A runtime representation of a lifecycle in `kotlinx.coroutines` is called a [Job].
 * [Job] instances form a hierarchy of parent-child relationships,
 * and the [Job] of every coroutine spawned in a [CoroutineScope] is a child of the [Job] of that scope.
 * This is often shortened to saying that the coroutine is the scope's child.
 *
 * See the [Job] documentation for a detailed explanation of the lifecycle stages.
 *
 * ```
 * coroutineScope {
 *     val job = coroutineContext[Job]
 *     val childJob = launch { }
 *     check(job === childJob.parent)
 * }
 * ```
 *
 * Because every coroutine has a lifecycle represented by a [Job], a [CoroutineScope] can be associated with it.
 * Most coroutine builders in `kotlinx.coroutines` expose the [CoroutineScope] of the coroutine on creation:
 *
 * ```
 * coroutineScope { // this block has a `CoroutineScope` receiver
 *     val parentScope = this
 *     var grandChildFinished = false
 *     val childJob = launch {
 *         // this block has a `CoroutineScope` receiver, too
 *         val childScope = this
 *         check(childScope.coroutineContext[Job]?.parent
 *             === parentScope.coroutineContext[Job])
 *         launch {
 *             // This block also has a `CoroutineScope` receiver!
 *             val grandChildScope = this
 *             check(grandChildScope.coroutineContext[Job]?.parent
 *                 === childScope.coroutineContext[Job])
 *             delay(100.milliseconds)
 *             grandChildFinished = true
 *         }
 *         // Because the grandchild coroutine
 *         // is a child of the child coroutine,
 *         // the child coroutine will not complete
 *         // until the grandchild coroutine does.
 *     }
 *     // Await completion of the child coroutine,
 *     // and therefore the grandchild coroutine too.
 *     childJob.join()
 *     check(grandChildFinished)
 * }
 * ```
 *
 * Such a [CoroutineScope] receiver is provided for [launch], [async], and other coroutine builders,
 * as well as for lexically scoping functions like [coroutineScope], [supervisorScope], and [withContext].
 * Each of these [CoroutineScope] instances is tied to the lifecycle of the code block it runs in.
 *
 * Like the example above shows, a coroutine does not complete until all its children are completed.
 * This means that [Job.join] on a [launch] or [async] result or [Deferred.await] on an [async] result
 * will not return until all the children of that coroutine are completed.
 * Likewise, lexically scoping functions like [coroutineScope] and [withContext] will not return
 * until all the coroutines launched in them are completed.
 *
 * #### Interactions between coroutines
 *
 * See the [Job] documentation for a detailed explanation of interactions between [Job] values.
 * Below is a summary of the most important points for structuring code in day-to-day usage.
 *
 * A coroutine cannot reach the final state until all its children have reached their final states.
 * See the example above.
 *
 * If a [CoroutineScope] is cancelled (either explicitly or because it corresponds to some coroutine that failed
 * with an exception), all its children are cancelled too:
 *
 * ```
 * val scope = CoroutineScope(
 *     SupervisorJob() + CoroutineExceptionHandler { _, e -> }
 * )
 * val job = scope.launch {
 *      // this coroutine will be cancelled
 *      awaitCancellation()
 * }
 * scope.cancel() // comment this out for the line below to hang
 * job.join() // finishes normally
 * ```
 *
 * A failure of a child coroutine causes the parent to fail with the same exception if all of the following conditions
 * are met:
 * 1. The exception is not a [CancellationException].
 * 2. The failed child coroutine was not created with lexically scoped coroutine builders
 *    like [coroutineScope] or [withContext].
 * 3. The parent coroutine's [Job] is not a [SupervisorJob].
 *
 * The same logic applies recursively to the parent of the parent, etc.
 * Example:
 *
 * ```
 * check(
 *     runCatching {
 *         coroutineScope {
 *             launch {
 *                 // This cancels the `coroutineScope` coroutine, since
 *                 // 1. The coroutine fails with a non-`CancellationException` exception,
 *                 // 2. `launch` is not a lexically scoped coroutine builder,
 *                 // 3. `coroutineScope` has a non-supervisor `Job`
 *                 throw IllegalStateException()
 *             }
 *             launch {
 *                 // this coroutine will be cancelled
 *                 // when the parent gets cancelled
 *                 awaitCancellation()
 *             }
 *         }
 *     }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * // The currently running coroutine will *not* be cancelled
 * // because the failed coroutine (`coroutineScope`) is lexically scoped.
 * check(currentCoroutineContext().isActive)
 * ```
 *
 * Child jobs can lead to the failure of the parent even if the parent has already finished its work
 * and was ready to return a value:
 *
 * ```
 * val deferred = GlobalScope.async {
 *     launch {
 *         delay(100.milliseconds)
 *         throw IllegalStateException()
 *     }
 *     10 // this value will be lost!
 * }
 * check(
 *     runCatching { deferred.await() }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * ```
 *
 * If several coroutines fail with non-[CancellationException] exceptions,
 * the first observed failure will be propagated, and the rest will be attached to it as
 * [suppressed exceptions][Throwable.suppressedExceptions].
 *
 * Failing with a [CancellationException] only cancels the coroutine itself and its children.
 * It does not affect the parent or sibling coroutines and is not considered a failure.
 *
 * ### How-to: stop failures of child coroutines from cancelling other coroutines
 *
 * If not affecting the [CoroutineScope] on a failure in a child coroutine is the desired behaviour,
 * then a [SupervisorJob] should be used instead of `Job()` when constructing the scope:
 *
 * ```
 * val scope = CoroutineScope(SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *     println("Coroutine failed with exception $e")
 * })
 * val failingCoroutine = scope.launch(Dispatchers.IO) {
 *     throw IllegalStateException("This exception will not cancel the scope")
 * }
 * failingCoroutine.join()
 * scope.launch(Dispatchers.IO) {
 *     println("This coroutine is active! See: ${isActive}")
 * }
 * ```
 *
 * Likewise, [supervisorScope] can replace [coroutineScope]:
 *
 * ```
 * supervisorScope {
 *     val failingCoroutine = launch(CoroutineExceptionHandler { _, e ->
 *         println("Coroutine failed with exception $e")
 *     }) {
 *         throw IllegalStateException("This exception will not cancel the scope")
 *     }
 *     failingCoroutine.join()
 *     launch {
 *         println("This coroutine is active! See: ${isActive}")
 *     }
 * }
 * ```
 *
 * ### How-to: prevent a child coroutine from being cancelled
 *
 * Sometimes, you may want to run a coroutine even if the parent coroutine is cancelled.
 * This pattern provides a way to achieve that:
 *
 * ```
 * scope.launch(start = CoroutineStart.ATOMIC) {
 *     // Do not move `NonCancellable` to the `context` argument of `launch`!
 *     withContext(NonCancellable) {
 *         // This code will run even if the parent coroutine is cancelled
 *     }
 * }
 * ```
 *
 * [CoroutineStart.ATOMIC] ensures that the new coroutine is not cancelled until it at least started to execute.
 * [NonCancellable] in [withContext] ensures that the code inside the block is executed even if the coroutine
 * created by [launch] is cancelled.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol TCSDKKotlinx_coroutines_coreCoroutineScope
@required

/**
 * The context of this scope.
 *
 * The context represents various execution properties of the coroutines launched in this scope,
 * such as the [dispatcher][CoroutineDispatcher] or
 * the [procedure for handling exceptions without a propagation path][CoroutineExceptionHandler].
 * Except [GlobalScope], a [job][Job] instance for enforcing structured concurrency
 * must also be present in the context of every [CoroutineScope].
 * See the documentation of [CoroutineScope] for details.
 *
 * Accessing this property in general code is not recommended for any purposes
 * except accessing the [Job] instance for advanced usages.
 */
@property (readonly) id<TCSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol TCSDKKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol TCSDKKtor_ioCloseable <TCSDKKotlinAutoCloseable>
@required
@end


/**
 * A multiplatform asynchronous HTTP client that allows you to make requests, handle responses,
 * and extend its functionality with plugins such as authentication, JSON serialization, and more.
 *
 * # Creating client
 * To create a new client, you can call:
 * ```kotlin
 * val client = HttpClient()
 * ```
 * You can create as many clients as you need.
 *
 * If you no longer need the client, please consider closing it to release resources:
 * ```
 * client.close()
 * ```
 *
 * To learn more on how to create and configure an [HttpClient] see the tutorial page:
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * # Making API Requests
 * For every HTTP method (GET, POST, PUT, etc.), there is a corresponding function:
 * ```kotlin
 * val response: HttpResponse = client.get("https://ktor.io/")
 * val body = response.bodyAsText()
 * ```
 * See [Making HTTP requests](https://ktor.io/docs/client-requests.html) for more details.
 *
 * # Query Parameters
 * Add query parameters to your request using the `parameter` function:
 * ```kotlin
 * val response = client.get("https://google.com/search") {
 *     url {
 *         parameter("q", "REST API with Ktor")
 *     }
 * }
 * ```
 * For more information, refer to [Passing request parameters](https://ktor.io/docs/client-requests.html#parameters).
 *
 * # Adding Headers
 * Include headers in your request using the `headers` builder or the `header` function:
 * ```kotlin
 * val response = client.get("https://httpbin.org/bearer") {
 *     headers {
 *         append("Authorization", "Bearer your_token_here")
 *         append("Accept", "application/json")
 *     }
 * }
 * ```
 * Learn more at [Adding headers to a request](https://ktor.io/docs/client-requests.html#headers).
 *
 * # JSON Serialization
 * Add dependencies:
 * - io.ktor:ktor-client-content-negotiation:3.+
 * - io.ktor:ktor-serialization-kotlinx-json:3.+
 * Add Gradle plugin:
 * ```
 * plugins {
 *     kotlin("plugin.serialization")
 * }
 * ```
 *
 * Send and receive JSON data by installing the `ContentNegotiation` plugin with `kotlinx.serialization`:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 *
 * @Serializable
 * data class MyRequestType(val someData: String)
 *
 * @Serializable
 * data class MyResponseType(val someResponseData: String)
 *
 * val response: MyResponseType = client.post("https://api.example.com/data") {
 *     contentType(ContentType.Application.Json)
 *     setBody(MyRequestType(someData = "value"))
 * }.body()
 * ```
 * See [Serializing JSON data](https://ktor.io/docs/client-serialization.html) for maven configuration and other details.
 *
 * # Submitting Forms
 * Submit form data using `FormDataContent` or the `submitForm` function:
 * ```kotlin
 * // Using FormDataContent
 * val response = client.post("https://example.com/submit") {
 *     setBody(FormDataContent(Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }))
 * }
 *
 * // Or using submitForm
 * val response = client.submitForm(
 *     url = "https://example.com/submit",
 *     formParameters = Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }
 * )
 * ```
 * More information is available at [Submitting form parameters](https://ktor.io/docs/client-requests.html#form_parameters).
 *
 * # Handling Authentication
 * Add dependency: io.ktor:ktor-client-auth:3.+
 *
 * Use the `Auth` plugin to handle various authentication schemes like Basic or Bearer token authentication:
 * ```kotlin
 * val client = HttpClient {
 *     install(Auth) {
 *         bearer {
 *             loadTokens {
 *                 BearerTokens(accessToken = "your_access_token", refreshToken = "your_refresh_token")
 *             }
 *         }
 *     }
 * }
 *
 * val response = client.get("https://api.example.com/protected")
 * ```
 * Refer to [Client authentication](https://ktor.io/docs/client-auth.html) for more details.
 *
 * # Setting Timeouts and Retries
 * Configure timeouts and implement retry logic for your requests:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpTimeout) {
 *         requestTimeoutMillis = 10000
 *         connectTimeoutMillis = 5000
 *         socketTimeoutMillis = 15000
 *     }
 * }
 * ```
 *
 * For the request timeout:
 * ```kotlin
 * client.get("") {
 *     timeout {
 *         requestTimeoutMillis = 1000
 *     }
 * }
 * ```
 * See [Timeout](https://ktor.io/docs/client-timeout.html) for more information.
 *
 * # Handling Cookies
 *
 * Manage cookies automatically by installing the `HttpCookies` plugin:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpCookies) {
 *         storage = AcceptAllCookiesStorage()
 *     }
 * }
 *
 * // Accessing cookies
 * val cookies: List<Cookie> = client.cookies("https://example.com")
 * ```
 * Learn more at [Cookies](https://ktor.io/docs/client-cookies.html).
 *
 * # Uploading Files
 * Upload files using multipart/form-data requests:
 * ```kotlin
 * client.submitFormWithBinaryData(
 *      url = "https://example.com/upload",
 *      formData = formData {
 *          append("description", "File upload example")
 *          append("file", {
 *              File("path/to/file.txt").readChannel()
 *          })
 *      }
 *  )
 *
 * See [Uploading data](https://ktor.io/docs/client-requests.html#upload_file) for details.
 *
 * # Using WebSockets
 *
 * Communicate over WebSockets using the `webSocket` function:
 * ```kotlin
 * client.webSocket("wss://echo.websocket.org") {
 *     send(Frame.Text("Hello, WebSocket!"))
 *     val frame = incoming.receive()
 *     if (frame is Frame.Text) {
 *         println("Received: ${frame.readText()}")
 *     }
 * }
 * ```
 * Learn more at [Client WebSockets](https://ktor.io/docs/client-websockets.html).
 *
 * # Error Handling
 * Handle exceptions and HTTP error responses gracefully:
 * val client = HttpClient {
 *     HttpResponseValidator {
 *         validateResponse { response ->
 *             val statusCode = response.status.value
 *             when (statusCode) {
 *                 in 300..399 -> error("Redirects are not allowed")
 *             }
 *         }
 *     }
 * }
 * See [Error handling](https://ktor.io/docs/client-response-validation.html) for more information.
 *
 * # Configuring SSL/TLS
 *
 * Customize SSL/TLS settings for secure connections is engine-specific. Please refer to the following page for
 * the details: [Client SSL/TLS](https://ktor.io/docs/client-ssl.html).
 *
 * # Using Proxies
 * Route requests through an HTTP or SOCKS proxy:
 * ```kotlin
 * val client = HttpClient() {
 *     engine {
 *         proxy = ProxyBuilder.http("http://proxy.example.com:8080")
 *         // For a SOCKS proxy:
 *         // proxy = ProxyBuilder.socks(host = "proxy.example.com", port = 1080)
 *     }
 * }
 * ```
 * See [Using a proxy](https://ktor.io/docs/client-proxy.html) for details.
 *
 * # Streaming Data
 *
 * Stream large data efficiently without loading it entirely into memory.
 *
 * Stream request:
 * ```kotlin
 * val response = client.post("https://example.com/upload") {
 *      setBody(object: OutgoingContent.WriteChannelContent() {
 *          override suspend fun writeTo(channel: ByteWriteChannel) {
 *              repeat(1000) {
 *                  channel.writeString("Hello!")
 *              }
 *          }
 *      })
 * }
 * ```
 *
 * Stream response:
 * ```kotlin
 * client.prepareGet("https://example.com/largefile.zip").execute { response ->
 *     val channel: ByteReadChannel = response.bodyAsChannel()
 *
 *     while (!channel.exhausted()) {
 *         val chunk = channel.readBuffer()
 *         // ...
 *     }
 * }
 * ```
 * Learn more at [Streaming data](https://ktor.io/docs/client-responses.html#streaming).
 *
 * # Using SSE
 * Server-Sent Events (SSE) is a technology that allows a server to continuously push events to a client over an HTTP
 * connection. It's particularly useful in cases where the server needs to send event-based updates without requiring
 * the client to repeatedly poll the server.
 *
 * Install the plugin:
 * ```kotlin
 * val client = HttpClient(CIO) {
 *     install(SSE)
 * }
 * ```
 *
 * ```
 * client.sse(host = "0.0.0.0", port = 8080, path = "/events") {
 *     while (true) {
 *         for (event in incoming) {
 *             println("Event from server:")
 *             println(event)
 *         }
 *     }
 * }
 * ```
 *
 * Visit [Using SSE](https://ktor.io/docs/client-server-sent-events.html#install_plugin) to learn more.
 *
 * # Customizing a client with plugins
 * To extend out-of-the-box functionality, you can install plugins for a Ktor client:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 * ```
 *
 * There are many plugins available out of the box, and you can write your own. See
 * [Create custom client plugins](https://ktor.io/docs/client-custom-plugins.html) to learn more.
 *
 * # Service Loader and Default Engine
 * On JVM, calling `HttpClient()` without specifying an engine uses a service loader mechanism to
 * determine the appropriate default engine. This can introduce a performance overhead, especially on
 * slower devices, such as Android.
 *
 * **Performance Note**: If you are targeting platforms where initialization speed is critical,
 * consider explicitly specifying an engine to avoid the service loader lookup.
 *
 * Example with manual engine specification:
 * ```
 * val client = HttpClient(Apache5) // Explicitly uses Apache5 engine, bypassing service loader
 * ```
 *
 * By directly setting the engine (e.g., `Apache5`, `OkHttp`), you can optimize startup performance
 * by preventing the default service loader mechanism.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface TCSDKKtor_client_coreHttpClient : TCSDKBase <TCSDKKotlinx_coroutines_coreCoroutineScope, TCSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<TCSDKKtor_client_coreHttpClientEngine>)engine userConfig:(TCSDKKtor_client_coreHttpClientConfig<TCSDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));

/**
 * Initiates the shutdown process for the `HttpClient`. This is a non-blocking call, which
 * means it returns immediately and begins the client closure in the background.
 *
 * ## Usage
 * ```
 * val client = HttpClient()
 * client.close()
 * client.coroutineContext.job.join() // Waits for complete termination if necessary
 * ```
 *
 * ## Important Notes
 * - **Non-blocking**: `close()` only starts the closing process and does not wait for it to complete.
 * - **Coroutine Context**: To wait for all client resources to be freed, use `client.coroutineContext.job.join()`
 *   or `client.coroutineContext.cancel()` to terminate ongoing tasks.
 * - **Manual Engine Management**: If a custom `engine` was manually created, it must be closed explicitly
 *   after calling `client.close()` to release all resources.
 *
 * Example with custom engine management:
 * ```
 * val engine = HttpClientEngine() // Custom engine instance
 * val client = HttpClient(engine)
 *
 * client.close()
 * engine.close() // Ensure manually created engine is also closed
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.close)
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Returns a new [HttpClient] by copying this client's configuration
 * and additionally configured by the [block] parameter.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.config)
 */
- (TCSDKKtor_client_coreHttpClient *)configBlock:(void (^)(TCSDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 * Checks if the specified [capability] is supported by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.isSupported)
 */
- (BOOL)isSupportedCapability:(id<TCSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Typed attributes used as a lightweight container for this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.attributes)
 */
@property (readonly) id<TCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<TCSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<TCSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));

/**
 * Provides access to the client's engine configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.engineConfig)
 */
@property (readonly) TCSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));

/**
 * Provides access to the events of the client's lifecycle.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.monitor)
 */
@property (readonly) TCSDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));

/**
 * A pipeline used for receiving a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.receivePipeline)
 */
@property (readonly) TCSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));

/**
 * A pipeline used for processing all requests sent by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.requestPipeline)
 */
@property (readonly) TCSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));

/**
 * A pipeline used for processing all responses sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.responsePipeline)
 */
@property (readonly) TCSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));

/**
 * A pipeline used for sending a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.sendPipeline)
 */
@property (readonly) TCSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end


/**
 * A _hot_ [Flow] that shares emitted values among all its collectors in a broadcast fashion, so that all collectors
 * get all emitted values. A shared flow is called _hot_ because its active instance exists independently of the
 * presence of collectors. This is opposed to a regular [Flow], such as defined by the [`flow { ... }`][flow] function,
 * which is _cold_ and is started separately for each collector.
 *
 * **Shared flow never completes**. A call to [Flow.collect] on a shared flow never completes normally, and
 * neither does a coroutine started by the [Flow.launchIn] function. An active collector of a shared flow is called a _subscriber_.
 *
 * A subscriber of a shared flow can be cancelled. This usually happens when the scope in which the coroutine is running
 * is cancelled. A subscriber to a shared flow is always [cancellable][Flow.cancellable], and checks for
 * cancellation before each emission. Note that most terminal operators like [Flow.toList] would also not complete,
 * when applied to a shared flow, but flow-truncating operators like [Flow.take] and [Flow.takeWhile] can be used on a
 * shared flow to turn it into a completing one.
 *
 * A [mutable shared flow][MutableSharedFlow] is created using the [MutableSharedFlow(...)] constructor function.
 * Its state can be updated by [emitting][MutableSharedFlow.emit] values to it and performing other operations.
 * See the [MutableSharedFlow] documentation for details.
 *
 * [SharedFlow] is useful for broadcasting events that happen inside an application to subscribers that can come and go.
 * For example, the following class encapsulates an event bus that distributes events to all subscribers
 * in a _rendezvous_ manner, suspending until all subscribers receive emitted event:
 *
 * ```
 * class EventBus {
 *     private val _events = MutableSharedFlow<Event>() // private mutable shared flow
 *     val events = _events.asSharedFlow() // publicly exposed as read-only shared flow
 *
 *     suspend fun produceEvent(event: Event) {
 *         _events.emit(event) // suspends until all subscribers receive it
 *     }
 * }
 * ```
 *
 * As an alternative to the above usage with the `MutableSharedFlow(...)` constructor function,
 * any _cold_ [Flow] can be converted to a shared flow using the [shareIn] operator.
 *
 * There is a specialized implementation of shared flow for the case where the most recent state value needs
 * to be shared. See [StateFlow] for details.
 *
 * ### Replay cache and buffer
 *
 * A shared flow keeps a specific number of the most recent values in its _replay cache_. Every new subscriber first
 * gets the values from the replay cache and then gets new emitted values. The maximum size of the replay cache is
 * specified when the shared flow is created by the `replay` parameter. A snapshot of the current replay cache
 * is available via the [replayCache] property and it can be reset with the [MutableSharedFlow.resetReplayCache] function.
 *
 * A replay cache also provides buffer for emissions to the shared flow, allowing slow subscribers to
 * get values from the buffer without suspending emitters. The buffer space determines how much slow subscribers
 * can lag from the fast ones. When creating a shared flow, additional buffer capacity beyond replay can be reserved
 * using the `extraBufferCapacity` parameter.
 *
 * A shared flow with a buffer can be configured to avoid suspension of emitters on buffer overflow using
 * the `onBufferOverflow` parameter, which is equal to one of the entries of the [BufferOverflow] enum. When a strategy other
 * than [SUSPENDED][BufferOverflow.SUSPEND] is configured, emissions to the shared flow never suspend.
 *
 * **Buffer overflow condition can happen only when there is at least one subscriber that is not ready to accept
 * the new value.**  In the absence of subscribers only the most recent `replay` values are stored and the buffer
 * overflow behavior is never triggered and has no effect. In particular, in the absence of subscribers emitter never
 * suspends despite [BufferOverflow.SUSPEND] option and [BufferOverflow.DROP_LATEST] option does not have effect either.
 * Essentially, the behavior in the absence of subscribers is always similar to [BufferOverflow.DROP_OLDEST],
 * but the buffer is just of `replay` size (without any `extraBufferCapacity`).
 *
 * ### Unbuffered shared flow
 *
 * A default implementation of a shared flow that is created with `MutableSharedFlow()` constructor function
 * without parameters has no replay cache nor additional buffer.
 * [emit][MutableSharedFlow.emit] call to such a shared flow suspends until all subscribers receive the emitted value
 * and returns immediately if there are no subscribers.
 * Thus, [tryEmit][MutableSharedFlow.tryEmit] call succeeds and returns `true` only if
 * there are no subscribers (in which case the emitted value is immediately lost).
 *
 * ### SharedFlow vs BroadcastChannel
 *
 * Conceptually shared flow is similar to [BroadcastChannel][BroadcastChannel]
 * and is designed to completely replace it.
 * It has the following important differences:
 *
 * - `SharedFlow` is simpler, because it does not have to implement all the [Channel] APIs, which allows
 *   for faster and simpler implementation.
 * - `SharedFlow` supports configurable replay and buffer overflow strategy.
 * - `SharedFlow` has a clear separation into a read-only `SharedFlow` interface and a [MutableSharedFlow].
 * - `SharedFlow` cannot be closed like `BroadcastChannel` and can never represent a failure.
 *   All errors and completion signals should be explicitly _materialized_ if needed.
 *
 * To migrate [BroadcastChannel] usage to [SharedFlow], start by replacing usages of the `BroadcastChannel(capacity)`
 * constructor with `MutableSharedFlow(0, extraBufferCapacity=capacity)` (broadcast channel does not replay
 * values to new subscribers). Replace [send][BroadcastChannel.send] and [trySend][BroadcastChannel.trySend] calls
 * with [emit][MutableStateFlow.emit] and [tryEmit][MutableStateFlow.tryEmit], and convert subscribers' code to flow operators.
 *
 * ### Concurrency
 *
 * All methods of shared flow are **thread-safe** and can be safely invoked from concurrent coroutines without
 * external synchronization.
 *
 * ### Operator fusion
 *
 * Application of [flowOn][Flow.flowOn], [buffer] with [RENDEZVOUS][Channel.RENDEZVOUS] capacity,
 * or [cancellable] operators to a shared flow has no effect.
 *
 * ### Implementation notes
 *
 * Shared flow implementation uses a lock to ensure thread-safety, but suspending collector and emitter coroutines are
 * resumed outside of this lock to avoid deadlocks when using unconfined coroutines. Adding new subscribers
 * has `O(1)` amortized cost, but emitting has `O(N)` cost, where `N` is the number of subscribers.
 *
 * ### Not stable for inheritance
 *
 * **The `SharedFlow` interface is not stable for inheritance in 3rd party libraries**, as new methods
 * might be added to this interface in the future, but is stable for use.
 * Use the `MutableSharedFlow(replay, ...)` constructor function to create an implementation.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/coroutines/ExperimentalForInheritanceCoroutinesApi)])
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol TCSDKKotlinx_coroutines_coreSharedFlow <TCSDKKotlinx_coroutines_coreFlow>
@required

/**
 * A snapshot of the replay cache.
 */
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end


/**
 * A [SharedFlow] that represents a read-only state with a single updatable data [value] that emits updates
 * to the value to its collectors. A state flow is a _hot_ flow because its active instance exists independently
 * of the presence of collectors. Its current value can be retrieved via the [value] property.
 *
 * **State flow never completes**. A call to [Flow.collect] on a state flow never completes normally, and
 * neither does a coroutine started by the [Flow.launchIn] function. An active collector of a state flow is called a _subscriber_.
 *
 * A [mutable state flow][MutableStateFlow] is created using `MutableStateFlow(value)` constructor function with
 * the initial value. The value of mutable state flow can be updated by setting its [value] property.
 * Updates to the [value] are always [conflated][Flow.conflate]. So a slow collector skips fast updates,
 * but always collects the most recently emitted value.
 *
 * [StateFlow] is useful as a data-model class to represent any kind of state.
 * Derived values can be defined using various operators on the flows, with [combine] operator being especially
 * useful to combine values from multiple state flows using arbitrary functions.
 *
 * For example, the following class encapsulates an integer state and increments its value on each call to `inc`:
 *
 * ```
 * class CounterModel {
 *     private val _counter = MutableStateFlow(0) // private mutable state flow
 *     val counter = _counter.asStateFlow() // publicly exposed as read-only state flow
 *
 *     fun inc() {
 *         _counter.update { count -> count + 1 } // atomic, safe for concurrent use
 *     }
 * }
 * ```
 *
 * Having two instances of the above `CounterModel` class one can define the sum of their counters like this:
 *
 * ```
 * val aModel = CounterModel()
 * val bModel = CounterModel()
 * val sumFlow: Flow<Int> = aModel.counter.combine(bModel.counter) { a, b -> a + b }
 * ```
 *
 * As an alternative to the above usage with the `MutableStateFlow(...)` constructor function,
 * any _cold_ [Flow] can be converted to a state flow using the [stateIn] operator.
 *
 * ### Strong equality-based conflation
 *
 * Values in state flow are conflated using [Any.equals] comparison in a similar way to
 * [distinctUntilChanged] operator. It is used to conflate incoming updates
 * to [value][MutableStateFlow.value] in [MutableStateFlow] and to suppress emission of the values to collectors
 * when new value is equal to the previously emitted one. State flow behavior with classes that violate
 * the contract for [Any.equals] is unspecified.
 *
 * ### State flow is a shared flow
 *
 * State flow is a special-purpose, high-performance, and efficient implementation of [SharedFlow] for the narrow,
 * but widely used case of sharing a state. See the [SharedFlow] documentation for the basic rules,
 * constraints, and operators that are applicable to all shared flows.
 *
 * State flow always has an initial value, replays one most recent value to new subscribers, does not buffer any
 * more values, but keeps the last emitted one, and does not support [resetReplayCache][MutableSharedFlow.resetReplayCache].
 * A state flow behaves identically to a shared flow when it is created
 * with the following parameters and the [distinctUntilChanged] operator is applied to it:
 *
 * ```
 * // MutableStateFlow(initialValue) is a shared flow with the following parameters:
 * val shared = MutableSharedFlow(
 *     replay = 1,
 *     onBufferOverflow = BufferOverflow.DROP_OLDEST
 * )
 * shared.tryEmit(initialValue) // emit the initial value
 * val state = shared.distinctUntilChanged() // get StateFlow-like behavior
 * ```
 *
 * Use [SharedFlow] when you need a [StateFlow] with tweaks in its behavior such as extra buffering, replaying more
 * values, or omitting the initial value.
 *
 * ### StateFlow vs ConflatedBroadcastChannel
 *
 * Conceptually, state flow is similar to [ConflatedBroadcastChannel]
 * and is designed to completely replace it.
 * It has the following important differences:
 *
 * - `StateFlow` is simpler, because it does not have to implement all the [Channel] APIs, which allows
 *   for faster, garbage-free implementation, unlike `ConflatedBroadcastChannel` implementation that
 *   allocates objects on each emitted value.
 * - `StateFlow` always has a value which can be safely read at any time via [value] property.
 *   Unlike `ConflatedBroadcastChannel`, there is no way to create a state flow without a value.
 * - `StateFlow` has a clear separation into a read-only `StateFlow` interface and a [MutableStateFlow].
 * - `StateFlow` conflation is based on equality like [distinctUntilChanged] operator,
 *   unlike conflation in `ConflatedBroadcastChannel` that is based on reference identity.
 * - `StateFlow` cannot be closed like `ConflatedBroadcastChannel` and can never represent a failure.
 *   All errors and completion signals should be explicitly _materialized_ if needed.
 *
 * `StateFlow` is designed to better cover typical use-cases of keeping track of state changes in time, taking
 * more pragmatic design choices for the sake of convenience.
 *
 * To migrate [ConflatedBroadcastChannel] usage to [StateFlow], start by replacing usages of the `ConflatedBroadcastChannel()`
 * constructor with `MutableStateFlow(initialValue)`, using `null` as an initial value if you don't have one.
 * Replace [send][ConflatedBroadcastChannel.send] and [trySend][ConflatedBroadcastChannel.trySend] calls
 * with updates to the state flow's [MutableStateFlow.value], and convert subscribers' code to flow operators.
 * You can use the [filterNotNull] operator to mimic behavior of a `ConflatedBroadcastChannel` without initial value.
 *
 * ### Concurrency
 *
 * All methods of state flow are **thread-safe** and can be safely invoked from concurrent coroutines without
 * external synchronization.
 *
 * ### Operator fusion
 *
 * Application of [flowOn][Flow.flowOn], [conflate][Flow.conflate],
 * [buffer] with [CONFLATED][Channel.CONFLATED] or [RENDEZVOUS][Channel.RENDEZVOUS] capacity,
 * [distinctUntilChanged][Flow.distinctUntilChanged], or [cancellable] operators to a state flow has no effect.
 *
 * ### Implementation notes
 *
 * State flow implementation is optimized for memory consumption and allocation-freedom. It uses a lock to ensure
 * thread-safety, but suspending collector coroutines are resumed outside of this lock to avoid dead-locks when
 * using unconfined coroutines. Adding new subscribers has `O(1)` amortized cost, but updating a [value] has `O(N)`
 * cost, where `N` is the number of active subscribers.
 *
 * ### Not stable for inheritance
 *
 * **`The StateFlow` interface is not stable for inheritance in 3rd party libraries**, as new methods
 * might be added to this interface in the future, but is stable for use.
 * Use the `MutableStateFlow(value)` constructor function to create an implementation.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/coroutines/ExperimentalForInheritanceCoroutinesApi)])
*/
__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol TCSDKKotlinx_coroutines_coreStateFlow <TCSDKKotlinx_coroutines_coreSharedFlow>
@required

/**
 * The current value of this state flow.
 */
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * [FlowCollector] is used as an intermediate or a terminal collector of the flow and represents
 * an entity that accepts values emitted by the [Flow].
 *
 * This interface should usually not be implemented directly, but rather used as a receiver in a [flow] builder when implementing a custom operator,
 * or with SAM-conversion.
 * Implementations of this interface are not thread-safe.
 *
 * Example of usage:
 *
 * ```
 * val flow = getMyEvents()
 * try {
 *     flow.collect { value ->
 *         println("Received $value")
 *     }
 *     println("My events are consumed successfully")
 * } catch (e: Throwable) {
 *     println("Exception from the flow: $e")
 * }
 * ```
 */
__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol TCSDKKotlinx_coroutines_coreFlowCollector
@required

/**
 * Collects the value emitted by the upstream.
 * This method is not thread-safe and should not be invoked concurrently.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end


/**
 * A mutable [SharedFlow] that provides functions to [emit] values to the flow.
 * An instance of `MutableSharedFlow` with the given configuration parameters can be created using `MutableSharedFlow(...)`
 * constructor function.
 *
 * See the [SharedFlow] documentation for details on shared flows.
 *
 * `MutableSharedFlow` is a [SharedFlow] that also provides the abilities to [emit] a value,
 * to [tryEmit] without suspension if possible, to track the [subscriptionCount],
 * and to [resetReplayCache].
 *
 * ### Concurrency
 *
 * All methods of shared flow are **thread-safe** and can be safely invoked from concurrent coroutines without
 * external synchronization.
 *
 * ### Not stable for inheritance
 *
 * **The `MutableSharedFlow` interface is not stable for inheritance in 3rd party libraries**, as new methods
 * might be added to this interface in the future, but is stable for use.
 * Use the `MutableSharedFlow(...)` constructor function to create an implementation.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/coroutines/ExperimentalForInheritanceCoroutinesApi)])
*/
__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol TCSDKKotlinx_coroutines_coreMutableSharedFlow <TCSDKKotlinx_coroutines_coreSharedFlow, TCSDKKotlinx_coroutines_coreFlowCollector>
@required

/**
 * Resets the [replayCache] of this shared flow to an empty state.
 * New subscribers will be receiving only the values that were emitted after this call,
 * while old subscribers will still be receiving previously buffered values.
 * To reset a shared flow to an initial value, emit the value after this call.
 *
 * On a [MutableStateFlow], which always contains a single value, this function is not
 * supported, and throws an [UnsupportedOperationException]. To reset a [MutableStateFlow]
 * to an initial value, just update its [value][MutableStateFlow.value].
 *
 * This method is **thread-safe** and can be safely invoked from concurrent coroutines without
 * external synchronization.
 *
 * **Note: This is an experimental api.** This function may be removed or renamed in the future.
 *
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));

/**
 * Tries to emit a [value] to this shared flow without suspending. It returns `true` if the value was
 * emitted successfully (see below). When this function returns `false`, it means that a call to a plain [emit]
 * function would suspend until there is buffer space available.
 *
 * This call can return `false` only when the [BufferOverflow] strategy is
 * [SUSPEND][BufferOverflow.SUSPEND] **and** there are subscribers collecting this shared flow.
 *
 * If there are no subscribers, the buffer is not used.
 * Instead, the most recently emitted value is simply stored into
 * the replay cache if one was configured, displacing the older elements there,
 * or dropped if no replay cache was configured. In any case, `tryEmit` returns `true`.
 *
 * This method is **thread-safe** and can be safely invoked from concurrent coroutines without
 * external synchronization.
 */
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));

/**
 * The number of subscribers (active collectors) to this shared flow.
 *
 * The integer in the resulting [StateFlow] is not negative and starts with zero for a freshly created
 * shared flow.
 *
 * This state can be used to react to changes in the number of subscriptions to this shared flow.
 * For example, if you need to call `onActive` when the first subscriber appears and `onInactive`
 * when the last one disappears, you can set it up like this:
 *
 * ```
 * sharedFlow.subscriptionCount
 *     .map { count -> count > 0 } // map count into active/inactive flag
 *     .distinctUntilChanged() // only react to true<->false changes
 *     .onEach { isActive -> // configure an action
 *         if (isActive) onActive() else onInactive()
 *     }
 *     .launchIn(scope) // launch it
 * ```
 *
 * Usually, [StateFlow] conflates values, but [subscriptionCount] is not conflated.
 * This is done so that any subscribers that need to be notified when subscribers appear do
 * reliably observe it. With conflation, if a single subscriber appeared and immediately left, those
 * collecting [subscriptionCount] could fail to notice it due to `0` immediately conflating the
 * subscription count.
 */
@property (readonly) id<TCSDKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end


/**
 * A mutable [StateFlow] that provides a setter for [value].
 * An instance of `MutableStateFlow` with the given initial `value` can be created using
 * `MutableStateFlow(value)` constructor function.
 * See the [StateFlow] documentation for details on state flows.
 * Note that all emission-related operators, such as [value]'s setter, [emit], and [tryEmit], are conflated using [Any.equals].
 *
 * ### Not stable for inheritance
 *
 * **The `MutableStateFlow` interface is not stable for inheritance in 3rd party libraries**, as new methods
 * might be added to this interface in the future, but is stable for use.
 * Use the `MutableStateFlow()` constructor function to create an implementation.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/coroutines/ExperimentalForInheritanceCoroutinesApi)])
*/
__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol TCSDKKotlinx_coroutines_coreMutableStateFlow <TCSDKKotlinx_coroutines_coreStateFlow, TCSDKKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));

/**
 * Atomically compares the current [value] with [expect] and sets it to [update] if it is equal to [expect].
 * The result is `true` if the [value] was set to [update] and `false` otherwise.
 *
 * This function use a regular comparison using [Any.equals]. If both [expect] and [update] are equal to the
 * current [value], this function returns `true`, but it does not actually change the reference that is
 * stored in the [value].
 *
 * This method is **thread-safe** and can be safely invoked from concurrent coroutines without
 * external synchronization.
 */
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface TCSDKKotlinUnit : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol TCSDKRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end


/**
 * A SQL transaction. Can be created through the driver via [SqlDriver.newTransaction] or
 * through an implementation of [Transacter] by calling [Transacter.transaction].
 *
 * A transaction is expected never to escape the thread it is created on, or more specifically,
 * never to escape the lambda scope of [Transacter.transaction] and [Transacter.transactionWithResult].
 */
__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface TCSDKRuntimeTransacterTransaction : TCSDKBase <TCSDKRuntimeTransactionCallbacks>

/**
 * A SQL transaction. Can be created through the driver via [SqlDriver.newTransaction] or
 * through an implementation of [Transacter] by calling [Transacter.transaction].
 *
 * A transaction is expected never to escape the thread it is created on, or more specifically,
 * never to escape the lambda scope of [Transacter.transaction] and [Transacter.transactionWithResult].
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A SQL transaction. Can be created through the driver via [SqlDriver.newTransaction] or
 * through an implementation of [Transacter] by calling [Transacter.transaction].
 *
 * A transaction is expected never to escape the thread it is created on, or more specifically,
 * never to escape the lambda scope of [Transacter.transaction] and [Transacter.transactionWithResult].
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Queues [function] to be run after this transaction successfully commits.
 */
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));

/**
 * Queues [function] to be run after this transaction rolls back.
 */
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * Signal to the underlying SQL driver that this transaction should be finished.
 *
 * @param successful Whether the transaction completed successfully or not.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<TCSDKRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * The parent transaction, if there is any.
 *
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TCSDKRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol TCSDKRuntimeTransactionWithoutReturn <TCSDKRuntimeTransactionCallbacks>
@required

/**
 * Rolls back this transaction.
 */
- (void)rollback __attribute__((swift_name("rollback()")));

/**
 * Begin an inner transaction.
 */
- (void)transactionBody:(void (^)(id<TCSDKRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol TCSDKRuntimeTransactionWithReturn <TCSDKRuntimeTransactionCallbacks>
@required

/**
 * Rolls back this transaction.
 */
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));

/**
 * Begin an inner transaction.
 */
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<TCSDKRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface TCSDKRuntimeExecutableQuery<__covariant RowType> : TCSDKBase
- (instancetype)initWithMapper:(RowType (^)(id<TCSDKRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));

/**
 * Execute the underlying statement. The resulting cursor is passed to the given block.
 *
 * The cursor is closed automatically after the block returns.
 */
- (id<TCSDKRuntimeQueryResult>)executeMapper:(id<TCSDKRuntimeQueryResult> (^)(id<TCSDKRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));

/**
 * @return The result set of the underlying SQL statement as a list of [RowType].
 */
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));

/**
 * @return The only row of the result set for the underlying SQL statement as a non null
 *   [RowType].
 *
 * @throws NullPointerException if when executed this query has no rows in its result set.
 * @throws IllegalStateException if when executed this query has multiple rows in its result set.
 */
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));

/**
 * @return The first row of the result set for the underlying SQL statement as a non null
 *   [RowType] or null if the result set has no rows.
 *
 * @throws IllegalStateException if when executed this query has multiple rows in its result set.
 */
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<TCSDKRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end


/**
 * A listenable, typed query generated by SQLDelight.
 *
 * @param RowType the type that this query can map its result set to.
 *
 * @property mapper The mapper this [Query] was created with, which can convert a row in the SQL
 *   cursor returned by [execute] to [RowType].
 */
__attribute__((swift_name("RuntimeQuery")))
@interface TCSDKRuntimeQuery<__covariant RowType> : TCSDKRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<TCSDKRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));

/**
 * Register a listener to be notified of future changes in the result set.
 */
- (void)addListenerListener:(id<TCSDKRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));

/**
 * Remove a listener to no longer be notified of future changes in the result set.
 */
- (void)removeListenerListener:(id<TCSDKRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end


/**
 * API for creating and migrating a SQL database. The implementation of this interface is generated
 * by SQLDelight.
 *
 * @param T Says whether the generated code for this database is asynchronous or synchronous. Most
 *          implementations of [app.cash.sqldelight.SqlDriver] will require one or the other, which
 *          is enforced by requesting the correlated type of Schema ([QueryResult.Value] for
 *          a synchronous runtime, [QueryResult.AsyncValue] for asynchronous). In a multiplatform
 *          environment where you have some drivers that use an asynchronous runtime, and some that
 *          require synchronous, you can generate an asynchronous runtime and then pass a
 *          synchronous schema to synchronous drivers with [SqlSchema.synchronous()]
 */
__attribute__((swift_name("RuntimeSqlSchema")))
@protocol TCSDKRuntimeSqlSchema
@required

/**
 * Use [driver] to create the schema from scratch. Assumes no existing database state.
 */
- (id<TCSDKRuntimeQueryResult>)createDriver:(id<TCSDKRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));

/**
 * Use [driver] to migrate from schema [oldVersion] to [newVersion].
 * Each of the [callbacks] are executed during the migration whenever the upgrade to the version specified by
 * [AfterVersion.afterVersion] has been completed.
 */
- (id<TCSDKRuntimeQueryResult>)migrateDriver:(id<TCSDKRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(TCSDKKotlinArray<TCSDKRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));

/**
 * The version of this schema.
 */
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol TCSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol TCSDKKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<TCSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<TCSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<TCSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<TCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<TCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) TCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol TCSDKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<TCSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<TCSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<TCSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) TCSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol TCSDKKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<TCSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<TCSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (TCSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<TCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<TCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) TCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * An interface for listening to changes in the result set of a query.
 */
__attribute__((swift_name("RuntimeQueryListener")))
@protocol TCSDKRuntimeQueryListener
@required

/**
 * Called whenever the query this listener was attached to is dirtied.
 *
 * Calls are made synchronously on the thread where the updated occurred, after the update applied successfully.
 */
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end


/**
 * Represents a SQL statement that has been prepared by a driver to be executed.
 *
 * This type is not thread safe unless otherwise specified by the driver emitting these.
 *
 * Prepared statements should not be cached by client code. Drivers can implement caching by using
 * the integer identifier passed to [SqlDriver.execute] or [SqlDriver.executeQuery].
 * Client code can pass the same identifier to that method to request that the prepared statement
 * is cached.
 */
__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol TCSDKRuntimeSqlPreparedStatement
@required

/**
 * Bind [boolean] to the underlying statement at [index].
 */
- (void)bindBooleanIndex:(int32_t)index boolean:(TCSDKBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));

/**
 * Bind [bytes] to the underlying statement at [index].
 */
- (void)bindBytesIndex:(int32_t)index bytes:(TCSDKKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));

/**
 * Bind [double] to the underlying statement at [index].
 */
- (void)bindDoubleIndex:(int32_t)index double:(TCSDKDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));

/**
 * Bind [long] to the underlying statement at [index].
 */
- (void)bindLongIndex:(int32_t)index long:(TCSDKLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));

/**
 * Bind [string] to the underlying statement at [index].
 */
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end


/**
 * Represents a SQL result set which can be iterated through with [next]. Initially the cursor will
 * not point to any row, and calling [next] once will iterate to the first row.
 */
__attribute__((swift_name("RuntimeSqlCursor")))
@protocol TCSDKRuntimeSqlCursor
@required

/**
 * @return The boolean or null value of column [index] for the current row of the result set.
 */
- (TCSDKBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));

/**
 * @return The bytes or null value of column [index] for the current row of the result set.
 */
- (TCSDKKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));

/**
 * @return The double or null value of column [index] for the current row of the result set.
 */
- (TCSDKDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));

/**
 * @return The int or null value of column [index] for the current row of the result set.
 */
- (TCSDKLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));

/**
 * @return The string or null value of column [index] for the current row of the result set.
 */
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));

/**
 * Move to the next row in the result set.
 *
 * @return true if the cursor successfully moved to a new row, false if there was no row to
 *   iterate to.
 */
- (id<TCSDKRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol TCSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<TCSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<TCSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<TCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<TCSDKKotlinCoroutineContext>)minusKeyKey:(id<TCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<TCSDKKotlinCoroutineContext>)plusContext:(id<TCSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end


/**
 * Serves as the base interface for an [HttpClient]'s engine.
 *
 * An `HttpClientEngine` represents the underlying network implementation that
 * performs HTTP requests and handles responses.
 * Developers can implement this interface to create custom engines for use with [HttpClient].
 *
 * This interface provides a set of properties and methods that define the
 * contract for configuring, executing, and managing HTTP requests within the engine.
 *
 * For a base implementation that handles common engine functionality, see [HttpClientEngineBase].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol TCSDKKtor_client_coreHttpClientEngine <TCSDKKotlinx_coroutines_coreCoroutineScope, TCSDKKtor_ioCloseable>
@required

/**
 * Executes an HTTP request and produces an HTTP response.
 *
 * This function takes [HttpRequestData], which contains all details of the HTTP request,
 * and returns [HttpResponseData] with the server's response, including headers, status code, and body.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.execute)
 *
 * @param data The [HttpRequestData] representing the request to be executed.
 * @return An [HttpResponseData] object containing the server's response.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(TCSDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(TCSDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));

/**
 * Installs the engine into an [HttpClient].
 *
 * This method is called when the engine is being set up within an `HttpClient`.
 * Use it to register interceptors, validate configuration, or prepare the engine
 * for use with the client.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.install)
 *
 * @param client The [HttpClient] instance to which the engine is being installed.
 */
- (void)installClient:(TCSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Provides access to the engine's configuration via [HttpClientEngineConfig].
 *
 * The [config] object stores user-defined parameters or settings that control
 * how the engine operates. When creating a custom engine, this property
 * should return the specific configuration implementation.
 *
 * Example:
 * ```kotlin
 * override val config: HttpClientEngineConfig = CustomEngineConfig()
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.config)
 */
@property (readonly) TCSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));

/**
 * Specifies the [CoroutineDispatcher] for I/O operations in the engine.
 *
 * This dispatcher is used for all network-related operations, such as
 * sending requests and receiving responses.
 * By default, it should be optimized for I/O tasks.
 *
 * Example:
 * ```kotlin
 * override val dispatcher: CoroutineDispatcher = Dispatchers.IO
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.dispatcher)
 */
@property (readonly) TCSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Specifies the set of capabilities supported by this HTTP client engine.
 *
 * Capabilities provide a mechanism for plugins and other components to
 * determine whether the engine supports specific features such as timeouts,
 * WebSocket communication, HTTP/2, HTTP/3, or other advanced networking
 * capabilities. This allows seamless integration of features based on the
 * engine's functionality.
 *
 * Each capability is represented as an instance of [HttpClientEngineCapability],
 * which can carry additional metadata or configurations for the capability.
 *
 * Example:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(
 *     WebSocketCapability,
 *     Http2Capability,
 *     TimeoutCapability
 * )
 * ```
 *
 * **Usage in Plugins**:
 * Plugins can check if the engine supports a specific capability before
 * applying behavior:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket-specific settings
 * }
 * ```
 *
 * When implementing a custom engine, ensure this property accurately reflects
 * the engine's abilities to avoid unexpected plugin behavior or runtime errors.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.supportedCapabilities)
 */
@property (readonly) NSSet<id<TCSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end


/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface TCSDKKtor_client_coreHttpClientEngineConfig : TCSDKBase

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Allow specifying the coroutine dispatcher to use for IO operations.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.dispatcher)
 */
@property TCSDKKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Enables HTTP pipelining advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.pipelining)
 */
@property BOOL pipelining __attribute__((swift_name("pipelining")));

/**
 * Specifies a proxy address to use.
 * Uses a system proxy by default.
 *
 * You can learn more from [Proxy](https://ktor.io/docs/proxy.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.proxy)
 */
@property TCSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));

/**
 * Specifies network threads count advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.threadsCount)
 */
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end


/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface TCSDKKtor_client_coreHttpClientConfig<T> : TCSDKBase

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Clones this [HttpClientConfig] by duplicating all the [plugins] and [customInterceptors].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.clone)
 */
- (TCSDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));

/**
 * A builder for configuring engine-specific settings in [HttpClientEngineConfig],
 * such as dispatcher, thread count, proxy, and more.
 *
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>
 *     engine { // CIOEngineConfig.() -> Unit
 *         proxy = ProxyBuilder.http("proxy.example.com", 8080)
 *     }
 * ```
 *
 * You can learn more from [Engines](https://ktor.io/docs/http-client-engines.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.engine)
 */
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));

/**
 * Applies all the installed [plugins] and [customInterceptors] from this configuration
 * into the specified [client].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installClient:(TCSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Installs the specified [plugin] and optionally configures it using the [configure] block.
 *
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         // configuration block
 *         json()
 *     }
 * }
 * ```
 *
 * If the plugin is already installed, the configuration block will be applied to the existing configuration class.
 *
 * Learn more from [Plugins](https://ktor.io/docs/http-client-plugins.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installPlugin:(id<TCSDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));

/**
 * Installs an interceptor defined by [block].
 * The [key] parameter is used as a unique name, that also prevents installing duplicated interceptors.
 *
 * If the [key] is already used, the new interceptor will replace the old one.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installKey:(NSString *)key block:(void (^)(TCSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));

/**
 * Installs the specified [plugin] and optionally configures it using the [configure] block.
 * If the plugin is already installed, the configuration block will replace the existing configuration class.
 *
 * ```kotlin
 * val client = HttpClient {
 *     installOrReplace(ContentNegotiation) {
 *         // configuration block
 *         json()
 *     }
 * }
 * ```
 *
 * Learn more from [Plugins](https://ktor.io/docs/http-client-plugins.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.installOrReplace)
 */
- (void)installOrReplacePlugin:(id<TCSDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("installOrReplace(plugin:configure:)")));

/**
 * Installs the plugin from the [other] client's configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.plusAssign)
 */
- (void)plusAssignOther:(TCSDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));

/**
 * Development mode is no longer required all functionality is enabled by default. The property is safe to remove.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.developmentMode)
 */
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));

/**
 * Terminates [HttpClient.receivePipeline] if the status code is not successful (>=300).
 * Learn more from [Response validation](https://ktor.io/docs/response-validation.html).
 *
 * For more details, see the [HttpCallValidator] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.expectSuccess)
 */
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));

/**
 * Specifies whether the client redirects to URLs provided in the `Location` header.
 * You can disable redirections by setting this property to `false`.
 *
 * For an advanced redirection configuration, use the [HttpRedirect] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.followRedirects)
 */
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));

/**
 * Enables body transformations for many common types like [String], [ByteArray], [ByteReadChannel], etc.
 * These transformations are applied to the request and response bodies.
 *
 * The transformers will be used when the response body is received with a type:
 * ```kotlin
 * val client = HttpClient()
 * val bytes = client.get("https://ktor.io")
 *                   .body<ByteArray>()
 * ```
 *
 * This flag is enabled by default.
 * You might want to disable it if you want to write your own transformers or handle body manually.
 *
 * For more details, see the [defaultTransformers] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.useDefaultTransformers)
 */
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end


/**
 * Represents a capability that an [HttpClientEngine] can support, with [T] representing the type
 * of configuration or metadata associated with the capability.
 *
 * Capabilities are used to declare optional features or behaviors that an engine may support,
 * such as WebSocket communication, HTTP/2, or custom timeouts. They enable plugins and request
 * builders to configure engine-specific functionality by associating a capability with a
 * specific configuration.
 *
 * Capabilities can be set on a per-request basis using the `HttpRequestBuilder.setCapability` method,
 * allowing users to configure engine-specific behavior for individual requests.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineCapability)
 *
 * @param T The type of the configuration or metadata associated with this capability.
 *
 * Example:
 * Suppose you have a custom capability for WebSocket support that requires a specific configuration:
 * ```kotlin
 * object WebSocketCapability : HttpClientEngineCapability<WebSocketConfig>
 *
 * data class WebSocketConfig(val maxFrameSize: Int, val pingIntervalMillis: Long)
 * ```
 *
 * Setting a capability in a request:
 * ```kotlin
 * client.request {
 *     setCapability(WebSocketCapability, WebSocketConfig(
 *         maxFrameSize = 65536,
 *         pingIntervalMillis = 30000
 *     ))
 * }
 * ```
 *
 * Engine Example:
 * A custom engine implementation can declare support for specific capabilities in its `supportedCapabilities` property:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(WebSocketCapability)
 * ```
 *
 * Plugin Integration Example:
 * Plugins use capabilities to interact with engine-specific features. For example:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket behavior if supported by the engine
 * }
 * ```
 *
 * When creating a custom capability:
 * - Define a singleton object implementing `HttpClientEngineCapability`.
 * - Use the type parameter [T] to provide the associated configuration type or metadata.
 * - Ensure that engines supporting the capability handle the associated configuration properly.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol TCSDKKtor_client_coreHttpClientEngineCapability
@required
@end


/**
 * Map of attributes accessible by [AttributeKey] in a typed manner
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes)
 */
__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol TCSDKKtor_utilsAttributes
@required

/**
 * Gets a value of the attribute for the specified [key], or calls supplied [block] to compute its value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.computeIfAbsent)
 */
- (id)computeIfAbsentKey:(TCSDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));

/**
 * Checks if an attribute with the specified [key] exists
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.contains)
 */
- (BOOL)containsKey:(TCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));

/**
 * Gets a value of the attribute for the specified [key], or throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.get)
 */
- (id)getKey_:(TCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));

/**
 * Gets a value of the attribute for the specified [key], or return `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.getOrNull)
 */
- (id _Nullable)getOrNullKey:(TCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.put)
 */
- (void)putKey:(TCSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));

/**
 * Removes an attribute with the specified [key]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.remove)
 */
- (void)removeKey:(TCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.set)
 */
- (void)setKey:(TCSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.take)
 */
- (id)takeKey:(TCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, returns `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.takeOrNull)
 */
- (id _Nullable)takeOrNullKey:(TCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));

/**
 * Returns [List] of all [AttributeKey] instances in this map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.allKeys)
 */
@property (readonly) NSArray<TCSDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface TCSDKKtor_eventsEvents : TCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Raises the event specified by [definition] with the [value] and calls all handlers.
 *
 * Handlers are called in order of subscriptions.
 * If some handler throws an exception, all remaining handlers will still run. The exception will eventually be re-thrown.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.raise)
 */
- (void)raiseDefinition:(TCSDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));

/**
 * Subscribe [handler] to an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.subscribe)
 */
- (id<TCSDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(TCSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));

/**
 * Unsubscribe [handler] from an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.unsubscribe)
 */
- (void)unsubscribeDefinition:(TCSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end


/**
 * Represents an execution pipeline for asynchronous extensible computations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline)
 */
__attribute__((swift_name("Ktor_utilsPipeline")))
@interface TCSDKKtor_utilsPipeline<TSubject, TContext> : TCSDKBase
- (instancetype)initWithPhases:(TCSDKKotlinArray<TCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));

/**
 * Adds [phase] to the end of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.addPhase)
 */
- (void)addPhasePhase:(TCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));

/**
 * Invoked after an interceptor has been installed
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.afterIntercepted)
 */
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * Executes this pipeline in the given [context] and with the given [subject]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.execute)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));

/**
 * Inserts [phase] after the [reference] phase. If there are other phases inserted after [reference], then [phase]
 * will be inserted after them.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(a)
 * pipeline.insertPhaseAfter(a, b)
 * pipeline.insertPhaseAfter(a, c)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseAfter)
 */
- (void)insertPhaseAfterReference:(TCSDKKtor_utilsPipelinePhase *)reference phase:(TCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));

/**
 * Inserts [phase] before the [reference] phase.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(c)
 * pipeline.insertPhaseBefore(c, a)
 * pipeline.insertPhaseBefore(c, b)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseBefore)
 */
- (void)insertPhaseBeforeReference:(TCSDKKtor_utilsPipelinePhase *)reference phase:(TCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));

/**
 * Adds [block] to the [phase] of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.intercept)
 */
- (void)interceptPhase:(TCSDKKtor_utilsPipelinePhase *)phase block:(id<TCSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<TCSDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(TCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));

/**
 * Merges another pipeline into this pipeline, maintaining relative phases order
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.merge)
 */
- (void)mergeFrom:(TCSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(TCSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));

/**
 * Reset current pipeline from other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.resetFrom)
 */
- (void)resetFromFrom:(TCSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Provides common place to store pipeline attributes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.attributes)
 */
@property (readonly) id<TCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * Indicated if debug mode is enabled. In debug mode users will get more details in the stacktrace.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.developmentMode)
 */
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));

/**
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.isEmpty)
 *
 * @return `true` if there are no interceptors installed regardless number of phases
 */
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));

/**
 * Phases of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.items)
 */
@property (readonly) NSArray<TCSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end


/**
 * [HttpClient] Pipeline used for receiving [HttpResponse] without any processing.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface TCSDKKtor_client_coreHttpReceivePipeline : TCSDKKtor_utilsPipeline<TCSDKKtor_client_coreHttpResponse *, TCSDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(TCSDKKotlinArray<TCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(TCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for executing [HttpRequest].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface TCSDKKtor_client_coreHttpRequestPipeline : TCSDKKtor_utilsPipeline<id, TCSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(TCSDKKotlinArray<TCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(TCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * [HttpClient] Pipeline used for executing [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface TCSDKKtor_client_coreHttpResponsePipeline : TCSDKKtor_utilsPipeline<TCSDKKtor_client_coreHttpResponseContainer *, TCSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(TCSDKKotlinArray<TCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(TCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for sending [HttpRequest] to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface TCSDKKtor_client_coreHttpSendPipeline : TCSDKKtor_utilsPipeline<id, TCSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(TCSDKKotlinArray<TCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(TCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * Represents a block of code [block] that should be executed during a migration after the migration
 * has finished migrating to [afterVersion].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface TCSDKRuntimeAfterVersion : TCSDKBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<TCSDKRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<TCSDKRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol TCSDKKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<TCSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) TCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface TCSDKKotlinx_serialization_coreSerializersModule : TCSDKBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<TCSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TCSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<TCSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<TCSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TCSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TCSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TCSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TCSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol TCSDKKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface TCSDKKotlinx_serialization_coreSerialKind : TCSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol TCSDKKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<TCSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<TCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) TCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface TCSDKKotlinNothing : TCSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface TCSDKKotlinByteArray : TCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(TCSDKByte *(^)(TCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (TCSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol TCSDKKotlinCoroutineContextElement <TCSDKKotlinCoroutineContext>
@required
@property (readonly) id<TCSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol TCSDKKotlinCoroutineContextKey
@required
@end


/**
 * Actual data of the [HttpRequest], including [url], [method], [headers], [body] and [executionContext].
 * Built by [HttpRequestBuilder].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface TCSDKKtor_client_coreHttpRequestData : TCSDKBase
- (instancetype)initWithUrl:(TCSDKKtor_httpUrl *)url method:(TCSDKKtor_httpHttpMethod *)method headers:(id<TCSDKKtor_httpHeaders>)headers body:(TCSDKKtor_httpOutgoingContent *)body executionContext:(id<TCSDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<TCSDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));

/**
 * Retrieve extension by its key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<TCSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TCSDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<TCSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<TCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) TCSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) TCSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Data prepared for [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpResponseData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface TCSDKKtor_client_coreHttpResponseData : TCSDKBase
- (instancetype)initWithStatusCode:(TCSDKKtor_httpHttpStatusCode *)statusCode requestTime:(TCSDKKtor_utilsGMTDate *)requestTime headers:(id<TCSDKKtor_httpHeaders>)headers version:(TCSDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<TCSDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<TCSDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<TCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) TCSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) TCSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface TCSDKKotlinAbstractCoroutineContextElement : TCSDKBase <TCSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<TCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<TCSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol TCSDKKotlinContinuationInterceptor <TCSDKKotlinCoroutineContextElement>
@required
- (id<TCSDKKotlinContinuation>)interceptContinuationContinuation:(id<TCSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<TCSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end


/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface TCSDKKotlinx_coroutines_coreCoroutineDispatcher : TCSDKKotlinAbstractCoroutineContextElement <TCSDKKotlinContinuationInterceptor>

/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<TCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));

/**
 * Requests execution of a runnable [block].
 * The dispatcher guarantees that [block] will eventually execute, typically by dispatching it to a thread pool
 * or using a dedicated thread.
 * The [context] parameter represents the context of the coroutine that is being dispatched,
 * or [EmptyCoroutineContext] if a non-coroutine-specific [Runnable] is dispatched instead.
 * Implementations may use [context] for additional context-specific information,
 * such as priority, whether the dispatched coroutine can be invoked in place,
 * coroutine name, and additional diagnostic elements.
 *
 * This method should guarantee that the given [block] will be eventually invoked,
 * otherwise the system may reach a deadlock state and never leave it.
 * The cancellation mechanism is transparent for [CoroutineDispatcher] and is managed by [block] internals.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in an inconsistent and hard-to-debug state.
 * It is assumed that if any exceptions do get thrown from this method, then [block] will not be executed.
 *
 * Most implementations should avoid calling [block] in-place. Doing so may result in `StackOverflowError`
 * when `dispatch` is invoked repeatedly, for example when [yield] is called in a loop.
 * In order to execute a block in place, it is recommended to return `false` from [isDispatchNeeded]
 * and delegate the `dispatch` implementation to `Dispatchers.Unconfined.dispatch` in such cases.
 * To support this, the coroutines machinery ensures in-place execution and forms an event-loop to
 * avoid unbound recursion.
 *
 * @see isDispatchNeeded
 * @see Dispatchers.Unconfined
 */
- (void)dispatchContext:(id<TCSDKKotlinCoroutineContext>)context block:(id<TCSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * Dispatches execution of a runnable `block` onto another thread in the given `context`
 * with a hint for the dispatcher that the current dispatch is triggered by a [yield] call, so that the execution of this
 * continuation may be delayed in favor of already dispatched coroutines.
 *
 * Though the `yield` marker may be passed as a part of [context], this
 * is a separate method for performance reasons.
 *
 * Implementation note: this entry-point is used for `Dispatchers.IO` and [Dispatchers.Default]
 * unerlying implementations, see overrides for this method.
 *
 * @suppress **This an internal API and should not be used from general code.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<TCSDKKotlinCoroutineContext>)context block:(id<TCSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));

/**
 * Returns a continuation that wraps the provided [continuation], thus intercepting all resumptions.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in the inconsistent and hard to debug state.
 */
- (id<TCSDKKotlinContinuation>)interceptContinuationContinuation:(id<TCSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));

/**
 * Returns `true` if the execution of the coroutine should be performed with [dispatch] method.
 * The default behavior for most dispatchers is to return `true`.
 *
 * If this method returns `false`, the coroutine is resumed immediately in the current thread,
 * potentially forming an event-loop to prevent stack overflows.
 * The event loop is an advanced topic and its implications can be found in [Dispatchers.Unconfined] documentation.
 *
 * The [context] parameter represents the context of the coroutine that is being dispatched,
 * or [EmptyCoroutineContext] if a non-coroutine-specific [Runnable] is dispatched instead.
 *
 * A dispatcher can override this method to provide a performance optimization and avoid paying a cost of an unnecessary dispatch.
 * E.g. [MainCoroutineDispatcher.immediate] checks whether we are already in the required UI thread in this method and avoids
 * an additional dispatch when it is not required.
 *
 * While this approach can be more efficient, it is not chosen by default to provide a consistent dispatching behaviour
 * so that users won't observe unexpected and non-consistent order of events by default.
 *
 * Coroutine builders like [launch][CoroutineScope.launch] and [async][CoroutineScope.async] accept an optional [CoroutineStart]
 * parameter that allows one to optionally choose the [undispatched][CoroutineStart.UNDISPATCHED] behavior to start coroutine immediately,
 * but to be resumed only in the provided dispatcher.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in the inconsistent and hard to debug state.
 *
 * @see dispatch
 * @see Dispatchers.Unconfined
 */
- (BOOL)isDispatchNeededContext:(id<TCSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * Creates a view of the current dispatcher that limits the parallelism to the given [value][parallelism].
 * The resulting view uses the original dispatcher for execution but with the guarantee that
 * no more than [parallelism] coroutines are executed at the same time.
 *
 * This method does not impose restrictions on the number of views or the total sum of parallelism values,
 * each view controls its own parallelism independently with the guarantee that the effective parallelism
 * of all views cannot exceed the actual parallelism of the original dispatcher.
 *
 * The resulting dispatcher does not guarantee that the coroutines will always be dispatched on the same
 * subset of threads, it only guarantees that at most [parallelism] coroutines are executed at the same time,
 * and reuses threads from the original dispatchers.
 * It does not constitute a resource -- it is a _view_ of the underlying dispatcher that can be thrown away
 * and is not required to be closed.
 *
 * ### Example of usage
 * ```
 * // Background dispatcher for the application
 * val dispatcher = newFixedThreadPoolContext(4, "App Background")
 * // At most 2 threads will be processing images as it is really slow and CPU-intensive
 * val imageProcessingDispatcher = dispatcher.limitedParallelism(2, "Image processor")
 * // At most 3 threads will be processing JSON to avoid image processing starvation
 * val jsonProcessingDispatcher = dispatcher.limitedParallelism(3, "Json processor")
 * // At most 1 thread will be doing IO
 * val fileWriterDispatcher = dispatcher.limitedParallelism(1, "File writer")
 * ```
 * Note how in this example the application has an executor with 4 threads, but the total sum of all limits
 * is 6. Still, at most 4 coroutines can be executed simultaneously as each view limits only its own parallelism,
 * and at most 4 threads can exist in the system.
 *
 * Note that this example was structured in such a way that it illustrates the parallelism guarantees.
 * In practice, it is usually better to use `Dispatchers.IO` or [Dispatchers.Default] instead of creating a
 * `dispatcher`.
 *
 * ### `limitedParallelism(1)` pattern
 *
 * One of the common patterns is confining the execution of specific tasks to a sequential execution in background
 * with `limitedParallelism(1)` invocation.
 * For that purpose, the implementation guarantees that sections of code between suspensions
 * are executed sequentially and that a happens-before relation
 * is established between them:
 *
 * ```
 * val confined = Dispatchers.Default.limitedParallelism(1, "incrementDispatcher")
 * var counter = 0
 *
 * // Invoked from arbitrary coroutines
 * launch(confined) {
 *     // This increment is sequential and race-free
 *     ++counter
 * }
 * ```
 * Note that there is no guarantee that the underlying system thread will always be the same.
 *
 * #### It is not a mutex!
 *
 * **Pitfall**: [limitedParallelism] limits how many threads can execute some code in parallel,
 * but does not limit how many coroutines execute concurrently!
 *
 * For example:
 *
 * ```
 * val notAMutex = Dispatchers.Default.limitedParallelism(1)
 *
 * repeat(3) {
 *     launch(notAMutex) {
 *         println("Coroutine $it entering...")
 *         delay(20.milliseconds)
 *         println("Coroutine $it leaving.")
 *     }
 * }
 * ```
 *
 * The output will be similar to this:
 *
 * ```
 * Coroutine 0 entering...
 * Coroutine 1 entering...
 * Coroutine 2 entering...
 * Coroutine 0 leaving.
 * Coroutine 1 leaving.
 * Coroutine 2 leaving.
 * ```
 *
 * This means that coroutines are not guaranteed to run to completion before the dispatcher starts executing
 * code from another coroutine.
 * The only guarantee in this example is that two `println` calls will not occur in several threads simultaneously.
 *
 * Use a [kotlinx.coroutines.sync.Mutex] or a [kotlinx.coroutines.sync.Semaphore] for limiting concurrency.
 *
 * ### Dispatchers.IO
 *
 * `Dispatcher.IO` is considered _elastic_ for the purposes of limited parallelism -- the sum of
 * views is not restricted by the capacity of `Dispatchers.IO`.
 * It means that it is safe to replace `newFixedThreadPoolContext(nThreads)` with
 * `Dispatchers.IO.limitedParallelism(nThreads)` w.r.t. available number of threads.
 * See `Dispatchers.IO` documentation for more details.
 *
 * ### Restrictions and implementation details
 *
 * The default implementation of `limitedParallelism` does not support direct dispatchers,
 * such as executing the given runnable in place during [dispatch] calls.
 * Any dispatcher that may return `false` from [isDispatchNeeded] is considered direct.
 * For direct dispatchers, it is recommended to override this method
 * and provide a domain-specific implementation or to throw an [UnsupportedOperationException].
 *
 * Implementations of this method are allowed to return `this` if the current dispatcher already satisfies the parallelism requirement.
 * For example, `Dispatchers.Main.limitedParallelism(1)` returns `Dispatchers.Main`, because the main dispatcher is already single-threaded.
 *
 * @param name optional name for the resulting dispatcher string representation if a new dispatcher was created.
 *        Implementations are free to ignore this parameter.
 * @throws IllegalArgumentException if the given [parallelism] is non-positive
 * @throws UnsupportedOperationException if the current dispatcher does not support limited parallelism views
 */
- (TCSDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));

/**
 * @suppress **Error**: Operator '+' on two CoroutineDispatcher objects is meaningless.
 * CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts.
 * The dispatcher to the right of `+` just replaces the dispatcher to the left.
 */
- (TCSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(TCSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<TCSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));

/** @suppress for nicer debugging */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Proxy configuration.
 *
 * See [ProxyBuilder] to create proxy.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.ProxyConfig)
 *
 * @param url: proxy url address.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface TCSDKKtor_client_coreProxyConfig : TCSDKBase
- (instancetype)initWithUrl:(TCSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TCSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Base interface representing a [HttpClient] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol TCSDKKtor_client_coreHttpClientPlugin
@required

/**
 * Installs the [plugin] class for a [HttpClient] defined at [scope].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.install)
 */
- (void)installPlugin:(id)plugin scope:(TCSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));

/**
 * Builds a [TPlugin] by calling the [block] with a [TConfig] config instance as receiver.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.prepare)
 */
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));

/**
 * The [AttributeKey] for this plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.key)
 */
@property (readonly) TCSDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end


/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface TCSDKKtor_utilsAttributeKey<T> : TCSDKBase
- (instancetype)initWithName:(NSString *)name type:(TCSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (TCSDKKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(TCSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface TCSDKKtor_eventsEventDefinition<T> : TCSDKBase

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * A handle to an allocated object that can be disposed to make it eligible for garbage collection.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol TCSDKKotlinx_coroutines_coreDisposableHandle
@required

/**
 * Disposes the corresponding object, making it eligible for garbage collection.
 * Repeated invocation of this function has no effect.
 */
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * Represents a phase in a pipeline
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.PipelinePhase)
 *
 * @param name a name for this phase
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface TCSDKKtor_utilsPipelinePhase : TCSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol TCSDKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol TCSDKKotlinSuspendFunction2 <TCSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface TCSDKKtor_client_coreHttpReceivePipelinePhases : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.After)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.Before)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.State)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * A message either from the client or the server,
 * that has [headers] associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage)
 */
__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol TCSDKKtor_httpHttpMessage
@required

/**
 * Message [Headers]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage.headers)
 */
@property (readonly) id<TCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end


/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface TCSDKKtor_client_coreHttpResponse : TCSDKBase <TCSDKKtor_httpHttpMessage, TCSDKKotlinx_coroutines_coreCoroutineScope>

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.call)
 */
@property (readonly) TCSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * Provides a raw [ByteReadChannel] to the response content as it is read from the network.
 * This content can be still compressed or encoded.
 *
 * This content doesn't go through any interceptors from [HttpResponsePipeline].
 *
 * If you need to read the content as decoded bytes, use the [bodyAsChannel] method instead.
 *
 * This property produces a new channel every time it's accessed.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.rawContent)
 */
@property (readonly) id<TCSDKKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));

/**
 * [GMTDate] of the request start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.requestTime)
 */
@property (readonly) TCSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));

/**
 * [GMTDate] of the response start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.responseTime)
 */
@property (readonly) TCSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));

/**
 * The [HttpStatusCode] returned by the server. It includes both,
 * the [HttpStatusCode.description] and the [HttpStatusCode.value] (code).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.status)
 */
@property (readonly) TCSDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));

/**
 * HTTP version. Usually [HttpProtocolVersion.HTTP_1_1] or [HttpProtocolVersion.HTTP_2_0].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.version)
 */
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end


/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface TCSDKKtor_client_coreHttpRequestPipelinePhases : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Before)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Encode a request body to [OutgoingContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Render)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));

/**
 * A phase for the [HttpSend] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Send)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));

/**
 * Use this phase to modify a request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.State)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform a request body to supported render format.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Transform)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * A builder message either for the client or the server,
 * that has a [headers] builder associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder)
 */
__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol TCSDKKtor_httpHttpMessageBuilder
@required

/**
 * MessageBuilder [HeadersBuilder]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder.headers)
 */
@property (readonly) TCSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end


/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface TCSDKKtor_client_coreHttpRequestBuilder : TCSDKBase <TCSDKKtor_httpHttpMessageBuilder>

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TCSDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Creates immutable [HttpRequestData].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.build)
 */
- (TCSDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));

/**
 * Retrieves capability by the key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<TCSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));

/**
 * Sets request-specific attributes specified by [block].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setAttributes)
 */
- (void)setAttributesBlock:(void (^)(id<TCSDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));

/**
 * Sets capability configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setCapability)
 */
- (void)setCapabilityKey:(id<TCSDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));

/**
 * Mutates [this] by copying all the data but execution context from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFrom)
 */
- (TCSDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(TCSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));

/**
 * Mutates [this] copying all the data from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFromWithExecutionContext)
 */
- (TCSDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(TCSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));

/**
 * Executes a [block] that configures the [URLBuilder] associated to this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
- (void)urlBlock:(void (^)(TCSDKKtor_httpURLBuilder *, TCSDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));

/**
 * Provides access to attributes specific for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.attributes)
 */
@property (readonly) id<TCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The [body] for this request. Initially [EmptyContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.body)
 */
@property id body __attribute__((swift_name("body")));

/**
 * The [KType] of [body] for this request. Null for default types that don't need serialization.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.bodyType)
 */
@property TCSDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));

/**
 * A deferred used to control the execution of this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.executionContext)
 */
@property (readonly) id<TCSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));

/**
 * [HeadersBuilder] to configure the headers for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.headers)
 */
@property (readonly) TCSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));

/**
 * [HttpMethod] used by this request. [HttpMethod.Get] by default.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.method)
 */
@property TCSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * [URLBuilder] to configure the URL for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
@property (readonly) TCSDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface TCSDKKtor_client_coreHttpResponsePipelinePhases : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.After)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * Decode response body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Parse)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Receive)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.State)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform response body to expected format
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Transform)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface TCSDKKtor_client_coreHttpResponseContainer : TCSDKBase
- (instancetype)initWithExpectedType:(TCSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (TCSDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(TCSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TCSDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end


/**
 * A pair of a [request] and [response] for a specific [HttpClient].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall)
 *
 * @property client the client that executed the call.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface TCSDKKtor_client_coreHttpClientCall : TCSDKBase <TCSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(TCSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(TCSDKKtor_client_coreHttpClient *)client requestData:(TCSDKKtor_client_coreHttpRequestData *)requestData responseData:(TCSDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.body)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 * @throws NullPointerException If content is `null`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(TCSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.bodyNullable)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(TCSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<TCSDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.attributes)
 */
@property (readonly) id<TCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TCSDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<TCSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));

/**
 * The [request] sent by the client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.request)
 */
@property id<TCSDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));

/**
 * The [response] sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.response)
 */
@property TCSDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface TCSDKKtor_client_coreHttpSendPipelinePhases : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Before)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Send a request to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Engine)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));

/**
 * Use this phase for logging and other actions that don't modify a request or shared data.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Monitoring)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));

/**
 * Receive a pipeline execution phase.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Receive)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to modify request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.State)
 */
@property (readonly) TCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol TCSDKKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<TCSDKKotlinKClass>)kClass provider:(id<TCSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<TCSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<TCSDKKotlinKClass>)kClass serializer:(id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<TCSDKKotlinKClass>)baseClass actualClass:(id<TCSDKKotlinKClass>)actualClass actualSerializer:(id<TCSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<TCSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<TCSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<TCSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<TCSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<TCSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<TCSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol TCSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol TCSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol TCSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol TCSDKKotlinKClass <TCSDKKotlinKDeclarationContainer, TCSDKKotlinKAnnotatedElement, TCSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface TCSDKKotlinByteIterator : TCSDKBase <TCSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TCSDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol TCSDKKtor_ioJvmSerializable
@required
@end


/**
 * Represents an immutable URL
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url)
 *
 * @property protocol
 * @property host name without port (domain)
 * @property port the specified port or protocol default port
 * @property specifiedPort port number that was specified to override protocol's default
 * @property encodedPath encoded path without query string
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property user username part of URL
 * @property password password part of URL
 * @property trailingQuery keep trailing question character even if there are no query parameters
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface TCSDKKtor_httpUrl : TCSDKBase <TCSDKKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) TCSDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<TCSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * A list containing the segments of the URL path.
 *
 * This property was designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.pathSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.pathSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.pathSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * To address this issue, the current [pathSegments] property will be renamed to [rawSegments].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.pathSegments)
 */
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) TCSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) TCSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));

/**
 * A list containing the segments of the URL path.
 *
 * This property is designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.rawSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.rawSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.rawSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.rawSegments)
 */
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));

/**
 * A list of path segments derived from the URL, excluding any leading
 * and trailing empty segments.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * If you need to check for trailing slash and relative/absolute paths, please check the [rawSegments] property.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.segments)
 **/
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface TCSDKKtor_httpHttpMethod : TCSDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Provides data structure for associating a [String] with a [List] of Strings
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues)
 */
__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol TCSDKKtor_utilsStringValues
@required

/**
 * Checks if the given [name] exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * Checks if the given [name] and [value] pair exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));

/**
 * Gets all entries from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.entries)
 */
- (NSSet<id<TCSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));

/**
 * Iterates over all entries in this map and calls [body] for each pair
 *
 * Can be optimized in implementations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.forEach)
 */
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));

/**
 * Gets first value from the list of values associated with a [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.get)
 */
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * Gets all values associated with the [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.getAll)
 */
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));

/**
 * Checks if this map is empty
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.isEmpty)
 */
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));

/**
 * Gets all names from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.names)
 */
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));

/**
 * Specifies if map has case-sensitive or case-insensitive names
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.caseInsensitiveName)
 */
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end


/**
 * Represents HTTP headers as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Headers)
 */
__attribute__((swift_name("Ktor_httpHeaders")))
@protocol TCSDKKtor_httpHeaders <TCSDKKtor_utilsStringValues>
@required
@end


/**
 * Information about the content to be sent to the peer, recognized by a client or server engine
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent)
 */
__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface TCSDKKtor_httpOutgoingContent : TCSDKBase

/**
 * Gets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.getProperty)
 */
- (id _Nullable)getPropertyKey:(TCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));

/**
 * Sets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.setProperty)
 */
- (void)setPropertyKey:(TCSDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));

/**
 * Trailers to set when sending this content, will be ignored if request is not in HTTP2 mode
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.trailers)
 */
- (id<TCSDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));

/**
 * Specifies content length in bytes for this resource.
 *
 * If null, the resources will be sent as `Transfer-Encoding: chunked`
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentLength)
 */
@property (readonly) TCSDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));

/**
 * Specifies [ContentType] for this resource.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentType)
 */
@property (readonly) TCSDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));

/**
 * Headers to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.headers)
 */
@property (readonly) id<TCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));

/**
 * Status code to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.status)
 */
@property (readonly) TCSDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * A background job.
 * Conceptually, a job is a cancellable thing with a lifecycle that
 * concludes in its completion.
 *
 * Jobs can be arranged into parent-child hierarchies where the cancellation
 * of a parent leads to the immediate cancellation of all its [children] recursively.
 * Failure of a child with an exception other than [CancellationException] immediately cancels its parent and,
 * consequently, all its other children.
 * This behavior can be customized using [SupervisorJob].
 *
 * The most basic instances of the `Job` interface are created like this:
 *
 * - A **coroutine job** is created with the [launch][CoroutineScope.launch] coroutine builder.
 *   It runs a specified block of code and completes upon completion of this block.
 * - **[CompletableJob]** is created with a `Job()` factory function.
 *   It is completed by calling [CompletableJob.complete].
 *
 * Conceptually, an execution of a job does not produce a result value.
 * Jobs are launched solely for their
 * side effects.
 * See the [Deferred] interface for a job that produces a result.
 *
 * ### Job states
 *
 * A job has the following states:
 *
 * | **State**                        | [isActive] | [isCompleted] | [isCancelled] |
 * | -------------------------------- | ---------- | ------------- | ------------- |
 * | _New_ (optional initial state)   | `false`    | `false`       | `false`       |
 * | _Active_ (default initial state) | `true`     | `false`       | `false`       |
 * | _Completing_ (transient state)   | `true`     | `false`       | `false`       |
 * | _Cancelling_ (transient state)   | `false`    | `false`       | `true`        |
 * | _Cancelled_ (final state)        | `false`    | `true`        | `true`        |
 * | _Completed_ (final state)        | `false`    | `true`        | `false`       |
 *
 *
 * Note that these states are mentioned in italics below to make them easier to distinguish.
 *
 * Usually, a job is created in the _active_ state (it is created and started).
 * However, coroutine builders
 * that provide an optional `start` parameter create a coroutine in the _new_ state when this parameter is set to
 * [CoroutineStart.LAZY].
 * Such a job can be made _active_ by invoking [start] or [join].
 *
 * A job is in the _active_ state while the coroutine is working or until the [CompletableJob] completes,
 * fails, or is cancelled.
 *
 * Failure of an _active_ job with an exception transitions the state to the _cancelling_ state.
 * A job can be cancelled at any time with the [cancel] function that forces it to transition to
 * the _cancelling_ state immediately.
 * The job becomes _cancelled_ when it finishes executing its work and
 * all its children complete.
 *
 * Completion of an _active_ coroutine's body or a call to [CompletableJob.complete] transitions the job to
 * the _completing_ state.
 * It waits in the _completing_ state for all its children to complete before
 * transitioning to the _completed_ state.
 * Note that _completing_ state is purely internal to the job.
 * For an outside observer, a _completing_ job is still
 * active, while internally it is waiting for its children.
 *
 * ```
 *                                       wait children
 * +-----+ start  +--------+ complete   +-------------+  finish  +-----------+
 * | New | -----> | Active | ---------> | Completing  | -------> | Completed |
 * +-----+        +--------+            +-------------+          +-----------+
 *                  |  cancel / fail       |
 *                  |     +----------------+
 *                  |     |
 *                  V     V
 *              +------------+                           finish  +-----------+
 *              | Cancelling | --------------------------------> | Cancelled |
 *              +------------+                                   +-----------+
 * ```
 *
 * A `Job` instance in the
 * [coroutineContext](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.coroutines/coroutine-context.html)
 * represents the coroutine itself.
 *
 * ### Cancellation cause
 *
 * A coroutine job is said to _complete exceptionally_ when its body throws an exception;
 * a [CompletableJob] is completed exceptionally by calling [CompletableJob.completeExceptionally].
 * An exceptionally completed job is cancelled,
 * and the corresponding exception becomes the _cancellation cause_ of the job.
 *
 * Normal cancellation of a job is distinguished from its failure by the exception
 * that caused its cancellation.
 * A coroutine that throws a [CancellationException] is considered to be _cancelled_ normally.
 * If a different exception causes the cancellation, then the job has _failed_.
 * When a job has _failed_, its parent gets cancelled with the same type of exception,
 * thus ensuring transparency in delegating parts of the job to its children.
 *
 * Note, that the [cancel] function on a job only accepts a [CancellationException] as a cancellation cause, thus
 * calling [cancel] always results in a normal cancellation of a job, which does not lead to cancellation
 * of its parent.
 * This way, a parent can [cancel] its children (cancelling all their children recursively, too)
 * without cancelling itself.
 *
 * ### Concurrency and synchronization
 *
 * All functions on this interface and on all interfaces derived from it are **thread-safe** and can
 * be safely invoked from concurrent coroutines without external synchronization.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/coroutines/InternalForInheritanceCoroutinesApi)])
*/
__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol TCSDKKotlinx_coroutines_coreJob <TCSDKKotlinCoroutineContextElement>
@required

/**
 * Attaches a child job so that this job becomes its parent and
 * returns a handle that should be used to detach it.
 *
 * A parent-child relation has the following effect:
 * - Cancellation of parent with [cancel] or its exceptional completion (failure)
 *   immediately cancels all its children.
 * - Parent cannot complete until all its children are complete. Parent waits for all its children to
 *   complete in _completing_ or _cancelling_ states.
 *
 * **A child must store the resulting [ChildHandle] and [dispose][DisposableHandle.dispose] the attachment
 * to its parent on its own completion.**
 *
 * Coroutine builders and job factory functions that accept `parent` [CoroutineContext] parameter
 * lookup a [Job] instance in the parent context and use this function to attach themselves as a child.
 * They also store a reference to the resulting [ChildHandle] and dispose a handle when they complete.
 *
 * @suppress This is an internal API. This method is too error-prone for public API.
 * Used in IntelliJ.
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<TCSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<TCSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));

/**
 * Cancels this job with an optional cancellation [cause].
 * A cause can be used to specify an error message or to provide other details on
 * the cancellation reason for debugging purposes.
 * See [Job] documentation for full explanation of cancellation machinery.
 */
- (void)cancelCause:(TCSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * Returns [CancellationException] that signals the completion of this job. This function is
 * used by [cancellable][suspendCancellableCoroutine] suspending functions. They throw exception
 * returned by this function when they suspend in the context of this job and this job becomes _complete_.
 *
 * This function returns the original [cancel] cause of this job if that `cause` was an instance of
 * [CancellationException]. Otherwise (if this job was cancelled with a cause of a different type, or
 * was cancelled without a cause, or had completed normally), an instance of [CancellationException] is
 * returned. The [CancellationException.cause] of the resulting [CancellationException] references
 * the original cancellation cause that was passed to [cancel] function.
 *
 * This function throws [IllegalStateException] when invoked on a job that is still active.
 *
 * @suppress **This an internal API and should not be used from general code.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (TCSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));

/**
 * Registers handler that is **synchronously** invoked once on completion of this job.
 * When the job is already complete, then the handler is immediately invoked
 * with the job's exception or cancellation cause or `null`. Otherwise, the handler will be invoked once when this
 * job is complete.
 *
 * The meaning of `cause` that is passed to the handler:
 * - Cause is `null` when the job has completed normally.
 * - Cause is an instance of [CancellationException] when the job was cancelled _normally_.
 *   **It should not be treated as an error**. In particular, it should not be reported to error logs.
 * - Otherwise, the job had _failed_.
 *
 * The resulting [DisposableHandle] can be used to [dispose][DisposableHandle.dispose] the
 * registration of this handler and release its memory if its invocation is no longer needed.
 * There is no need to dispose the handler after completion of this job. The references to
 * all the handlers are released when this job completes.
 *
 * Installed [handler] should not throw any exceptions. If it does, they will get caught,
 * wrapped into [CompletionHandlerException], and rethrown, potentially causing crash of unrelated code.
 *
 * **Note**: Implementation of `CompletionHandler` must be fast, non-blocking, and thread-safe.
 * This handler can be invoked concurrently with the surrounding code.
 * There is no guarantee on the execution context in which the [handler] is invoked.
 */
- (id<TCSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(TCSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * Kept for preserving compatibility. Shouldn't be used by anyone.
 * @suppress
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<TCSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(TCSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * Suspends the coroutine until this job is complete. This invocation resumes normally (without exception)
 * when the job is complete for any reason and the [Job] of the invoking coroutine is still [active][isActive].
 * This function also [starts][Job.start] the corresponding coroutine if the [Job] was still in _new_ state.
 *
 * Note that the job becomes complete only when all its children are complete.
 *
 * This suspending function is cancellable and **always** checks for a cancellation of the invoking coroutine's Job.
 * If the [Job] of the invoking coroutine is cancelled or completed when this
 * suspending function is invoked or while it is suspended, this function
 * throws [CancellationException].
 *
 * In particular, it means that a parent coroutine invoking `join` on a child coroutine throws
 * [CancellationException] if the child had failed, since a failure of a child coroutine cancels parent by default,
 * unless the child was launched from within [supervisorScope].
 *
 * This function can be used in [select] invocation with [onJoin] clause.
 * Use [isCompleted] to check for a completion of this job without waiting.
 *
 * There is [cancelAndJoin] function that combines an invocation of [cancel] and `join`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));

/**
 * @suppress **Error**: Operator '+' on two Job objects is meaningless.
 * Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts.
 * The job to the right of `+` just replaces the job the left of `+`.
 */
- (id<TCSDKKotlinx_coroutines_coreJob>)plusOther_:(id<TCSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));

/**
 * Starts coroutine related to this job (if any) if it was not started yet.
 * The result is `true` if this invocation actually started coroutine or `false`
 * if it was already started or completed.
 */
- (BOOL)start __attribute__((swift_name("start()")));

/**
 * Returns a sequence of this job's children.
 *
 * A job becomes a child of this job when it is constructed with this job in its
 * [CoroutineContext] or using an explicit `parent` parameter.
 *
 * A parent-child relation has the following effect:
 *
 * - Cancellation of parent with [cancel] or its exceptional completion (failure)
 *   immediately cancels all its children.
 * - Parent cannot complete until all its children are complete. Parent waits for all its children to
 *   complete in _completing_ or _cancelling_ state.
 * - Uncaught exception in a child, by default, cancels parent. This applies even to
 *   children created with [async][CoroutineScope.async] and other future-like
 *   coroutine builders, even though their exceptions are caught and are encapsulated in their result.
 *   This default behavior can be overridden with [SupervisorJob].
 */
@property (readonly) id<TCSDKKotlinSequence> children __attribute__((swift_name("children")));

/**
 * Returns `true` when this job is active -- it was already started and has not completed nor was cancelled yet.
 * The job that is waiting for its [children] to complete is still considered to be active if it
 * was not cancelled nor failed.
 *
 * See [Job] documentation for more details on job states.
 */
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));

/**
 * Returns `true` if this job was cancelled for any reason, either by explicit invocation of [cancel] or
 * because it had failed or its child or parent was cancelled.
 * In the general case, it does not imply that the
 * job has already [completed][isCompleted], because it may still be finishing whatever it was doing and
 * waiting for its [children] to complete.
 *
 * See [Job] documentation for more details on cancellation and failures.
 */
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));

/**
 * Returns `true` when this job has completed for any reason. A job that was cancelled or failed
 * and has finished its execution is also considered complete. Job becomes complete only after
 * all its [children] complete.
 *
 * See [Job] documentation for more details on job states.
 */
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));

/**
 * Clause for [select] expression of [join] suspending function that selects when the job is complete.
 * This clause never fails, even if the job completes exceptionally.
 */
@property (readonly) id<TCSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * Returns the parent of the current job if the parent-child relationship
 * is established or `null` if the job has no parent or was successfully completed.
 *
 * Accesses to this property are not idempotent, the property becomes `null` as soon
 * as the job is transitioned to its final state, whether it is cancelled or completed,
 * and all job children are completed.
 *
 * For a coroutine, its corresponding job completes as soon as the coroutine itself
 * and all its children are complete.
 *
 * @see [Job] state transitions for additional details.
 *
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<TCSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * Represents an HTTP status code and description.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode)
 *
 * @param value is a numeric code.
 * @param description is a free form description of a status.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface TCSDKKtor_httpHttpStatusCode : TCSDKBase <TCSDKKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(TCSDKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (TCSDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));

/**
 * Returns a copy of `this` code with a description changed to [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.description)
 */
- (TCSDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface TCSDKKtor_utilsGMTDate : TCSDKBase <TCSDKKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(TCSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(TCSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(TCSDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (TCSDKKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (TCSDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(TCSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(TCSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) TCSDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) TCSDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end


/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface TCSDKKtor_httpHttpProtocolVersion : TCSDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol TCSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<TCSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface TCSDKKotlinAbstractCoroutineContextKey<B, E> : TCSDKBase <TCSDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<TCSDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<TCSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/** @suppress
 *
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface TCSDKKotlinx_coroutines_coreCoroutineDispatcherKey : TCSDKKotlinAbstractCoroutineContextKey<id<TCSDKKotlinContinuationInterceptor>, TCSDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));

/** @suppress */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<TCSDKKotlinCoroutineContextKey>)baseKey safeCast:(id<TCSDKKotlinCoroutineContextElement> _Nullable (^)(id<TCSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end


/**
 * A runnable task for [CoroutineDispatcher.dispatch].
 *
 * Equivalent to the type `() -> Unit`.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol TCSDKKotlinx_coroutines_coreRunnable
@required

/**
 * @suppress
 */
- (void)run __attribute__((swift_name("run()")));
@end


/**
 * Ktor type information.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.reflect.TypeInfo)
 *
 * @property type Source KClass<*>
 * @property kotlinType Kotlin reified type with all generic type parameters.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface TCSDKKtor_utilsTypeInfo : TCSDKBase
- (instancetype)initWithType:(id<TCSDKKotlinKClass>)type kotlinType:(id<TCSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<TCSDKKotlinKClass>)type reifiedType:(id<TCSDKKotlinKType>)reifiedType kotlinType:(id<TCSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TCSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<TCSDKKotlinKClass> type __attribute__((swift_name("type")));
@end


/**
 * Channel for asynchronous reading of sequences of bytes.
 * This is a **single-reader channel**.
 *
 * Operations on this channel cannot be invoked concurrently.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel)
 */
__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol TCSDKKtor_ioByteReadChannel
@required

/**
 * Suspend the channel until it has [min] bytes or gets closed. Throws exception if the channel was closed with an
 * error. If there are bytes available in the channel, this function returns immediately.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel.awaitContent)
 *
 * @return return `false` eof is reached, otherwise `true`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(TCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(TCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) TCSDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<TCSDKKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol TCSDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<TCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<TCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<TCSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TCSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface TCSDKKtor_utilsStringValuesBuilderImpl : TCSDKBase <TCSDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<TCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<TCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<TCSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TCSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TCSDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface TCSDKKtor_httpHeadersBuilder : TCSDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<TCSDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface TCSDKKtor_client_coreHttpRequestBuilderCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A URL builder with all mutable components
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder)
 *
 * @property protocol URL protocol (scheme)
 * @property host name without port (domain)
 * @property port port number
 * @property user username part (optional)
 * @property password password part (optional)
 * @property pathSegments URL path without query
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property trailingQuery keep a trailing question character even if there are no query parameters
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface TCSDKKtor_httpURLBuilder : TCSDKBase
- (instancetype)initWithProtocol:(TCSDKKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<TCSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Build a [Url] instance (everything is copied to a new instance)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.build)
 */
- (TCSDKKtor_httpUrl *)build __attribute__((swift_name("build()")));

/**
 * Build a URL string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.buildString)
 */
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<TCSDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<TCSDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property TCSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property TCSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface TCSDKKtor_client_coreHttpClientCallCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A request for [HttpClient], first part of [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest)
 */
__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol TCSDKKtor_client_coreHttpRequest <TCSDKKtor_httpHttpMessage, TCSDKKotlinx_coroutines_coreCoroutineScope>
@required

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.attributes)
 */
@property (readonly) id<TCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.call)
 */
@property (readonly) TCSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * An [OutgoingContent] representing the request body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.content)
 */
@property (readonly) TCSDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));

/**
 * The [HttpMethod] or HTTP VERB used for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.method)
 */
@property (readonly) TCSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * The [Url] representing the endpoint and the uri for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.url)
 */
@property (readonly) TCSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface TCSDKKtor_httpUrlCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents HTTP parameters as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Parameters)
 */
__attribute__((swift_name("Ktor_httpParameters")))
@protocol TCSDKKtor_httpParameters <TCSDKKtor_utilsStringValues>
@required
@end


/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface TCSDKKtor_httpURLProtocol : TCSDKBase <TCSDKKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface TCSDKKtor_httpHttpMethodCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<TCSDKKtor_httpHttpMethod *> *)getDefaultMethods __attribute__((swift_name("getDefaultMethods()"))) __attribute__((deprecated("Use DefaultMethods const instead")));
- (TCSDKKtor_httpHttpMethod *)getDelete __attribute__((swift_name("getDelete()"))) __attribute__((deprecated("Use Delete const instead")));
- (TCSDKKtor_httpHttpMethod *)getGet __attribute__((swift_name("getGet()"))) __attribute__((deprecated("Use Get const instead")));
- (TCSDKKtor_httpHttpMethod *)getHead __attribute__((swift_name("getHead()"))) __attribute__((deprecated("Use Head const instead")));
- (TCSDKKtor_httpHttpMethod *)getOptions __attribute__((swift_name("getOptions()"))) __attribute__((deprecated("Use Options const instead")));
- (TCSDKKtor_httpHttpMethod *)getPatch __attribute__((swift_name("getPatch()"))) __attribute__((deprecated("Use Patch const instead")));
- (TCSDKKtor_httpHttpMethod *)getPost __attribute__((swift_name("getPost()"))) __attribute__((deprecated("Use Post const instead")));
- (TCSDKKtor_httpHttpMethod *)getPut __attribute__((swift_name("getPut()"))) __attribute__((deprecated("Use Put const instead")));
- (TCSDKKtor_httpHttpMethod *)getTrace __attribute__((swift_name("getTrace()"))) __attribute__((deprecated("Use Trace const instead")));

/**
 * Parse HTTP method by [method] string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.parse)
 */
- (TCSDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));

/**
 * A list of default HTTP methods
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.DefaultMethods)
 */
@property (readonly) NSArray<TCSDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) TCSDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) TCSDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) TCSDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) TCSDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) TCSDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) TCSDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) TCSDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@property (readonly) TCSDKKtor_httpHttpMethod *Query __attribute__((swift_name("Query")));
@property (readonly) TCSDKKtor_httpHttpMethod *Trace __attribute__((swift_name("Trace")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol TCSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * Represents a header value that consist of [content] followed by [parameters].
 * Useful for headers such as `Content-Type`, `Content-Disposition` and so on.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters)
 *
 * @property content header's content without parameters
 * @property parameters
 */
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface TCSDKKtor_httpHeaderValueWithParameters : TCSDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<TCSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));

/**
 * The first value for the parameter with [name] comparing case-insensitively or `null` if no such parameters found
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.parameter)
 */
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<TCSDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end


/**
 * Represents a value for a `Content-Type` header.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType)
 *
 * @property contentType represents a type part of the media type.
 * @property contentSubtype represents a subtype part of the media type.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface TCSDKKtor_httpContentType : TCSDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<TCSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<TCSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 * The `this` type must be a more specific type than the [pattern] type. In other words:
 *
 * ```kotlin
 * ContentType("a", "b").match(ContentType("a", "b").withParameter("foo", "bar")) === false
 * ContentType("a", "b").withParameter("foo", "bar").match(ContentType("a", "b")) === true
 * ContentType("a", "*").match(ContentType("a", "b")) === false
 * ContentType("a", "b").match(ContentType("a", "*")) === true
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern:(TCSDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));

/**
 * Creates a copy of `this` type with the added parameter with the [name] and [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withParameter)
 */
- (TCSDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));

/**
 * Creates a copy of `this` type without any parameters
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withoutParameters)
 */
- (TCSDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * A handle that child keep onto its parent so that it is able to report its cancellation.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol TCSDKKotlinx_coroutines_coreChildHandle <TCSDKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * Child is cancelling its parent by invoking this method.
 * This method is invoked by the child twice. The first time child report its root cause as soon as possible,
 * so that all its siblings and the parent can start cancelling their work asap. The second time
 * child invokes this method when it had aggregated and determined its final cancellation cause.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(TCSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * Returns the parent of the current parent-child relationship.
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<TCSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * A reference that parent receives from its child so that it can report its cancellation.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol TCSDKKotlinx_coroutines_coreChildJob <TCSDKKotlinx_coroutines_coreJob>
@required

/**
 * Parent is cancelling its child by invoking this method.
 * Child finds the cancellation cause using [ParentJob.getChildJobCancellationCause].
 * This method does nothing is the child is already being cancelled.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<TCSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol TCSDKKotlinSequence
@required
- (id<TCSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * Each [select] clause is specified with:
 * 1) the [object of this clause][clauseObject],
 *    such as the channel instance for [SendChannel.onSend];
 * 2) the function that specifies how this clause
 *    should be registered in the object above;
 * 3) the function that modifies the internal result
 *    (passed via [SelectInstance.trySelect] or
 *    [SelectInstance.selectInRegistrationPhase])
 *    to the argument of the user-specified block.
 * 4) the function that specifies how the internal result provided via
 *    [SelectInstance.trySelect] or [SelectInstance.selectInRegistrationPhase]
 *    should be processed in case of this `select` cancellation while dispatching.
 *
 * @suppress **This is unstable API, and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol TCSDKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) TCSDKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<TCSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(TCSDKKotlinThrowable *, id _Nullable, id<TCSDKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<TCSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end


/**
 * Clause for [select] expression without additional parameters that does not select any value.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol TCSDKKotlinx_coroutines_coreSelectClause0 <TCSDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface TCSDKKtor_httpHttpStatusCodeCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpStatusCode] with the given numeric value.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.fromValue)
 */
- (TCSDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) TCSDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));

/**
 * All known status codes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.allStatusCodes)
 */
@property (readonly) NSArray<TCSDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end


/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface TCSDKKtor_utilsWeekDay : TCSDKKotlinEnum<TCSDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TCSDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) TCSDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) TCSDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) TCSDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) TCSDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) TCSDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) TCSDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (TCSDKKotlinArray<TCSDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TCSDKKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface TCSDKKtor_utilsMonth : TCSDKKotlinEnum<TCSDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TCSDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TCSDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) TCSDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) TCSDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) TCSDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) TCSDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) TCSDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) TCSDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) TCSDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) TCSDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) TCSDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) TCSDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) TCSDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (TCSDKKotlinArray<TCSDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TCSDKKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface TCSDKKtor_utilsGMTDateCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<TCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * An instance of [GMTDate] corresponding to the epoch beginning
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate.Companion.START)
 */
@property (readonly) TCSDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface TCSDKKtor_httpHttpProtocolVersionCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpProtocolVersion] from the given parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.fromValue)
 */
- (TCSDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));

/**
 * Create an instance of [HttpProtocolVersion] from http string representation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.parse)
 */
- (TCSDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));

/**
 * HTTP/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_0)
 */
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));

/**
 * HTTP/1.1 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_1)
 */
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));

/**
 * HTTP/2.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_2_0)
 */
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));

/**
 * HTTP/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_3_0)
 */
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *HTTP_3_0 __attribute__((swift_name("HTTP_3_0")));

/**
 * QUIC/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.QUIC)
 */
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));

/**
 * SPDY/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.SPDY_3)
 */
@property (readonly) TCSDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol TCSDKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<TCSDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<TCSDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * Supplies a stream of bytes. RawSource is a base interface for `kotlinx-io` data suppliers.
 *
 * The interface should be implemented to read data from wherever it's located: from the network, storage,
 * or a buffer in memory. Sources may be layered to transform supplied data, such as to decompress, decrypt,
 * or remove protocol framing.
 *
 * Most applications shouldn't operate on a raw source directly, but rather on a buffered [Source] which
 * is both more efficient and more convenient. Use [buffered] to wrap any raw source with a buffer.
 *
 * Implementors should abstain from throwing exceptions other than those that are documented for RawSource methods.
 *
 * ### Thread-safety guarantees
 *
 * [RawSource] implementations are not required to be thread safe.
 * However, if an implementation provides some thread safety guarantees, it is recommended to explicitly document them.
 *
 * @sample kotlinx.io.samples.RC4SourceSample.rc4
 */
__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol TCSDKKotlinx_io_coreRawSource <TCSDKKotlinAutoCloseable>
@required

/**
 * Removes at least 1, and up to [byteCount] bytes from this source and appends them to [sink].
 * Returns the number of bytes read, or -1 if this source is exhausted.
 *
 * @param sink the destination to write the data from this source.
 * @param byteCount the number of bytes to read.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readAtMostToSink
 */
- (int64_t)readAtMostToSink:(TCSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end


/**
 * A source that facilitates typed data reads and keeps a buffer internally so that callers can read chunks of data
 * without requesting it from a downstream on every call.
 *
 * [Source] is the main `kotlinx-io` interface to read data in client's code,
 * any [RawSource] could be converted into [Source] using [RawSource.buffered].
 *
 * Depending on the kind of downstream and the number of bytes read, buffering may improve the performance by hiding
 * the latency of small reads.
 *
 * The buffer is refilled on reads as necessary, but it is also possible to ensure it contains enough data
 * using [require] or [request].
 * [Sink] also allows skipping unneeded prefix of data using [skip] and
 * provides look ahead into incoming data, buffering as much as necessary, using [peek].
 *
 * Source's read* methods have different guarantees of how much data will be consumed from the source
 * and what to expect in case of error.
 *
 * ### Read methods' behavior and naming conventions
 *
 * Unless stated otherwise, all read methods consume the exact number of bytes
 * requested (or the number of bytes required to represent a value of a requested type).
 * If a source contains fewer bytes than requested, these methods will throw an exception.
 *
 * Methods reading up to requested number of bytes are named as `readAtMost`
 * in contrast to methods reading exact number of bytes, which don't have `AtMost` suffix in their names.
 * If a source contains fewer bytes than requested, these methods will not treat it as en error and will return
 * gracefully.
 *
 * Methods returning a value as a result are named `read<Type>`, like [readInt] or [readByte].
 * These methods don't consume source's content in case of an error.
 *
 * Methods reading data into a consumer supplied as one of its arguments are named `read*To`,
 * like [readTo] or [readAtMostTo]. These methods consume a source even when an error occurs.
 *
 * Methods moving all data from a source to some other sink are named `transferTo`, like [transferTo].
 *
 * It is recommended to follow the same naming convention for Source extensions.
 *
 * ### Thread-safety guarantees
 *
 * Until stated otherwise, [Source] implementations are not thread safe.
 * If a [Source] needs to be accessed from multiple threads, an additional synchronization is required.
 */
__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol TCSDKKotlinx_io_coreSource <TCSDKKotlinx_io_coreRawSource>
@required

/**
 * Returns true if there are no more bytes in this source.
 *
 * The call of this method will block until there are bytes to read or the source is definitely exhausted.
 *
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.exhausted
 */
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * Returns a new [Source] that can read data from this source without consuming it.
 * The returned source becomes invalid once this source is next read or closed.
 *
 * Peek could be used to lookahead and read the same data multiple times.
 *
 * If peek source needs to access more data that this [Source] has in its buffer,
 * more data will be requested from the underlying source and on success,
 * it'll be added to the buffer of this [Source].
 * If the underlying source was exhausted or some error occurred on attempt to fill the buffer,
 * a corresponding exception will be thrown.
 *
 * @throws IllegalStateException when the source is closed.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.peekSample
 */
- (id<TCSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));

/**
 * Removes up to `endIndex - startIndex` bytes from this source, copies them into [sink] subrange starting at
 * [startIndex] and ending at [endIndex], and returns the number of bytes read, or -1 if this source is exhausted.
 *
 * @param sink the array to which data will be written from this source.
 * @param startIndex the startIndex (inclusive) of the [sink] subrange to read data into, 0 by default.
 * @param endIndex the endIndex (exclusive) of the [sink] subrange to read data into, `sink.size` by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of range of [sink] array indices.
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readAtMostToByteArray
 */
- (int32_t)readAtMostToSink:(TCSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));

/**
 * Removes a byte from this source and returns it.
 *
 * @throws EOFException when there are no more bytes to read.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readByte
 */
- (int8_t)readByte __attribute__((swift_name("readByte()")));

/**
 * Removes four bytes from this source and returns an integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read an int value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readInt
 */
- (int32_t)readInt __attribute__((swift_name("readInt()")));

/**
 * Removes eight bytes from this source and returns a long integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read a long value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readLong
 */
- (int64_t)readLong __attribute__((swift_name("readLong()")));

/**
 * Removes two bytes from this source and returns a short integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read a short value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readShort
 */
- (int16_t)readShort __attribute__((swift_name("readShort()")));

/**
 * Removes exactly [byteCount] bytes from this source and writes them to [sink].
 *
 * @param sink the sink to which data will be written from this source.
 * @param byteCount the number of bytes that should be written into [sink]
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws EOFException when the requested number of bytes cannot be read.
 * @throws IllegalStateException when the source or [sink] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readSourceToSink
 */
- (void)readToSink:(id<TCSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));

/**
 * Attempts to fill the buffer with at least [byteCount] bytes of data from the underlying source
 * and returns a value indicating if the requirement was successfully fulfilled.
 *
 * `false` value returned by this method indicates that the underlying source was exhausted before
 * filling the buffer with [byteCount] bytes of data.
 *
 * @param byteCount the number of bytes that the buffer should contain.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.request
 */
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));

/**
 * Attempts to fill the buffer with at least [byteCount] bytes of data from the underlying source
 * and throw [EOFException] when the source is exhausted before fulfilling the requirement.
 *
 * If the buffer already contains required number of bytes then there will be no requests to
 * the underlying source.
 *
 * @param byteCount the number of bytes that the buffer should contain.
 *
 * @throws EOFException when the source is exhausted before the required bytes count could be read.
 * @throws IllegalStateException when the source is closed.
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.require
 */
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));

/**
 * Reads and discards [byteCount] bytes from this source.
 *
 * @param byteCount the number of bytes to be skipped.
 *
 * @throws EOFException when the source is exhausted before the requested number of bytes can be skipped.
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.skip
 */
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));

/**
 * Removes all bytes from this source, writes them to [sink], and returns the total number of bytes
 * written to [sink].
 *
 * Return 0 if this source is exhausted.
 *
 * @param sink the sink to which data will be written from this source.
 *
 * @throws IllegalStateException when the source or [sink] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.transferTo
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (int64_t)transferToSink:(id<TCSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * This source's internal buffer. It contains data fetched from the downstream, but not yet consumed by the upstream.
 *
 * Incorrect use of the buffer may cause data loss or unexpected data being read by the upstream.
 * Consider using alternative APIs to read data from the source, if possible:
 * - use [peek] for lookahead into a source;
 * - implement [RawSource] and wrap a downstream source into it to intercept data being read.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) TCSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface TCSDKKtor_httpURLBuilderCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol TCSDKKtor_httpParametersBuilder <TCSDKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface TCSDKKtor_httpURLProtocolCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create an instance by [name] or use already existing instance
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.createOrDefault)
 */
- (TCSDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));

/**
 * HTTP with port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTP)
 */
@property (readonly) TCSDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));

/**
 * secure HTTPS with port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTPS)
 */
@property (readonly) TCSDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));

/**
 * Socks proxy url protocol.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.SOCKS)
 */
@property (readonly) TCSDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));

/**
 * Web socket over HTTP on port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WS)
 */
@property (readonly) TCSDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));

/**
 * Web socket over secure HTTPS on port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WSS)
 */
@property (readonly) TCSDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));

/**
 * Protocols by names map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.byName)
 */
@property (readonly) NSDictionary<NSString *, TCSDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface TCSDKKtor_httpHeaderValueParam : TCSDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (TCSDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface TCSDKKtor_httpHeaderValueWithParametersCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parse header with parameter and pass it to [init] function to instantiate particular type
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.Companion.parse)
 */
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<TCSDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface TCSDKKtor_httpContentTypeCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parses a string representing a `Content-Type` header into a [ContentType] instance.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.parse)
 */
- (TCSDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));

/**
 * Represents a pattern `* / *` to match any content type.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.Any)
 */
@property (readonly) TCSDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * A reference that child receives from its parent when it is being cancelled by the parent.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol TCSDKKotlinx_coroutines_coreParentJob <TCSDKKotlinx_coroutines_coreJob>
@required

/**
 * Child job is using this method to learn its cancellation cause when the parent cancels it with [ChildJob.parentCancelled].
 * This method is invoked only if the child was not already being cancelled.
 *
 * Note that [CancellationException] is the method's return type: if child is cancelled by its parent,
 * then the original exception is **already** handled by either the parent or the original source of failure.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (TCSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * Internal representation of `select` instance.
 *
 * @suppress **This is unstable API, and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol TCSDKKotlinx_coroutines_coreSelectInstance
@required

/**
 * When this `select` instance is stored as a waiter, the specified [handle][disposableHandle]
 * defines how the stored `select` should be removed in case of cancellation or another clause selection.
 */
- (void)disposeOnCompletionDisposableHandle:(id<TCSDKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));

/**
 * When a clause becomes selected during registration, the corresponding internal result
 * (which is further passed to the clause's [ProcessResultFunction]) should be provided
 * via this function. After that, other clause registrations are ignored and [trySelect] fails.
 */
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));

/**
 * This function should be called by other operations,
 * which are trying to perform a rendezvous with this `select`.
 * Returns `true` if the rendezvous succeeds, `false` otherwise.
 *
 * Note that according to the current implementation, a rendezvous attempt can fail
 * when either another clause is already selected or this `select` is still in
 * REGISTRATION phase. To distinguish the reasons, [SelectImplementation.trySelectDetailed]
 * function can be used instead.
 */
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));

/**
 * The context of the coroutine that is performing this `select` operation.
 */
@property (readonly) id<TCSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface TCSDKKtor_utilsWeekDayCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (TCSDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short week day name [WeekDay.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (TCSDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface TCSDKKtor_utilsMonthCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (TCSDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short month name [Month.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (TCSDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface TCSDKKotlinKTypeProjection : TCSDKBase
- (instancetype)initWithVariance:(TCSDKKotlinKVariance * _Nullable)variance type:(id<TCSDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TCSDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (TCSDKKotlinKTypeProjection *)doCopyVariance:(TCSDKKotlinKVariance * _Nullable)variance type:(id<TCSDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TCSDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) TCSDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol TCSDKKotlinx_io_coreRawSink <TCSDKKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(TCSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end


/**
 * A sink that facilitates typed data writes and keeps a buffer internally so that caller can write some data without
 * sending it directly to an upstream.
 *
 * [Sink] is the main `kotlinx-io` interface to write data in client's code,
 * any [RawSink] could be turned into [Sink] using [RawSink.buffered].
 *
 * Depending on the kind of upstream and the number of bytes written, buffering may improve the performance
 * by hiding the latency of small writes.
 *
 * Data stored inside the internal buffer could be sent to an upstream using [flush], [emit], or [hintEmit]:
 * - [flush] writes the whole buffer to an upstream and then flushes the upstream.
 * - [emit] writes all data from the buffer into the upstream without flushing it.
 * - [hintEmit] hints the source that current write operation is now finished and a part of data from the buffer
 * may be partially emitted into the upstream.
 * The latter is aimed to reduce memory footprint by keeping the buffer as small as possible without excessive writes
 * to the upstream.
 * All write operations implicitly calls [hintEmit].
 *
 * ### Write methods' behavior and naming conventions
 *
 * Methods writing a value of some type are usually named `write<Type>`, like [writeByte] or [writeInt], except methods
 * writing data from a some collection of bytes, like `write(ByteArray, Int, Int)` or
 * `write(source: RawSource, byteCount: Long)`.
 * In the latter case, if a collection is consumable (i.e., once data was read from it will no longer be available for
 * reading again), write method will consume as many bytes as it was requested to write.
 *
 * Methods fully consuming its argument are named `transferFrom`, like [transferFrom].
 *
 * It is recommended to follow the same naming convention for Sink extensions.
 *
 * ### Thread-safety guarantees
 *
 * Until stated otherwise, [Sink] implementations are not thread safe.
 * If a [Sink] needs to be accessed from multiple threads, an additional synchronization is required.
 */
__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol TCSDKKotlinx_io_coreSink <TCSDKKotlinx_io_coreRawSink>
@required

/**
 * Writes all buffered data to the underlying sink if one exists.
 * The underlying sink will not be explicitly flushed.
 *
 * This method behaves like [flush], but has weaker guarantees.
 * Call this method before a buffered sink goes out of scope so that its data can reach its destination.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.emit
 */
- (void)emit __attribute__((swift_name("emit()")));

/**
 * Hints that the buffer may be *partially* emitted (see [emit]) to the underlying sink.
 * The underlying sink will not be explicitly flushed.
 * There are no guarantees that this call will cause emit of buffered data as well as
 * there are no guarantees how many bytes will be emitted.
 *
 * Typically, application code will not need to call this: it is only necessary when
 * application code writes directly to this [buffered].
 * Use this to limit the memory held in the buffer.
 *
 * Consider using [Sink.writeToInternalBuffer] for writes into [buffered] followed by [hintEmit] call.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));

/**
 * Removes all bytes from [source] and write them to this sink.
 * Returns the number of bytes read which will be 0 if [source] is exhausted.
 *
 * @param source the source to consume data from.
 *
 * @throws IllegalStateException when the sink or [source] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.transferFrom
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (int64_t)transferFromSource:(id<TCSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));

/**
 * Removes [byteCount] bytes from [source] and write them to this sink.
 *
 * If [source] will be exhausted before reading [byteCount] from it then an exception throws on
 * an attempt to read remaining bytes will be propagated to a caller of this method.
 *
 * @param source the source to consume data from.
 * @param byteCount the number of bytes to read from [source] and to write into this sink.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the sink or [source] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeSourceToSink
 */
- (void)writeSource:(id<TCSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));

/**
 * Writes bytes from [source] array or its subrange to this sink.
 *
 * @param source the array from which bytes will be written into this sink.
 * @param startIndex the start index (inclusive) of the [source] subrange to be written, 0 by default.
 * @param endIndex the endIndex (exclusive) of the [source] subrange to be written, size of the [source] by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of range of [source] array indices.
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeByteArrayToSink
 */
- (void)writeSource:(TCSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));

/**
 * Writes a byte to this sink.
 *
 * @param byte the byte to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeByte
 */
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));

/**
 * Writes four bytes containing [int], in the big-endian order, to this sink.
 *
 * @param int the integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeInt
 */
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));

/**
 * Writes eight bytes containing [long], in the big-endian order, to this sink.
 *
 * @param long the long integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeLong
 */
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));

/**
 * Writes two bytes containing [short], in the big-endian order, to this sink.
 *
 * @param short the short integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeShort
 */
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * This sink's internal buffer. It contains data written to the sink, but not yet flushed to the upstream.
 *
 * Incorrect use of the buffer may cause data loss or unexpected data being sent to the upstream.
 * Consider using alternative APIs to write data into the sink, if possible:
 * - write data into separate [Buffer] instance and write that buffer into the sink and then flush the sink to
 *   ensure that the upstream will receive complete data;
 * - implement [RawSink] and wrap an upstream sink into it to intercept data being written.
 *
 * If there is an actual need to write data directly into the buffer, consider using [Sink.writeToInternalBuffer] instead.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) TCSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end


/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface TCSDKKotlinx_io_coreBuffer : TCSDKBase <TCSDKKotlinx_io_coreSource, TCSDKKotlinx_io_coreSink>

/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Discards all bytes in this buffer.
 *
 * Call to this method is equivalent to [skip] with `byteCount = size`.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferClear
 */
- (void)clear __attribute__((swift_name("clear()")));

/**
 * This method does not affect the buffer.
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Returns a deep copy of this buffer.
 */
- (TCSDKKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * Copies bytes from this buffer's subrange starting at [startIndex] and ending at [endIndex], to [out] buffer.
 * This method does not consume data from the buffer.
 *
 * @param out the destination buffer to copy data into.
 * @param startIndex the index (inclusive) of the first byte of data in this buffer to copy,
 * 0 by default.
 * @param endIndex the index (exclusive) of the last byte of data in this buffer to copy, `buffer.size` by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of this buffer bounds
 * (`[0..buffer.size)`).
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferCopy
 */
- (void)doCopyToOut:(TCSDKKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 */
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 */
- (void)flush __attribute__((swift_name("flush()")));

/**
 * Returns the byte at [position].
 *
 * Use of this method may expose significant performance penalties and it's not recommended to use it
 * for sequential access to a range of bytes within the buffer.
 *
 * @throws IndexOutOfBoundsException when [position] is negative or greater or equal to [Buffer.size].
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferGetByte
 */
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<TCSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(TCSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(TCSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<TCSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));

/**
 * Discards [byteCount] bytes from the head of this buffer.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 */
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));

/**
 * Returns a human-readable string that describes the contents of this buffer. For buffers containing
 * few bytes, this is a string like `Buffer(size=4 hex=0000ffff)`. However, if the buffer is too large,
 * a string will contain its size and only a prefix of data, like `Buffer(size=1024 hex=01234…)`.
 * Thus, the string could not be used to compare buffers or verify buffer's content.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferToString
 */
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<TCSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<TCSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(TCSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<TCSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(TCSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * Returns the buffer itself.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) TCSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));

/**
 * The number of bytes accessible for read from this buffer.
 */
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface TCSDKKotlinKVariance : TCSDKKotlinEnum<TCSDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TCSDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) TCSDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) TCSDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (TCSDKKotlinArray<TCSDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TCSDKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface TCSDKKotlinKTypeProjectionCompanion : TCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TCSDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (TCSDKKotlinKTypeProjection *)contravariantType:(id<TCSDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (TCSDKKotlinKTypeProjection *)covariantType:(id<TCSDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (TCSDKKotlinKTypeProjection *)invariantType:(id<TCSDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) TCSDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
