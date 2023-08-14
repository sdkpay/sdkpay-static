//
//  FPMetricPatch.h
//  Fingerprint
//
//  Created by Andrey Babiy on 25.03.2021.
//  Copyright © 2021 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FPMetric.h"

@protocol FPMetricResolverProtocol;


NS_ASSUME_NONNULL_BEGIN

/**
 * This class only for subclassing.
 * Subclassing this class and implementing FPMetricPatchProtocol on it
 * we make patches for metrics.
 * See FPHardwareIDPatch for example.
 */
NS_SWIFT_NAME(MetricPatch)
@interface FPMetricPatch : NSObject

@property (nonatomic, readonly, assign) FPMetric metric;
@property (nonatomic, weak, readonly) id<FPMetricResolverProtocol> metricResolver;
@property (nonatomic, strong, readonly) id metricValue;

/**
 * Add MetricResolver to resolve wanted metric in our patch.
 */
- (void)addMetricResolver:(id<FPMetricResolverProtocol>)metricResolver;

/**
 * Set current value of patching metric.
 */
- (void)setCurrentMetricValue:(id)metricValue;

/**
 * FPMetricPatch initializer.
 *
 * @param metric metric to patch.
 */
- (instancetype)initWithMetric:(FPMetric)metric;

/**
 * Common initialization refused.
 */
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
