#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Workout)

-(void)workout_save: (NSDictionary *)input callback: (RCTResponseSenderBlock)callback;
-(void)workout_can_write:(RCTResponseSenderBlock)callback;

@end
