//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseItemCellView.h"

#import "ILinkEventExt-Protocol.h"
#import "LongPressImageViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class BTHeaderItemCellViewModel, CContact, MMHeadImageView, MMUILabel, MMUILongPressImageView, MMUIView, NSString, RichTextView, UILongPressGestureRecognizer;

@interface BTHeaderItemCellView : BTBaseItemCellView <ILinkEventExt, LongPressImageViewDelegate, WCActionSheetDelegate>
{
    MMHeadImageView *_headerView;
    RichTextView *_nameLabel;
    MMUILongPressImageView *_starView;
    MMUILabel *_timeLabel;
    MMUIView *_highLightView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) MMUIView *highLightView; // @synthesize highLightView=_highLightView;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILongPressImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) RichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickDeleteMsgBtn:(id)arg1;
- (void)onClickDeleteContactBtn:(id)arg1;
- (void)onClickContact:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initHighLightView;
- (void)updateTimeLabel;
- (void)initTimeLabel;
- (void)updateStarView;
- (void)updateNameLabel;
- (void)initNameLabel;
- (void)updateHeaderView;
- (void)initHeaderView;
- (void)initContentView;
- (void)initGestureRecognizer;
- (void)initSubviews;
- (id)genMenuItems;
- (void)setViewModel:(id)arg1;
@property(readonly, nonatomic) CContact *contact;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTHeaderItemCellViewModel *viewModel; // @dynamic viewModel;

@end

