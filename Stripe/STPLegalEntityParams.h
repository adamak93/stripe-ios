//
//  STPLegalEntityParams.h
//  Stripe
//
//  Created by Daniel Jackson on 12/20/17.
//  Copyright © 2017 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "STPFormEncodable.h"

@class STPAddress;


@interface STPVerificationParams: NSObject<STPFormEncodable>
@property (nonatomic, copy, nullable) NSString *document;
@end


@interface STPPersonParams: NSObject<STPFormEncodable>
@property (nonatomic, copy, nullable) NSString *firstName;
@property (nonatomic, copy, nullable) NSString *lastName;
@property (nonatomic, copy, nullable) NSString *maidenName;
@property (nonatomic, strong, nullable) STPAddress *address;
@property (nonatomic, copy, nullable) NSDateComponents *dateOfBirth;
@property (nonatomic, strong, nullable) STPVerificationParams *verification;
@end


typedef NS_ENUM(NSUInteger, STPLegalEntityType) {
    STPLegalEntityTypeIndividual,
    STPLegalEntityTypeCompany,
};


@interface STPLegalEntityParams : STPPersonParams
@property (nonatomic, strong, nullable) NSArray<STPPersonParams *> *additionalOwners;
@property (nonatomic, copy, nullable) NSString *businessName;
@property (nonatomic, copy, nullable) NSString *businessTaxId;
@property (nonatomic, copy, nullable) NSString *businessVATId;
@property (nonatomic, copy, nullable) NSString *gender;
@property (nonatomic, strong, nullable) STPAddress *personalAddress;
@property (nonatomic, copy, nullable) NSString *personalIdNumber;
@property (nonatomic, copy, nullable) NSString *phoneNumber;
@property (nonatomic, copy, nullable) NSString *ssnLast4;
@property (nonatomic, copy, nullable) NSString *taxIdRegistrar;
@end

