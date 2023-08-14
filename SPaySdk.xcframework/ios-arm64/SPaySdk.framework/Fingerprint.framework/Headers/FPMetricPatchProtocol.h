//
//  FPMetricPatchProtocol.h
//  Fingerprint
//
//  Created by Andrey Babiy on 25.03.2021.
//  Copyright © 2021 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FPReport.h"

@protocol FPMetricResolverProtocol;

/**
 * Protocol describes how to get patched value for metric.
 * Make patches for metrics subclassing FPMetricPatch and
 * implementing FPMetricPatchProtocol.
 * See FPHardwareIDPatch for example.
 */
NS_SWIFT_NAME(MetricPatchProtocol)
@protocol FPMetricPatchProtocol <NSObject>

/**
 * Method returns patched value.
 */
- (id)getPatchedValue;

@end
