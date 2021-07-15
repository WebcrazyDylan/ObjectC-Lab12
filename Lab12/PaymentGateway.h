//
//  PaymentGateway.h
//  Lab12
//
//  Created by Dylan Park on 2021-07-15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PaymentDelegate <NSObject>

- (void) processPaymentAmount: (NSInteger) amount;
- (BOOL) canProcessPayment;

@end

@interface PaymentGateway : NSObject


@property (nonatomic, weak) id<PaymentDelegate> delegate;

- (void) processPaymentAmount: (NSInteger) amount;

@end

NS_ASSUME_NONNULL_END
