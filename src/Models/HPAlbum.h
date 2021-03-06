//
//  HPAlbum.h
//  HighPerformance
//
//  Created by Gaurav Vaish on 8/17/14.
//  Copyright (c) 2014 Gaurav Vaish. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HPPhoto;

@interface HPAlbum : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSDate *creationTime;
@property (nonatomic, strong) HPPhoto *coverPhoto;
@property (nonatomic, strong) NSArray *photos;

@end
