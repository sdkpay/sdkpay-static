//
//  FPSDKFactory.h
//  Fingerprint
//
//  Created by Guseinov Artur on 13.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FPReportProviderProtocol;
@protocol FPConfigurationProtocol;


NS_ASSUME_NONNULL_BEGIN


@interface FPSDKFactory : NSObject

/**
 * Fingerprint SDK factory creation method.
 */
+ (id<FPReportProviderProtocol>)createWithConfiguration:(id<FPConfigurationProtocol>)configuration;

@end


NS_ASSUME_NONNULL_END
