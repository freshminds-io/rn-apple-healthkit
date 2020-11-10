#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTUtils.h>
#import <React/RCTLog.h>
#import <React/RCTEventDispatcher.h>

@interface RCTAppleHealthKit : NSObject <RCTBridgeModule>

@property (nonatomic) HKHealthStore *healthStore;
@property BOOL isSync;

- (void)isHealthKitAvailable:(RCTResponseSenderBlock)callback;
- (void)initializeHealthKit:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)checkPermission:(NSString *)input callback:(RCTResponseSenderBlock)callback;
- (void)getModuleInfo:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
