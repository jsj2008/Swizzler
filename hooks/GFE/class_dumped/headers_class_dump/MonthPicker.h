//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUOverlayModalViewMgr.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class KLCalendarModel, UIPickerView;

@interface MonthPicker : GUOverlayModalViewMgr <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *pickerView;
    id <DatePickerHandler> datePickerHandler;
    KLCalendarModel *model;
    int monthBeforeShow;
    int yearBeforeShow;
}

@property(nonatomic) id <DatePickerHandler> datePickerHandler; // @synthesize datePickerHandler;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)goCancel:(id)arg1;
- (void)goToday:(id)arg1;
- (void)goOk:(id)arg1;
- (void)dealloc;
- (void)show:(BOOL)arg1;

@end
