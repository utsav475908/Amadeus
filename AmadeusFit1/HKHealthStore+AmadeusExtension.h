//
//  HKHealthStore+AmadeusExtension.h
//  AmadeusFit2
//
//  Created by kumar on 21/11/16.
//  Copyright © 2016 kumar. All rights reserved.
//
//  Easy to find the topmost stack of the data with predicate set to nil and completion block will tell the quantity from the samples. let's say 1,2,4,5,3 were the set of data entered , we just want to have the latest data, so thinking it as a stack we can pop 3.


//The HealthKit store is encrypted when user's phone is locked. This means that you won't be able to read from it when your app is in the background. Writing to HealthKit, however, works even when the phone is locked.




@import HealthKit;

@interface HKHealthStore (AmadeusExtension)

-(void)giveMeTheMostRecentQuantitySampleOfType:(HKQuantityType *)quantityType predicate:(NSPredicate *)predicate completion:(void(^)(HKQuantity *, NSError *))completion;

@end
