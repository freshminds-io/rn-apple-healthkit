#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Dietary)

- (void)saveFood:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)saveWater:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
