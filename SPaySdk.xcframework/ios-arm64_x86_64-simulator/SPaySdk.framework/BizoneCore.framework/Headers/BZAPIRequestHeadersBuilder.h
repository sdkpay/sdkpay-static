//
//  BZAPIRequestHeadersBuilder.h
//  BizoneCore
//
//  Created by Andrey Babiy on 09.09.2021.
//  Copyright © 2021 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BZCachingHelperProtocol;
@protocol BZCoreStorageProtocol;
@protocol BZAppEnvironmentProtocol;


NS_ASSUME_NONNULL_BEGIN


typedef NSDictionary<id, id> BZAPIHeadersType NS_SWIFT_NAME(APIHeadersType);


/**
 * Describes methods that helps create api request headers
 */
NS_SWIFT_NAME(APIRequestHeadersBuilderProtocol)
@protocol BZAPIRequestHeadersBuilderProtocol

/**
 * Method for creating basic headers.
 * https://conf.bi.zone/pages/viewpage.action?pageId=140751902
 */
- (BZAPIHeadersType *)createBasicHeaders;

/**
 * Method for creating default headers
 */
- (BZAPIHeadersType *)createDefaultHeaders;

@end


NS_SWIFT_NAME(APIRequestHeaderBuilder)
@interface BZAPIRequestHeadersBuilder : NSObject <BZAPIRequestHeadersBuilderProtocol>

/**
 * BZAPIRequestHeaderBuilder initializer.
 * @param appEnv BZAppEnvironmentProtocol.
 */
- (instancetype)initWithAppEnvironment:(id<BZAppEnvironmentProtocol>)appEnv;

@end


NS_ASSUME_NONNULL_END
