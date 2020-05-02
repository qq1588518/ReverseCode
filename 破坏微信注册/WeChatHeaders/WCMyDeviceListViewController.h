//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCDeviceNetworkLogicMgrDelegate-Protocol.h"

@class MMLoadingView, MMTableView, NSMutableArray, NSString, WCDevice;

@interface WCMyDeviceListViewController : MMUIViewController <WCDeviceNetworkLogicMgrDelegate, IWCDeviceBrandMgrExt, UIAlertViewDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    NSMutableArray *m_myDeviceList;
    WCDevice *m_deviceToDeleted;
    MMLoadingView *m_loadingView;
    unsigned long long m_scene;
}

- (void).cxx_destruct;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceGetBoundDevices:(id)arg1;
- (void)onFinishedEditTableView:(id)arg1;
- (void)onEditTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)makeAddDeviceCell:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateRightBarButton;
- (void)updateView;
- (void)initLoadingView;
- (void)initHeaderView;
- (void)initView;
- (void)reloadData;
- (void)requestDataFromDB;
- (void)dealloc;
- (id)initWithScene:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

