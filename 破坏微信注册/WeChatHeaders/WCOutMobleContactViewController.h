//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCOutFacadeExt-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UISearchDisplayController, UITableView;

@interface WCOutMobleContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, UISearchBarDelegate, UISearchDisplayDelegate>
{
    _Bool _isSearching;
    NSArray *_fliterContacts;
    UISearchDisplayController *_m_searchDisplayController;
    NSString *_searchText;
    NSMutableArray *_sectionKeyArray;
    NSMutableDictionary *_allContactsDic;
    UITableView *_tableview;
}

@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) NSMutableDictionary *allContactsDic; // @synthesize allContactsDic=_allContactsDic;
@property(retain, nonatomic) NSMutableArray *sectionKeyArray; // @synthesize sectionKeyArray=_sectionKeyArray;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) UISearchDisplayController *m_searchDisplayController; // @synthesize m_searchDisplayController=_m_searchDisplayController;
@property(retain, nonatomic) NSArray *fliterContacts; // @synthesize fliterContacts=_fliterContacts;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
- (void).cxx_destruct;
- (void)showProfileForContact:(id)arg1 AndIsFromLastCallContact:(_Bool)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)search:(id)arg1;
- (id)allContacts;
- (void)updateWCOutContactsInfo;
- (void)updateWCOutContacts:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)contactCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 filtercontactCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configSearchDisplayController;
- (void)configData;
- (void)configTableView;
- (void)configureBackBarButtomItem;
- (void)configView;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

