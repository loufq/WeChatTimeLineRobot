/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSData;

@interface MMPatchInfo : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned newClientVersion;
@property(assign, nonatomic) unsigned maxClientVersion;
@property(assign, nonatomic) unsigned minClientVersion;
@property(assign, nonatomic) unsigned jsVersion;
@property(retain, nonatomic) NSData* obscureDkey;
@property(retain, nonatomic) NSData* obscureData;
+(void)initialize;
@end

