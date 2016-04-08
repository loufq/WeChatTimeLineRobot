/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "INewABTestMgrExt.h"
#import "MMKernelExt.h"

@class WCSnsABTestFeedHiddenInfo, WCSnsABTestFeedOperationInfo, NSString, NSArray, NSMutableDictionary;

@interface WCSnsABTestMgr : XXUnknownSuperclass <INewABTestMgrExt, MMKernelExt> {
	NSMutableDictionary* dicABTestInfo;
	NSMutableDictionary* dicActionResult;
	WCSnsABTestFeedHiddenInfo* feedHiddenInfo;
	BOOL needWriteBackHiddenInfo;
	WCSnsABTestFeedOperationInfo* feedOperationInfo;
	BOOL needWriteBackOperationInfo;
	NSArray* arrDeleteLayerId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onServiceMemoryWarning;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(void)onManulLogOut;
-(void)onModifyABTestItem:(id)item bizId:(id)anId abTestItem:(id)item3;
-(void)tryRemoveLayerInObjectOperation;
-(void)tryRemoveFeedOperationInfoForLayerIds:(id)layerIds;
-(id)getOperationInfo:(id)info;
-(void)tryAddFeedOperationInfo:(id)info;
-(void)trySaveFeedOperationInfo;
-(void)tryLoadFeedOperationInfo;
-(id)pathForFeedOperationInfo;
-(void)trySaveFeedHiddenInfo;
-(void)tryloadFeedHiddenInfo;
-(id)pathForFeedHiddenInfo;
-(void)tryLogABTestResultTime:(id)time dataItemId:(id)anId startTime:(BOOL)time3 endTime:(BOOL)time4;
-(void)logABTestResult:(id)result dataItemId:(id)anId tipActionResult:(id)result3;
-(unsigned)getABTestExperType:(id)type;
-(void)tryReportABTestResult;
-(void)reportABTestResult:(id)result result:(id)result2;
-(id)getTipData:(id)data layerId:(id)anId;
-(BOOL)isFirstTip:(id)tip layerId:(id)anId;
-(id)getFirstTip:(id)tip;
-(BOOL)hiddenTip:(id)tip dataItemId:(id)anId;
-(BOOL)shouldHiddenTip:(id)tip dataItemId:(id)anId;
-(id)getABTestInfoForLayerId:(id)layerId;
-(id)getLayerIdForDataItem:(id)dataItem;
-(void)initABTestInfo:(id)info;
-(void)tryInitABTestInfo;
-(void)dealloc;
-(id)init;
@end
