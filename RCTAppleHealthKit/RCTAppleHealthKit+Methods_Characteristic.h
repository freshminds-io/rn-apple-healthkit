#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Characteristic)

- (void)characteristic_getBiologicalSex:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)characteristic_getDateOfBirth:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
