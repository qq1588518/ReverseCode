//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseChatCellView.h"

#import "UIViewForceTouchShakeProtocol-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCForceTouchPreviewProtocol-Protocol.h"
#import "WCForceTouchTriggerLongPressProtocol-Protocol.h"

@class BaseMessageViewModel, NSArray, NSSet, NSString, UIImageView, UIView;

@interface BaseMessageCellView : BaseChatCellView <WCActionSheetDelegate, WCForceTouchTriggerLongPressProtocol, WCForceTouchPreviewProtocol, UIViewForceTouchShakeProtocol>
{
    NSArray *m_arrMenuItems;
    UIView *m_contentView;
    UIImageView *m_sendOKView;
    _Bool m_touchEnded;
    _Bool m_bDisableAllOperation;
    _Bool m_bIsLongPressHandled;
    _Bool m_isConverting3dTouchToLongPress;
    NSSet *_touches;
}

@property(retain, nonatomic) NSSet *touches; // @synthesize touches=_touches;
- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (_Bool)canPeek;
@property(readonly, nonatomic) __weak UIView *forceTouchShakeView;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onLongTouch:(struct CGPoint)arg1;
- (void)onTouchEnded;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)LongPressEvents;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isTouchInView:(id)arg1;
- (void)addSendOKView;
- (id)getContentView;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)setDisableAllOperation;
- (void)showUIStatus;
- (void)hideUIStatus;
- (void)doFavorite;
- (void)doForward;
- (double)contentViewCenterY;
- (void)updateStatus;
- (_Bool)onCustomActionOperated:(id)arg1;
- (id)accessibilityCustomActions;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)accessibilityElementsHidden;
- (void)updateNodeStatus;
- (void)layoutContentView;
- (void)layoutFinished;
- (void)layoutInternal;
@property(nonatomic) _Bool highlighted;
- (void)dealloc;
- (void)onShowJSLogMenuItem:(id)arg1;
- (id)showJSLogMenuItem;
- (_Bool)canShowJSLogMenuItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canShowMoreMenuItem;
- (void)onMore:(id)arg1;
- (id)moreMenuItem;
- (void)onRestore:(id)arg1;
- (id)restoreMenuItem;
- (_Bool)canShowShareMsgToOpenSDKMenuItem;
- (_Bool)canShowSendToDevices;
- (_Bool)canShowSendTo3rdApp;
- (void)onShareMsgToOpenSDK:(id)arg1;
- (id)shareMsgToOpenSDKMenuItem;
- (_Bool)canShowRevokeMsgMenuItem;
- (void)onRevokeMsg:(id)arg1;
- (id)revokeMsgMenuItem;
- (_Bool)canShowDeleteMenuItem;
- (void)onDelete:(id)arg1;
- (id)deleteMenuItem;
- (_Bool)canShowFavoriteMenuItem;
- (void)onFavorite:(id)arg1;
- (id)favoriteMenuItem;
- (_Bool)canShowForwardMenuItem;
- (void)onForward:(id)arg1;
- (id)forwardMenuItem;
- (_Bool)canShowScheduleMenuItem;
- (void)onSchedule:(id)arg1;
- (id)scheduleMenuItem;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)operationMenuItems;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)showOperationMenu;
- (id)generateOperationMenu;
- (_Bool)isOnlyShowDeleteMenu;
- (struct CGRect)targetRectForMenuController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BaseMessageViewModel *viewModel; // @dynamic viewModel;

@end

