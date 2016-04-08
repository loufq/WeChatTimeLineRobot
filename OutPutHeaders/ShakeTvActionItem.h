/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"
#import "WeChat-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSMutableArray, NSString, ShakeUserItem, ShakeUrlItem, ShakePayItem, ShakeProductItem;

@interface ShakeTvActionItem : XXUnknownSuperclass <PBCoding, NSCoding, NSCopying> {
	int actionType;
	NSString* commentId;
	NSString* title;
	NSString* url;
	NSString* summary;
	NSMutableArray* thumbUrls;
	ShakeUserItem* userItem;
	ShakePayItem* payItem;
	ShakeProductItem* productItem;
	ShakeUrlItem* urlItem;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ShakeUrlItem* urlItem;
@property(retain, nonatomic) ShakeProductItem* productItem;
@property(retain, nonatomic) ShakePayItem* payItem;
@property(retain, nonatomic) ShakeUserItem* userItem;
@property(retain, nonatomic) NSMutableArray* thumbUrls;
@property(retain, nonatomic) NSString* summary;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* commentId;
@property(assign, nonatomic) int actionType;
+(void)initialize;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
