//
//  BZLogger.h
//  BizoneCore
//
//  Created by Andrey Babiy on 10.09.2021.
//  Copyright © 2021 BIZONE. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// Logger protocol
NS_SWIFT_NAME(CoreLoggerProtocol)
@protocol BZLoggerProtocol

/**
 * Log info message
 * @param message message text
 */
- (void)info:(NSString *)message;

/**
 * Log warning message
 * @param message message text
 */
- (void)warning:(NSString *)message;

/**
 * Log error message
 * @param message message text
 */
- (void)error:(NSString *)message;

@end


NS_SWIFT_NAME(CoreLogger)
@interface BZLogger : NSObject <BZLoggerProtocol>

@end


NS_ASSUME_NONNULL_END
