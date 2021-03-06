/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "QDataSourceStandardDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;
@protocol QDataSourceProtocol;

__attribute__((visibility("hidden")))
@interface QTiledLayerRender : XXUnknownSuperclass <QDataSourceStandardDelegate> {
	BOOL _useSnapshotRenderer;
	BOOL _snapshotRenderering;
	id<QDataSourceProtocol> _dataSource;
	CGContextRef _snapshotContext;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) BOOL snapshotRenderering;
@property(assign) CGContextRef snapshotContext;
@property(assign) BOOL useSnapshotRenderer;
@property(retain, nonatomic) id<QDataSourceProtocol> dataSource;
+(Class)layerClass;
-(void).cxx_destruct;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(void)setupSelf;
-(void)dataSourceStandard:(id)standard didChangeVersion:(id)version fromOldVersion:(id)oldVersion;
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(void)drawRect:(CGRect)rect;
-(void)didMoveToWindow;
-(id)tiledLayer;
@end

