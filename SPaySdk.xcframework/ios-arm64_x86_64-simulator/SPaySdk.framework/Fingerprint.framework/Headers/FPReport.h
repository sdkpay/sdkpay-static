//
//  FPReport.h
//  Fingerprint
//
//  Created by Guseinov Artur on 13.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

/**
 * Metrics list grouped in report.
 */
typedef NS_ENUM(NSUInteger, FPReport) {
	FPReportBasic, /**< Basic values report */
	FPReportBasicWithCoord, /**< Basic values with coordinates report */
	FPReportMixed, /**< Mexed values report */
	FPReportMixedWithCoord, /**< Mexed values with coordinates report */
	FPReportAFP  /**< Active Fingerprint values report */
};
