//
//  FPReportProviderProtocol.h
//  Fingerprint
//
//  Created by Guseinov Artur on 13.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FPReport.h"


@protocol FPConfigurationProtocol;


@protocol FPReportProviderProtocol <NSObject>

/**
 * Generate report with specific metrics
 *
 * @param metrics Array with metric identifiers list
 *
 * @return Report JSON String
 */
- (NSString *)reportWithMetrics:(NSArray *)metrics;

/**
 * Generate report with specific metrics
 *
 * @param metrics Array with metric identifiers list
 *
 * @return Report NSDictrionary.
 */
- (NSDictionary *)rawReportWithMetrics:(NSArray *)metrics;

/**
 * Generate report with report identifier
 *
 * @param report Report identifier
 *
 * @return Report JSON String
 */
- (NSString *)report:(enum FPReport)report;

/**
 * Generate report with report identifier
 *
 * @param report Report identifier
 *
 * @return Report NSDictrionary
 */
- (NSDictionary *)rawReport:(enum FPReport)report;

@end
