//
//  BZJSONMappable.h
//  BizoneSDK
//
//  Created by Guseinov Artur on 01.04.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


NS_SWIFT_NAME(JSONDecodable)
@protocol BZJSONDecodable <NSObject>

/**
 * Object initializer from JSON dictionary
 */
- (instancetype)initWithJSON:(NSDictionary *)json;

@end


NS_SWIFT_NAME(JSONEncodable)
@protocol BZJSONEncodable <NSObject>

/**
 * Returns object json representation
 */
- (NSDictionary *)json;

@end


NS_SWIFT_NAME(JSONMappable)
@protocol BZJSONMappable <BZJSONDecodable, BZJSONEncodable>

@end


NS_ASSUME_NONNULL_END
