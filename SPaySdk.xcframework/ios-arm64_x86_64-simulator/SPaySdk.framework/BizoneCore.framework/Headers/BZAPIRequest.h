//
//  APIRequest.h
//  Core
//
//  Created by Guseinov Artur on 20.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BZHTTPMethod.h"

@protocol BZJSONDecodable;


NS_ASSUME_NONNULL_BEGIN


NS_SWIFT_NAME(APIRequest)
@protocol BZAPIRequest <NSObject>

@property (nonatomic) BZHTTPMethod method;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, nullable) NSString *path;
@property (nonatomic, nullable) NSData *data;
@property (nonatomic, copy, nullable) NSDictionary *parameters;
@property (nonatomic, copy, nullable) NSDictionary *headers;

@end


NS_SWIFT_NAME(APIDataRequest)
@protocol BZAPIDataRequest <BZAPIRequest>

- (id)processResponse:(NSURLResponse *)response
				 data:(NSData *)data
				error:(NSError *__autoreleasing *)error;

@end


NS_SWIFT_NAME(APIDownloadRequest)
@protocol BZAPIDownloadRequest <BZAPIRequest>

- (id)processResponse:(NSURLResponse *)response
			 location:(NSURL *)location
				error:(NSError *__autoreleasing *)error;

@end


NS_SWIFT_NAME(SimpleAPIRequest)
@interface BZSimpleAPIRequest : NSObject <BZAPIDataRequest>

- (instancetype)initWithBaseURL:(NSURL*)baseURL method:(BZHTTPMethod)method;

/**
 * Common initialization refused
 */
- (instancetype)init NS_UNAVAILABLE;

@end


NS_SWIFT_NAME(DownloadAPIRequest)
@interface BZDownloadAPIRequest : NSObject <BZAPIDownloadRequest>

- (instancetype)initWithBaseURL:(NSURL*)baseURL method:(BZHTTPMethod)method;

/**
 * Common initialization refused
 */
- (instancetype)init NS_UNAVAILABLE;

@end


NS_SWIFT_NAME(JSONAPIRequest)
@interface BZJSONAPIRequest : BZSimpleAPIRequest

@end


NS_SWIFT_NAME(BZObjectAPIRequest)
@interface BZObjectAPIRequest : BZJSONAPIRequest

@property (nonatomic) Class<BZJSONDecodable> objectClass;

- (instancetype)initWithBaseURL:(NSURL*)baseURL
						 method:(BZHTTPMethod)method
					objectClass:(Class<BZJSONDecodable>)objectClass;

@end


NS_SWIFT_NAME(ObjectArrayAPIRequest)
@interface BZObjectArrayAPIRequest : BZJSONAPIRequest

@property (nonatomic) Class<BZJSONDecodable> objectClass;

- (instancetype)initWithBaseURL:(NSURL*)baseURL
						 method:(BZHTTPMethod)method
					objectClass:(Class<BZJSONDecodable>)objectClass;

@end


NS_ASSUME_NONNULL_END
