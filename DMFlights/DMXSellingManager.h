//
//  DMXSellingManager.h
//  DMDespegar
//
//  Created by Nicolas Miyasato on 7/15/15.
//  Copyright (c) 2015 Despegar.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@import DMFlightsFoundation;

@interface DMXSellingManager : NSObject <DMFlightXSellingProtocol>

+ (instancetype) sharedManager;

@end
