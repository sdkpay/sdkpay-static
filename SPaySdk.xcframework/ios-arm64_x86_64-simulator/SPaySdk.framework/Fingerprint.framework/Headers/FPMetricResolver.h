//
//  FPMetricResolver.h
//  Fingerprint
//
//  Created by Guseinov Artur on 13.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Fingerprint/FPMetric.h>

@protocol FPDeviceProviderProtocol;
@protocol FPCellularInfoProviderProtocol;
@protocol FPNetworkInfoProviderProtocol;
@protocol FPGeolocationProviderProtocol;
@protocol FPCallStateProviderProtocol;
@protocol FPConfigurationProtocol;
@protocol FPAuthInfoProviderProtocol;
@protocol FPShareScreenInfoProviderProtocol;
@protocol FPBluetoothInfoProviderProtocol;
@protocol FPScreenshotProviderProtocol;


NS_ASSUME_NONNULL_BEGIN


@protocol FPMetricResolverProtocol <NSObject>

/**
 * Resolve real value for metric.
 *
 * @param metric Metrics identifier.
 */
- (id)resolveMetric:(FPMetric)metric;

@end


@interface FPMetricResolver : NSObject <FPMetricResolverProtocol>

/**
 * FPMetricResolver initializer.
 *
 * @param deviceProvider Worker service for metric receiving.
 */
- (instancetype)initWithDeviceProvider:(id<FPDeviceProviderProtocol>)deviceProvider
				  cellularInfoProvider:(id<FPCellularInfoProviderProtocol>)cellularInfoProvider
				   networkInfoProvider:(id<FPNetworkInfoProviderProtocol>)networkInfoProvider
				   geolocationProvider:(id<FPGeolocationProviderProtocol>)geolocationProvider
					 callStateProvider:(id<FPCallStateProviderProtocol>)callStateProvider
					  authInfoProvider:(id<FPAuthInfoProviderProtocol>)authInfoProvider
			   shareScreenInfoProvider:(id<FPShareScreenInfoProviderProtocol>)shareScreenInfoProvider
				 bluetoothInfoProvider:(id<FPBluetoothInfoProviderProtocol>)bluetoothInfoProvider
					screenshotProvider:(id<FPScreenshotProviderProtocol>)screenshotProvider
						 configuration:(id<FPConfigurationProtocol>)configuration;

/**
 * Common initialization refused.
 */
- (instancetype)init NS_UNAVAILABLE;

@end


NS_ASSUME_NONNULL_END
