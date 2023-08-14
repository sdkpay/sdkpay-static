//
//  BZDefaultAPIClient.h
//  Core
//
//  Created by Guseinov Artur on 20.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BZAPIDataRequest;
@protocol BZAPIDownloadRequest;


NS_ASSUME_NONNULL_BEGIN


typedef void(^APIClientCompletionBlock)(id _Nullable object, NSURLResponse *response,  NSError * _Nullable error);

NS_SWIFT_NAME(APIClient)
@protocol BZAPIClient <NSObject>

- (NSURLSessionDataTask *)dataTaskWithAPIRequest:(id<BZAPIDataRequest>)request
									  completion:(APIClientCompletionBlock)completion;

- (NSURLSessionDownloadTask *)downloadTaskWithAPIRequest:(id<BZAPIDownloadRequest>)request
											  completion:(APIClientCompletionBlock)completion;

- (NSURLSessionUploadTask *)uploadTaskWithAPIRequest:(id<BZAPIDataRequest>)request
										  completion:(APIClientCompletionBlock)completion;

@end


NS_SWIFT_NAME(DefaultAPIClient)
@interface BZDefaultAPIClient: NSObject <BZAPIClient>

- (instancetype)initWithSession:(NSURLSession *)session;

/**
 * Common initialization refused
 */
- (instancetype)init NS_UNAVAILABLE;

@end


NS_ASSUME_NONNULL_END
