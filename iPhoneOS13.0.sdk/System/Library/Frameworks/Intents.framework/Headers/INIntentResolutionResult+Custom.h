//
//  INIntentResolutionResult+Custom.h
//  Intents
//
//  Copyright (c) 2016-2019 Apple Inc. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

NS_ASSUME_NONNULL_BEGIN

@interface INIntentResolutionResult (Custom)

+ (instancetype)unsupportedWithReason:(NSInteger)reason NS_REFINED_FOR_SWIFT API_AVAILABLE(ios(13.0), watchos(6.0));
+ (instancetype)confirmationRequiredWithItemToConfirm:(id)itemToConfirm forReason:(NSInteger)reason NS_REFINED_FOR_SWIFT API_AVAILABLE(ios(13.0), watchos(6.0));

@end

NS_ASSUME_NONNULL_END
