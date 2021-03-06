//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

#import "GUSwipeTrackerDelegate.h"

@class GUSwipeTracker, KLGenericViewController, NSMutableArray;

@interface KLGridView : UIView <GUSwipeTrackerDelegate>
{
    unsigned int _numberOfColumns;
    NSMutableArray *_tiles;
    GUSwipeTracker *swipeTracker;
    KLGenericViewController *controller;
}

- (void)dealloc;
- (void)wasSwipedRightInView:(id)arg1;
- (void)wasSwipedLeftInView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)rightNeighborOfTile:(id)arg1;
- (id)leftNeighborOfTile:(id)arg1;
- (void)redrawNeighborsAndTile:(id)arg1;
- (void)redrawAllTiles;
- (id)tileOrNilAtIndex:(int)arg1;
- (void)flipView:(id)arg1 toRevealView:(id)arg2 transition:(int)arg3;
- (void)removeAllTiles;
- (BOOL)hasTile:(id)arg1;
- (void)addTile:(id)arg1;
- (void)layoutSubviews;
- (float)rowHeight;
- (float)columnWidth;
- (id)tileForDate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

