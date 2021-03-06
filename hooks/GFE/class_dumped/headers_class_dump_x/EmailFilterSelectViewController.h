/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray;

@interface EmailFilterSelectViewController : _ABAddressBookAddRecord
{
    int _folderId;
    int _currentFilter;
    NSArray *_sortOptions;
    id <EmailFilterSelectViewControllerDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setSortOptions:(id)fp8;
- (id)sortOptions;
- (void)setCurrentFilter:(int)fp8;
- (int)currentFilter;
- (void)setFolderId:(int)fp8;
- (int)folderId;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (id)indexPathOfCurrentFilter;
- (void)initSortOptions;
- (id)initWithFolderId:(int)fp8 currentFilter:(int)fp12 delegate:(id)fp16;
- (void)dealloc;
- (id)getDefaultAutomationScreenName;

@end

