//
//  FPExternalParametherProtocol.h
//  Fingerprint
//
//  Created by Tsarkova Aleksandra on 30.03.2022.
//  Copyright © 2022 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Protocol describes how to get name and external value for external parameter .
 * This is available for parameters subclassing FPExternalParamether and
 * implementing FPExternalParametherProtocol.
 */
NS_SWIFT_NAME(ExternalParameterProtocol)
@protocol FPExternalParameterProtocol <NSObject>

/**
 * Method returns paramether name.
 */
- (NSString *)getParameterName;

/**
 * Method returns external value.
 */
- (id)getExternalValue;

@end
