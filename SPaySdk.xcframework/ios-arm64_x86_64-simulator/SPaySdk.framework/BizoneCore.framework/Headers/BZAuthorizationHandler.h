//
//  AuthorizationHandler.h
//  BizoneSDK
//
//  Created by Guseinov Artur on 10.04.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//


#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN


typedef void(^AuthorizationCompletionBlock)(NSError *error);

NS_SWIFT_NAME(AuthorizationHandler)
@protocol BZAuthorizationHandler <NSObject>

/**
 * Authorization header value
 */
@property (nonatomic, copy, readonly) NSString *header;

/**
 * Refresh OAuth 2.0 tokens method
 *
 * @param completion Async callback
 */
- (void)refreshToken:(AuthorizationCompletionBlock)completion;

@end


NS_ASSUME_NONNULL_END
