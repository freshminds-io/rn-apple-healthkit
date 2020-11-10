#import "RCTAppleHealthKit+Methods_Workout.h"
#import "RCTAppleHealthKit+Utils.h"

@implementation RCTAppleHealthKit (Methods_Workout)

-(void)workout_save: (NSDictionary *)input callback: (RCTResponseSenderBlock)callback {
    HKWorkoutActivityType type = [RCTAppleHealthKit hkWorkoutActivityTypeFromOptions:input key:@"type" withDefault:HKWorkoutActivityTypeAmericanFootball];
    NSDate *startDate = [RCTAppleHealthKit dateFromOptions:input key:@"startDate" withDefault:nil];
    NSDate *endDate = [RCTAppleHealthKit dateFromOptions:input key:@"endDate" withDefault:nil];
    NSTimeInterval duration = [RCTAppleHealthKit doubleFromOptions:input key:@"duration" withDefault:(NSTimeInterval)0];
    HKQuantity *totalEnergyBurned = [RCTAppleHealthKit hkQuantityFromOptions:input valueKey:@"energyBurned" unitKey:@"energyBurnedUnit"];
    HKQuantity *totalDistance = [RCTAppleHealthKit hkQuantityFromOptions:input valueKey:@"distance" unitKey:@"distanceUnit"];


    HKWorkout *workout = [HKWorkout workoutWithActivityType:type startDate:startDate endDate:endDate duration:duration totalEnergyBurned:totalEnergyBurned totalDistance:totalDistance metadata: nil];

    void (^completion)(BOOL success, NSError *error);

    completion = ^(BOOL success, NSError *error){
        if(!success) {
            NSLog(@"An error occured saving the workout %@. The error was: %@.", workout, error);
            callback(@[RCTMakeError(@"An error occured saving the workout", error, nil)]);
            return;
        }
        callback(@[[NSNull null], [[workout UUID] UUIDString]]);
    };

    [self.healthStore saveObject:workout withCompletion:completion];

}

-(void)workout_can_write: (RCTResponseSenderBlock)callback {
    self.healthStore = [[HKHealthStore alloc] init];

    if ([HKHealthStore isHealthDataAvailable]) {
        HKObjectType *type = [HKWorkoutType workoutType];

        HKAuthorizationStatus canWriteStatus = [self.healthStore authorizationStatusForType:(type)];

        BOOL canWrite = canWriteStatus == HKAuthorizationStatusSharingAuthorized;

        callback(@[[NSNull null], @(canWrite)]);
    } else {
        callback(@[[NSNull null], @false]);
    }
}
@end
