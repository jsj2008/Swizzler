/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "ArchiveEntryDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface ArchiveEntry : _ABAddressBookAddRecord <ArchiveEntryDelegate>
{
    NSMutableArray *childEntries;
    BOOL isLeaf;
    NSString *name;
    int entryID;
    unsigned int compressedSize;
    unsigned int uncompressedSize;
    id <ArchiveEntryProgressDelegate> progressDelegate;
    NSString *path;
}

- (void)setProgressDelegate:(id)fp8;
- (id)progressDelegate;
- (unsigned int)uncompressedSize;
- (unsigned int)compressedSize;
- (int)entryID;
- (id)path;
- (id)name;
- (BOOL)isLeaf;
- (void)dealloc;
- (BOOL)hasPassword;
- (id)extractWithPasswd:(id)fp8;
- (id)extract;
- (id)childEntries;

@end

