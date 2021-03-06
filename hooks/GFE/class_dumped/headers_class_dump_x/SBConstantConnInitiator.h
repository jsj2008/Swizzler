/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIWebView;

@interface SBConstantConnInitiator : _ABAddressBookAddRecord
{
    BOOL _constantConnEstablished;
    UIWebView *_constantConnWebView;
}

+ (BOOL)isConstantConnURLUtf8Str:(const char *)fp8;
+ (BOOL)isConstantConnURL:(id)fp8;
- (void)setConstantConnEstablished:(BOOL)fp8;
- (BOOL)constantConnEstablished;
- (void)constantConnInitiate;
- (void)releaseConstantConnWebView;
- (void)ensureConstantConnWebViewExists;
- (BOOL)shouldUseConstantConnWebView;
- (void)onConstantConnCloseAllConnections:(id)fp8;
- (void)onConstantConnErrorNotif:(id)fp8;
- (void)onConstantConnConnectedNotif:(id)fp8;
- (void)onConstantConnConnectingNotif:(id)fp8;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)dealloc;
- (id)init;

@end

