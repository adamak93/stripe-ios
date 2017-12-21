//
//  STPLegalEntityParams.m
//  Stripe
//
//  Created by Daniel Jackson on 12/20/17.
//  Copyright © 2017 Stripe, Inc. All rights reserved.
//

#import "STPLegalEntityParams.h"

@implementation STPVerificationParams
@synthesize additionalAPIParameters;

+ (nonnull NSDictionary *)propertyNamesToFormFieldNamesMapping {
    return @{};
}

+ (nullable NSString *)rootObjectName {
    return @"verification";
}

@end

@implementation STPPersonParams

@synthesize additionalAPIParameters;

+ (nonnull NSDictionary *)propertyNamesToFormFieldNamesMapping {
    return @{};
}

+ (nullable NSString *)rootObjectName {
    return nil;
}

@end

@implementation STPLegalEntityParams

+ (nonnull NSDictionary *)propertyNamesToFormFieldNamesMapping {
    return @{};
}

+ (nullable NSString *)rootObjectName {
    return @"legal_entity";
}

@end
