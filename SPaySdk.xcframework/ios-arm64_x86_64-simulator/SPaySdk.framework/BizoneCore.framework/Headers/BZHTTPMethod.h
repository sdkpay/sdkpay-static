//
//  BZHTTPMethod.h
//  Core
//
//  Created by Guseinov Artur on 20.03.2020.
//  Copyright © 2020 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BZHTTPMethod){
    GET, POST, PUT, DELETE, HEAD
} NS_SWIFT_NAME(HTTPMethod);

extern NSString *BZHTTPMethodString(BZHTTPMethod method);
