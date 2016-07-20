//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GDDirectByteBuffer;

@interface GDSocket : NSObject
{
    id <GDSocketDelegate> delegate;
    void *m_socketInternal;
    GDDirectByteBuffer *writeStream;
    GDDirectByteBuffer *readStream;
}

@property(retain, nonatomic) GDDirectByteBuffer *writeStream; // @synthesize writeStream;
@property(retain, nonatomic) GDDirectByteBuffer *readStream; // @synthesize readStream;
@property(nonatomic) id <GDSocketDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)disconnect;
- (void)write;
- (void)connect;
- (BOOL)disablePeerVerification;
- (BOOL)disableHostVerification;
- (id)init:(const char *)arg1 onPort:(int)arg2 andUseSSL:(BOOL)arg3;

@end
