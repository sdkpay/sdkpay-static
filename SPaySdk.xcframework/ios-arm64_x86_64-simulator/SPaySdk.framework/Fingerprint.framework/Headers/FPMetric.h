//
//  FPMetric.h
//  Fingerprint
//
//  Created by Guseinov Artur on 12.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(int, FPMetric) {
	FPMetricDeviceName, /**< Device name metric */
	FPMetricHardwareID, /**< Harware id metric */
	FPMetricDeviceModel, /**< Device model metric */
	FPMetricTimeZoneDSTOffset, /**< Device DST offset metric */
	FPMetricMNC, /**< Cell mnc metric */
	FPMetricMCC, /**< Cell mcc metric */
	FPMetricWiFiNetworksData, /**< Network group metric */
	FPMetricSSID, /**< Network group metric */
	FPMetricBSSID, /**< Network group metric */
	FPMetricLocalIP4, /**< Local IPv4 metric */
	FPMetricLocalIP6, /**< Local IPv4 metric */
	FPMetricDeviceSystemVersion, /**< OS version metric */
	FPMetricEmulator, /**< isEmulator metric */
	FPMetricMultitaskingSupported, /**< MultitaskingSupported metric */
	FPMetricTIMESTAMP, /**< Timestamp metric*/
	FPMetricDeviceSystemName, /**< Device system name metric. OS name*/
	FPMetricScreenSize, /**< Screen resolution metric*/
	FPMetricLanguages, /**< Language and region metric*/
	FPMetricCompromised, /**< Jailbroke metric*/
	FPMetricOSID, /**< OS_ID metric. Guid.*/
	FPMetricAppKey, /**< Appkey metric.*/
	FPMetricAdvertiserId, /**< iOS advertiser id metric*/
	FPMetricAgentBrand, /**< Device brand metric*/
	FPMetricAgentSignalStrengthCellular, /**< Cellular signal strength metric*/
	FPMetricAgentBootTime, /**< Device uptime metric*/
	FPMetricAgentAppInfo, /**< Device app name, version and archirecture metric*/
	FPMetricDnsIP, /**< Device DNS addresses metric*/
	FPMetricOSFontsHash, /**< All system fonts hash metric*/
	FPMetricOSFontsNumber, /**< All fonts number metric*/
	FPMetricScreenColorDepth, /**< Screen color depth metric*/
	FPMetricTimeZone, /**< Device timezone metric*/
	FPMetricAgentConnectionType, /**< Network connection type metric*/
	FPMetricAgentSignalTypeCellular, /**< Cell Network connection type metric*/
	FPMetricRDPConnection, /**< Rdp connection checker metric*/
	FPMetricRDPConnectionDuration, /**< Rdp connection duration metric*/
	FPMetricLocationHash, /**< Location hash metric*/
	FPMetricRSA_ApplicationKey, /**< RSA Application key metric*/
	
	FPMetricGeoLocationInfo, /**< Goelocation composite metric*/
	FPMetricLatitude, /**< Latitude metric*/
	FPMetricLongitude, /**< Longitude metric*/
	FPMetricAltitude, /**< Altitude metric*/
	FPMetricHorizontalAccuracy, /**< HorizontalAccuracy metric*/
	FPMetricAltitudeAccuracy, /**< AltitudeAccuracy metric*/
	FPMetricGPSTimestamp, /**< Timestamp metric*/
	FPMetricGPSStatus, /**< Status metric*/
	
	FPMetricSDKVersion, /**< SDK version*/
	
	FPMetricPhoneCallState, /**< Phone call state. Connected, on hold ets*/
	FPMetricPhoneCallDirection, /**< Phone call direction. Incoming, outgoing ets*/
	FPMetricPhoneCallDuration, /**< Phone call duration. Incoming, outgoing ets*/
	FPMetricPhoneCallType, /**< Phone call type. Voip, cell ets*/
	
	FPMetricAccessibilityServices, /**<AccessibilityServices info */
	FPMetricVoiceOver, /**<Detect VoiceOver */
	
	FPMetricAuthenticationInfo, /**<Authentication metric info */
	FPMetricDeviceUnlocked, /**<DeviceUnlocked metric info*/
	FPMetricBioAuthFirstMethod, /**<Biometric auth first method info*/
	FPMetricHoursSinceAuthDbUpdateDetected, /**<Hours since auth DB update detected info*/
	FPMetricIsAuthDataKeychainStored, /**<Password stored in Keychain metric.*/
	
	FPMetricShareScreen, /**<Detect screen shared by airplay.*/
	FPMetricShareScreenInfo, /**<Connected devices by airplay info */
	FPMetricConnectedDevicePortId, /**<Connected device unique port id */
	FPMetricConnectedDeviceName, /**<Connected device name */
	
	FPMetricBluetoothState, /**<Bluetooth state.*/
	FPMetricBluetoothDevices, /**<Collection of connected bluetooth devices.*/
	
	FPMetricVpnConnection, /**<Detect VPN connection.*/
	
	FPMetricOtherAudioPlaying, /**<Check if other audio playing.*/

	FPMetricScreenshotCounter, /**<Counts screenshots.*/
	
	FPMetricEmpty /**< Empty metric. Used when no empty metric needed.*/
};

/**
 * Determine metrics key string.
 */
extern NSString * const FPMetric_toString[];
