//
//  FPConfiguration.h
//  Fingerprint
//
//  Created by a.babiy on 27.04.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FPCachingTime.h"
#import <LocalAuthentication/LocalAuthentication.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FPConfigurationProtocol <NSObject>

/**
 * Geo location caching time options.
 */
@property FPCachingTime cachingTime;

/**
 * Use rsa app key.
 */
@property (nonatomic) Boolean useRSAAppkey;

/**
 * Set key for HMAC hash. Overrides default.
 */
@property (copy, nonatomic) NSString *keyForHMACHash;

/**
 * Enable usage IDFA(parameter AdvertiserID) in SDK for ios 14 and higher.
 * Warning: While this parameter enabled .plist entry have be present in parent application.
 * If not application will crash.
 * Example: <key>NSUserTrackingUsageDescription</key>
 * <string>App would like to access IDFA for tracking purpose</string>
 */
@property (nonatomic) Boolean useAdvertiserID;

/**
 * Enables bluetooth metrics poll, like: BluetoothState and BluetoothDevices.
 * When enabled user receives message with permission request in runtime. When
 * SKD address to bluetooth metrics.
 */
@property (nonatomic) Boolean useBluetoothMetrics;

/**
 * Dictionary with metric patches.
 */
@property (copy, nonatomic) NSDictionary *metricPatches;

/**
 * Array with external parameters.
 */
@property (copy, nonatomic) NSMutableArray *externalParameters;

/**
 * External LAContext for AuthenticationInfo metrics.
 */
@property LAContext *localAuthenticationContext;

@end


@interface FPConfiguration : NSObject <FPConfigurationProtocol>

@end

NS_ASSUME_NONNULL_END
