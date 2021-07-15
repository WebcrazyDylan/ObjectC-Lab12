//
//  StripePaymentService.h
//  Lab12
//
//  Created by Dylan Park on 2021-07-15.
//

#import <Foundation/Foundation.h>
#import "PaymentGateway.h"

NS_ASSUME_NONNULL_BEGIN

@interface StripePaymentService : NSObject <PaymentDelegate>;

@end

NS_ASSUME_NONNULL_END
