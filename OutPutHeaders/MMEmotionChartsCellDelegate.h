/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MMEmotionChartsCellDelegate <NSObject>
@optional
-(void)OnShowAlertWithIKnow:(id)iknow;
-(void)OnShowAlertWithOK:(id)ok;
-(void)OnStopLoading;
-(void)OnStopLoadingAndShowError:(id)error;
-(void)OnStopLoadingAndShowOK:(id)ok;
-(void)OnStartLoadingAndShowStringBlocked:(id)blocked;
-(void)OnStartLoadingAndShowString:(id)string;
@end
