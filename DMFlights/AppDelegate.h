//
//  AppDelegate.h
//  DMFlights
//
//  Created by Matias Servetto on 6/28/15.
//  Copyright (c) 2015 Despegar.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@import DMFlightsFoundation;

@interface AppDelegate : UIResponder <UIApplicationDelegate, DMFlightSellingProvider>

@property (strong, nonatomic) UIWindow *window;


@end

