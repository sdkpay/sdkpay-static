//
//  Fingerprint.h
//  Fingerprint
//
//  Created by Guseinov Artur on 18.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for Fingerprint.
FOUNDATION_EXPORT double FingerprintVersionNumber;

//! Project version string for Fingerprint.
FOUNDATION_EXPORT const unsigned char FingerprintVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Fingerprint/PublicHeader.h>

#import <Fingerprint/FPSDKFactory.h>
#import <Fingerprint/FPReportProviderProtocol.h>
#import <Fingerprint/FPMetric.h>
#import <Fingerprint/FPReport.h>
#import <Fingerprint/FPConfiguration.h>
#import <Fingerprint/FPCachingTime.h>
#import <Fingerprint/FPMetricPatchProtocol.h>
#import <Fingerprint/FPMetricPatch.h>
#import <Fingerprint/FPHardwareIDPatch.h>
#import <Fingerprint/FPMetricResolver.h>
#import <Fingerprint/FPExternalParameter.h>
#import <Fingerprint/FPExternalParameterProtocol.h>
#import <Fingerprint/FPDemoExternalParameter.h>
#import <Fingerprint/FPEventNameExternalParameter.h>
