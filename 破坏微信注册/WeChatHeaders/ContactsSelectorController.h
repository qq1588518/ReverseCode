//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WCContactItemDeleteViewDelegate-Protocol.h"
#import "WCEditMemberPannelDataSource-Protocol.h"
#import "WCEditMemberPannelDelegate-Protocol.h"
#import "WCSelectorViewDataSource-Protocol.h"
#import "WCSelectorViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UINavigationController, WCEditMemberPannel, WCSelectorView;
@protocol ContactsSelectorControllerDelegate, SelectorControllerDelegate;

@interface ContactsSelectorController : MMObject <MultiSelectContactsViewControllerDelegate, WCSelectorViewDelegate, WCSelectorViewDataSource, WCEditMemberPannelDelegate, WCEditMemberPannelDataSource, WCContactItemDeleteViewDelegate>
{
    NSMutableArray *_arrFilteredContacts;
    NSMutableArray *_arrContacts;
    WCSelectorView *_selectorView;
    WCEditMemberPannel *_editMemberPannel;
    NSMutableDictionary *_dicContactItemDeleteView;
    UINavigationController *_navigationController;
    id <SelectorControllerDelegate> _delegate;
    id <ContactsSelectorControllerDelegate> _selectDelegate;
    _Bool _hasSelectCountLimit;
    unsigned int _selectCountLimit;
}

@property(nonatomic) unsigned int selectCountLimit; // @synthesize selectCountLimit=_selectCountLimit;
@property(nonatomic) _Bool hasSelectCountLimit; // @synthesize hasSelectCountLimit=_hasSelectCountLimit;
@property(nonatomic) __weak id <ContactsSelectorControllerDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
@property(nonatomic) __weak id <SelectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WCEditMemberPannel *editMemberPannel; // @synthesize editMemberPannel=_editMemberPannel;
@property(retain, nonatomic) WCSelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(retain, nonatomic) NSMutableArray *arrContacts; // @synthesize arrContacts=_arrContacts;
@property(retain, nonatomic) NSMutableArray *arrFilteredContacts; // @synthesize arrFilteredContacts=_arrFilteredContacts;
- (void).cxx_destruct;
- (void)onClickDeleteButton:(id)arg1 withContact:(id)arg2;
- (void)onClickHeadImage:(id)arg1 withContact:(id)arg2;
- (id)editMemberPannel:(id)arg1 viewForItem:(unsigned long long)arg2;
- (unsigned long long)numberOfItems:(id)arg1;
- (void)onClickAddButton:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onClickWholeView;
- (_Bool)shouldShowDeleteView;
- (struct CGSize)sizeForViews;
- (id)viewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numbersOfViews;
- (void)showMutiSelectContactViewController;
- (void)addContact;
- (id)init;
- (id)getViewController;
- (void)removeContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

