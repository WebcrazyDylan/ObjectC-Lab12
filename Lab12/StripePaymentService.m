//
//  StripePaymentService.m
//  Lab12
//
//  Created by Dylan Park on 2021-07-15.
//

#import "StripePaymentService.h"

@implementation StripePaymentService

- (void)processPaymentAmount:(NSInteger)amount {
    if (self.canProcessPayment) {
        NSLog(@"Stripe processed amount $ %d", (int)amount);
    } else {
        NSLog(@"The payment cannot be processed. Sorry.");
    }
}

- (BOOL)canProcessPayment {
    NSInteger binary = arc4random_uniform(2);  // 0 or 1
    if (binary == 0) {
        return NO;
    } else {
        return YES;
    }
}


@end
