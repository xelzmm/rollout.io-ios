//
//  RolloutConfiguration.h
//  MoMe
//
//  Created by eyal keren on 3/9/14.
//  Copyright (c) 2014 eyal keren. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol RolloutNetwork;
@protocol RolloutDeviceProperties;
@protocol RolloutErrors;

@class RolloutFeatureFlagId;
@class RolloutExperiment;

@interface RolloutConfiguration : NSObject

@property (atomic) NSDictionary *conf;
@property (atomic, readonly) NSDictionary *configurationsByTweakId;

- (instancetype)initWithDeviceProperties:(id<RolloutDeviceProperties>)deviceProperties rolloutErrors:(id<RolloutErrors>)rolloutErrors;
@end

