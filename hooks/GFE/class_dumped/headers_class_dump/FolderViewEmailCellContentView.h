//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class FolderViewEmailCell, FolderViewEmailItem;

@interface FolderViewEmailCellContentView : UIView
{
    FolderViewEmailCell *_cellContainer;
    FolderViewEmailItem *_listItem;
    BOOL _highlighted;
    BOOL _editing;
    BOOL _showingDeleteConfirmation;
    float _maxWidth;
}

@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) FolderViewEmailCell *cellContainer; // @synthesize cellContainer=_cellContainer;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isHighlighted;
@property(retain, nonatomic) FolderViewEmailItem *listItem;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
