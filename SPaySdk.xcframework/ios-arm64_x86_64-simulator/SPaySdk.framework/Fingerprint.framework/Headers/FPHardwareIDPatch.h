//
//  FPHardwareIDPatch.h
//  Fingerprint
//
//  Created by Andrey Babiy on 25.03.2021.
//  Copyright © 2021 BIZONE. All rights reserved.
//

#import "FPMetricPatch.h"
#import "FPMetricPatchProtocol.h"


NS_ASSUME_NONNULL_BEGIN


/**
 * Example patch.
 * Patches HardwareID.
 * Replaces HardwareID with OS_ID metric if HardwareID is empty.
 */
NS_SWIFT_NAME(HardwareIDPatch)
@interface FPHardwareIDPatch : FPMetricPatch  <FPMetricPatchProtocol>

@end

NS_ASSUME_NONNULL_END
