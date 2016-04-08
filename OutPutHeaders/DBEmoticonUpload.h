/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface DBEmoticonUpload : XXUnknownSuperclass <WCDBCoding> {
	NSString* userName;
	NSString* msgLocalId;
	NSString* md5;
	unsigned long type;
	NSString* message;
	unsigned long createTime;
	unsigned long sendTime;
	unsigned long offset;
	unsigned long length;
	unsigned long status;
	NSString* catalog;
	unsigned long catalogId;
	NSString* draft;
	unsigned long ConIntRes1;
	unsigned long ConIntRes2;
	unsigned long ConIntRes3;
	NSString* ConStrRes1;
	NSString* ConStrRes2;
	NSString* ConStrRes3;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* ConStrRes3;
@property(retain, nonatomic) NSString* ConStrRes2;
@property(retain, nonatomic) NSString* ConStrRes1;
@property(assign, nonatomic) unsigned long ConIntRes3;
@property(assign, nonatomic) unsigned long ConIntRes2;
@property(assign, nonatomic) unsigned long ConIntRes1;
@property(retain, nonatomic) NSString* draft;
@property(assign, nonatomic) unsigned long catalogId;
@property(retain, nonatomic) NSString* catalog;
@property(assign, nonatomic) unsigned long status;
@property(assign, nonatomic) unsigned long length;
@property(assign, nonatomic) unsigned long offset;
@property(assign, nonatomic) unsigned long sendTime;
@property(assign, nonatomic) unsigned long createTime;
@property(retain, nonatomic) NSString* message;
@property(assign, nonatomic) unsigned long type;
@property(retain, nonatomic) NSString* md5;
@property(retain, nonatomic) NSString* msgLocalId;
@property(retain, nonatomic) NSString* userName;
+(id)dummyObject;
-(void).cxx_destruct;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getWCDBPrimaryColumnName;
-(const WCDBIndexHelper*)getWCDBIndexArray;
-(unsigned long)getWCDBIndexArrayCount;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getFileValueTagIndexMap;
-(id)getFileValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getPackedValueTagIndexMap;
-(id)getPackedValueTypeTable;
-(const map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)getValueNameIndexMap;
-(id)getValueTable;
-(const WCDBCondition<NSString* >*)db_ConStrRes3;
-(const WCDBCondition<NSString* >*)db_ConStrRes2;
-(const WCDBCondition<NSString* >*)db_ConStrRes1;
-(const WCDBCondition<unsigned long>*)db_ConIntRes3;
-(const WCDBCondition<unsigned long>*)db_ConIntRes2;
-(const WCDBCondition<unsigned long>*)db_ConIntRes1;
-(const WCDBCondition<NSString* >*)db_draft;
-(const WCDBCondition<unsigned long>*)db_catalogId;
-(const WCDBCondition<NSString* >*)db_catalog;
-(const WCDBCondition<unsigned long>*)db_status;
-(const WCDBCondition<unsigned long>*)db_length;
-(const WCDBCondition<unsigned long>*)db_offset;
-(const WCDBCondition<unsigned long>*)db_sendTime;
-(const WCDBCondition<unsigned long>*)db_createTime;
-(const WCDBCondition<NSString* >*)db_message;
-(const WCDBCondition<unsigned long>*)db_type;
-(const WCDBCondition<NSString* >*)db_md5;
-(const WCDBCondition<NSString* >*)db_msgLocalId;
-(const WCDBCondition<NSString* >*)db_userName;
@end
