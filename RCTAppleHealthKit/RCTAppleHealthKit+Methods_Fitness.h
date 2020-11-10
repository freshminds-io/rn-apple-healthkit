#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Fitness)

- (void)fitness_getStepCountOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_setObserver:(NSDictionary *)input;
- (void)fitness_getDailyStepSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_saveSteps:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_initializeStepEventObserver:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDistanceWalkingRunningOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyDistanceWalkingRunningSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyDistanceSwimmingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDistanceCyclingOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyDistanceCyclingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getFlightsClimbedOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyFlightsClimbedSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
