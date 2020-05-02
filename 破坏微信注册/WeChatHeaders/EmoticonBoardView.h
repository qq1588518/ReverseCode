//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonBackupOperateMgrExt-Protocol.h"
#import "EmoticonBoardBottomTabBarDelegate-Protocol.h"
#import "EmoticonBoardPageCollectionControllerDelegate-Protocol.h"
#import "EmoticonBoardRecommendViewDelegate-Protocol.h"
#import "EmoticonCustomAddLogicControllerDelegate-Protocol.h"
#import "EmoticonGridViewDelegate-Protocol.h"
#import "EmoticonRecommendMgrExt-Protocol.h"
#import "EmoticonTabRecommendMgrExt-Protocol.h"
#import "ExpressionMgrExt-Protocol.h"
#import "IEmoticonMgrExt-Protocol.h"
#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "QQEmojiGridViewDelegate-Protocol.h"

@class EmoticonBoardBottomTabBar, EmoticonBoardPageCollectionController, EmoticonBoardSliderView, EmoticonCustomAddLogicController, NSString, UIView;
@protocol BaseEmoticonViewDelegate, EmoticonBoardViewDelegate;

@interface EmoticonBoardView : MMUIView <IMMLanguageMgrExt, MMKernelExt, IEmoticonPackageMgrExt, EmoticonGridViewDelegate, EmoticonRecommendMgrExt, QQEmojiGridViewDelegate, IEmoticonMgrExt, EmoticonBackupOperateMgrExt, EmoticonBoardBottomTabBarDelegate, EmoticonTabRecommendMgrExt, ExpressionMgrExt, EmoticonCustomAddLogicControllerDelegate, MMUIViewControllerDelegate, MMTipsViewControllerDelegate, EmoticonBoardRecommendViewDelegate, EmoticonBoardPageCollectionControllerDelegate>
{
    id <BaseEmoticonViewDelegate> m_emoticonSendDelegate;
    EmoticonBoardPageCollectionController *m_pageCollectionController;
    UIView *m_pageCollectionBackgroundView;
    UIView *m_lineView;
    EmoticonBoardSliderView *m_sliderView;
    EmoticonBoardBottomTabBar *m_bottomTabBar;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
    _Bool _isSingleTab;
    _Bool _preChatIsOpenIM;
    double m_bottomInset;
    unsigned long long _emojiUseScene;
    NSString *_finishButtonTitle;
    unsigned long long _buttonStyle;
    id <EmoticonBoardViewDelegate> _m_delegate;
}

+ (void)unRegisterInstanceDelegate;
+ (void)destroyInstance;
+ (id)shareInstanceForChat;
@property(nonatomic) _Bool preChatIsOpenIM; // @synthesize preChatIsOpenIM=_preChatIsOpenIM;
@property(nonatomic) __weak id <EmoticonBoardViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSString *finishButtonTitle; // @synthesize finishButtonTitle=_finishButtonTitle;
@property(nonatomic) _Bool isSingleTab; // @synthesize isSingleTab=_isSingleTab;
@property(nonatomic) unsigned long long emojiUseScene; // @synthesize emojiUseScene=_emojiUseScene;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=m_bottomInset;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onAddBackupEmoticonOK:(id)arg1 emojiInfo:(id)arg2;
- (void)onEmoticonCustomAddLogicControllerAddedEmoticon;
- (void)onEmoticonBoardRecommendViewTapWithPid:(id)arg1;
- (void)OnEmoticonTabRecommendChanged;
- (void)onEmoticonBoardBottomTabBarClickSettingItem;
- (void)onEmoticonBoardBottomTabBarClickStorePlusItem;
- (void)onEmoticonBoardBottomTabBarClickItem:(id)arg1;
- (void)layoutSubviews;
- (void)onTapDeleteButton;
- (void)onTapEmoticonWithCode:(id)arg1 gridView:(id)arg2;
- (void)onTapEmoticonWrap:(id)arg1;
- (void)didScrollToOffsetValue:(double)arg1;
- (void)didStopAtPage:(id)arg1 pageOffset:(id)arg2;
- (void)onPreQuit;
- (void)onLanguageChange;
- (void)OnEmoticonRecommendNewStateChangedForBoardView:(_Bool)arg1;
- (void)OnUpdateEmoticonPackageListAfterSort;
- (void)OnUpdateEmoticonPackageList;
- (void)OnUpdateEmoticonList;
- (void)onEmojiBoardKeyListChanged;
- (void)OnSend:(id)arg1;
- (_Bool)selectTabOfPid:(id)arg1 isForceUpdate:(_Bool)arg2;
- (void)changeTabToPid:(id)arg1;
- (void)changToCustomPidPosistion;
- (void)showAddEmoticonActionSheet;
- (int)emotionRecommandMaxCountConfig;
- (id)getEmoticonListWithPid:(id)arg1 needCheckImageExist:(_Bool)arg2;
- (id)getCustomEmoticonListWithNeedCheckImageExist:(_Bool)arg1;
- (id)getEmoticonArrayWithPackageArray:(id)arg1;
- (id)customPackageId;
- (id)getTabRecommandItemsWithStickerPackages:(id)arg1;
- (id)getTabItemsWithStickerPackages:(id)arg1 recommandItems:(id)arg2;
- (void)reloadTabBarWithTabItems:(id)arg1;
- (void)reloadEmoticonViewData;
- (id)getStickerPackages;
- (void)onSliderValueChanged:(id)arg1;
- (void)onSliderViewAction;
- (void)configSliderWithVisualY:(double)arg1;
- (id)GetCurrentViewController;
- (id)getViewController;
- (void)reloadEmotionBoardView;
- (void)prepareForReuseWithoutReload;
- (_Bool)checkNeedReloadForReuse;
- (void)setBackgroundTransparent;
- (void)resetUI;
@property(readonly, nonatomic) double preferHeight;
- (void)SetCanSend:(_Bool)arg1;
- (void)UnRegisterDelegate;
- (void)RegisterDelegate:(id)arg1;
- (_Bool)isSticker;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initView;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

