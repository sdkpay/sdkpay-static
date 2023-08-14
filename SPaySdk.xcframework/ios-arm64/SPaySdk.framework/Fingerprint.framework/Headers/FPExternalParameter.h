//
//  FPExternalParamether.h
//  Fingerprint
//
//  Created by Tsarkova Aleksandra on 30.03.2022.
//  Copyright © 2022 BIZONE. All rights reserved.
//


#import "FPExternalParameterProtocol.h"


NS_ASSUME_NONNULL_BEGIN

/**
 * This class only for subclassing.
 * Subclassing this class for new external parameters.
 */
NS_SWIFT_NAME(ExternalParameter)
@interface FPExternalParameter : NSObject <FPExternalParameterProtocol>


@end

NS_ASSUME_NONNULL_END
