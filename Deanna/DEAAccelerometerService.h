//
//  DTAccelerometerBTService.h
//  Deanna
//
//  Created by Charles Choi on 12/18/12.
//  Copyright (c) 2012 Yummy Melon Software. All rights reserved.
//

#import "YMSCBService.h"

@interface DEAAccelerometerService : YMSCBService

@property (nonatomic, strong) NSNumber *x;
@property (nonatomic, strong) NSNumber *y;
@property (nonatomic, strong) NSNumber *z;

@end
