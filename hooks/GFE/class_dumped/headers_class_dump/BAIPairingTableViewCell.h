//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView;

@interface BAIPairingTableViewCell : UITableViewCell
{
    UIActivityIndicatorView *activityIndicator;
}

@property(readonly) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

