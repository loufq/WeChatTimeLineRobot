/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIScrollView.h"
#import "WeChat-Structs.h"
#import "UIScrollViewDelegate.h"

@class RSAnimationHeadImgView, NSString;
@protocol RSVerifyAnimationViewDelegate;

@interface RSVerifyAnimationView : MMUIScrollView <UIScrollViewDelegate> {
	RSAnimationHeadImgView* _headImage;
	CGPoint _originPoint;
	CGSize _originSize;
	id<RSVerifyAnimationViewDelegate> _rsDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<RSVerifyAnimationViewDelegate> rsDelegate;
@property(retain, nonatomic) RSAnimationHeadImgView* headImage;
-(void).cxx_destruct;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)onZoomOutFinish;
-(void)onZoomInFinish;
-(void)doZoomOutAnimation;
-(void)startAnimationWithRadarSearchMember:(id)radarSearchMember remarkName:(id)name OriginPoint:(CGPoint)point;
-(void)doZoomOut:(float)anOut animated:(BOOL)animated;
-(void)doZoomIn:(float)anIn animated:(BOOL)animated;
-(id)init;
@end
