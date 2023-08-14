//
//  FPCachingTime.h
//  Fingerprint
//
//  Created by a.babiy on 27.04.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

/**
 * Geo location caching time options.
 */
typedef NS_ENUM(NSUInteger, FPCachingTime) {
	cacheDisabled = 0,
	testPeriodFor20Sec = 20000,
	oneDay = 86400000,
	twoDays = 172800000,
	threeDays = 259200000,
	fourDays = 345600000
};
