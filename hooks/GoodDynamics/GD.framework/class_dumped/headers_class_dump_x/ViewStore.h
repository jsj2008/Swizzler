/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSMutableArray;

@interface ViewStore : _CATransform3DMakeScale
{
    NSMutableArray *views;
}

+ (id)sharedInstance;
- (void)setViews:(id)fp8;
- (id)views;

@end

