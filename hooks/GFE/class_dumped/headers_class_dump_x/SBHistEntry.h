/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSDate, NSString;

@interface SBHistEntry : _ABAddressBookAddRecord
{
    NSDate *date;
    NSString *name;
    NSString *url;
}

- (void)setUrl:(id)fp8;
- (id)url;
- (void)setName:(id)fp8;
- (id)name;
- (void)setDate:(id)fp8;
- (id)date;
- (void)dealloc;
- (id)initWithDate:(id)fp8 name:(id)fp12 url:(id)fp16;

@end
