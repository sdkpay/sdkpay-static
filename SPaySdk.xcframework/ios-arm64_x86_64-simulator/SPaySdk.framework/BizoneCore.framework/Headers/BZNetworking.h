//
//  Networking.h
//  Core
//
//  Created by Guseinov Artur on 20.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BZAPIDataRequest;
@protocol BZAPIDownloadRequest;
@protocol BZAPIClient;
@protocol BZJSONDecodable;
@protocol BZAuthorizationHandler;


NS_ASSUME_NONNULL_BEGIN


typedef void(^BZNetworkingObjectCompletionBlock)(id<BZJSONDecodable> _Nullable object, NSError * _Nullable error) NS_SWIFT_NAME(NetworkingObjectCompletionBlock);
typedef void(^BZNetworkingDataCompletionBlock)(NSData * _Nullable data, NSError * _Nullable error) NS_SWIFT_NAME(NetworkingDataCompletionBlock);
typedef void(^BZNetworkingObjectArrayCompletionBlock)(NSArray<id<BZJSONDecodable>> * _Nullable objects, NSError * _Nullable error) NS_SWIFT_NAME(NetworkingObjectArrayCompletionBlock);
typedef void(^BZNetworkingJSONCompletionBlock)(NSDictionary * _Nullable json, NSError * _Nullable error) NS_SWIFT_NAME(NetworkingJSONCompletionBlock);
typedef void(^BZNetworkingBlobCompletionBlock)(NSError * _Nullable error) NS_SWIFT_NAME(NetworkingBlobCompletionBlock);
typedef void(^BZNetworkingDownloadCompletionBlock)(NSURL * _Nullable location, NSError * _Nullable error) NS_SWIFT_NAME(NetworkingDownloadCompletionBlock);
typedef void(^BZNetworkingUploadCompletionBlock)(NSError * _Nullable error, NSURLResponse * _Nullable response) NS_SWIFT_NAME(NetworkingUploadCompletionBlock);


NS_SWIFT_NAME(Networking)
@interface BZNetworking : NSObject

- (instancetype)initWithClient:(id<BZAPIClient>)client
		  authorizationHandler:(id<BZAuthorizationHandler> _Nullable)authorizationHandler;

/**
 * Common initialization refused
 */
- (instancetype)init NS_UNAVAILABLE;

- (void)authorize:(BZNetworkingBlobCompletionBlock)completion;

- (NSURLSessionTask *)loadJSONWithRequest:(id<BZAPIDataRequest>)request
				 completion:(BZNetworkingJSONCompletionBlock)completion;

- (NSURLSessionTask *)loadDataWithRequest:(id<BZAPIDataRequest>)request
				 completion:(BZNetworkingDataCompletionBlock)completion;

- (NSURLSessionTask *)loadBlobWithRequest:(id<BZAPIDataRequest>)request
				 completion:(BZNetworkingBlobCompletionBlock)completion;

- (NSURLSessionTask *)loadObjectWithRequest:(id<BZAPIDataRequest>)request
				   completion:(BZNetworkingObjectCompletionBlock)completion;

- (NSURLSessionTask *)loadObjectArrayWithRequest:(id<BZAPIDataRequest>)request
						completion:(BZNetworkingObjectArrayCompletionBlock)completion;

- (NSURLSessionTask *)downloadWithRequest:(id<BZAPIDownloadRequest>)request
				 completion:(BZNetworkingDownloadCompletionBlock)completion;

- (NSURLSessionTask *)uploadWithRequest:(id<BZAPIDataRequest>)request
				 completion:(BZNetworkingUploadCompletionBlock)completion;

@end


NS_ASSUME_NONNULL_END
