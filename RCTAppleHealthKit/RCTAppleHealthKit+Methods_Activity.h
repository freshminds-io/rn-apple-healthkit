#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Activity)

- (void)activity_getActiveEnergyBurned:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)activity_getActiveEnergyDailySamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)activity_getBasalEnergyBurned:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)activity_getBasalEnergyDailySamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
