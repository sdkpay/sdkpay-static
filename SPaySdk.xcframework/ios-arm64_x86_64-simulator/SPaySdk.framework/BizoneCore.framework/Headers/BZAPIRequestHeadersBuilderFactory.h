//
//  BZAPIRequestHeadersBuilderFactory.h
//  BizoneCore
//
//  Created by Andrey Babiy on 09.09.2021.
//  Copyright © 2021 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BZAPIRequestHeadersBuilderProtocol;


NS_ASSUME_NONNULL_BEGIN


/**
 * Foctory for  APIRequestHeaderBuilder
 */
NS_SWIFT_NAME(APIRequestHeadersBuilderFactory)
@interface BZAPIRequestHeadersBuilderFactory : NSObject

/**
 * BZAPIRequestHeaderBuilder SDK factory creation method.
 */
+ (id<BZAPIRequestHeadersBuilderProtocol>)createHeadersBuilder;

@end


NS_ASSUME_NONNULL_END
