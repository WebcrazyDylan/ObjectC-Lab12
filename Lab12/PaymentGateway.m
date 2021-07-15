//
//  PaymentGateway.m
//  Lab12
//
//  Created by Dylan Park on 2021-07-15.
//

#import "PaymentGateway.h"

@implementation PaymentGateway

- (void) processPaymentAmount: (NSInteger) amount {
    [_delegate processPaymentAmount:amount];
}

@end
