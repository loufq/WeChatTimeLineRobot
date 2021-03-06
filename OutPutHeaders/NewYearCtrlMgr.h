/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IMsgExt.h"
#import "MMService.h"

@class NewYearCtrlInfo, NSString;

@interface NewYearCtrlMgr : MMService <IMsgExt, MMService> {
	NewYearCtrlInfo* _ctrlInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)parseNewYearCtrlMsg:(id)msg;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(id)welcomeTips;
-(BOOL)isForTest;
-(void)delCtrlInfo;
-(void)clearRedDot;
-(id)getRedDotMsg;
-(BOOL)shouldShowRedDot;
-(unsigned)getReqInterval;
-(BOOL)shouldShowHongBaoEntrance;
-(BOOL)shouldShowGoldenHBStyle;
-(BOOL)hasCtrlInfo;
-(void)onCtrlInfoUpdated;
-(void)clearAllData;
-(void)loadData;
-(void)onServiceEnterForeground;
-(void)onServiceClearData;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
@end

