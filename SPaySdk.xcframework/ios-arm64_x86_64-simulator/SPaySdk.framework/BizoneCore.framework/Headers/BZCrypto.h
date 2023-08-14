//
//  BZCrypto.h
//  Core
//
//  Created by Guseinov Artur on 24.07.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BZCrypto : NSObject

/**
 * Get md5 hash from string.
 * @param string - value to hash.
 * @return md5 hash string.
 */
+ (NSString *)md5FromString:(NSString *)string;

/**
 * Get hmac hash string encrypted from string with key.
 * @param string - value to hash.
 * @param key - encryption key.
 * @return encrypted string.
 */
+ (NSString *)hmacFromString:(NSString *)string withKey:(NSString *)key;

@end


NS_ASSUME_NONNULL_END
