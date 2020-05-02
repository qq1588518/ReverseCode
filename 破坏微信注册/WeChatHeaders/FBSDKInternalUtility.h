//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKInternalUtility : NSObject
{
}

+ (_Bool)isRegisteredURLScheme:(id)arg1;
+ (void)validateURLSchemes;
+ (void)validateAppID;
+ (id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(CDUnknownBlockType)arg2 stop:(_Bool *)arg3;
+ (long long)_compareOperatingSystemVersion:(CDStruct_2ec95fd7)arg1 toVersion:(CDStruct_2ec95fd7)arg2;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id *)arg5;
+ (_Bool)shouldManuallyAdjustOrientation;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;
+ (id)objectForJSONString:(id)arg1 error:(id *)arg2;
+ (_Bool)object:(id)arg1 isEqualToObject:(id)arg2;
+ (id)JSONStringForObject:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isUIKitRunTimeVersionAtLeast:(int)arg1;
+ (_Bool)isUIKitLinkTimeVersionAtLeast:(int)arg1;
+ (_Bool)isSafariBundleIdentifier:(id)arg1;
+ (_Bool)isOSRunTimeVersionAtLeast:(CDStruct_2ec95fd7)arg1;
+ (_Bool)isFacebookBundleIdentifier:(id)arg1;
+ (_Bool)isBrowserURL:(id)arg1;
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id *)arg5;
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
+ (void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3;
+ (void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3;
+ (_Bool)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
+ (unsigned long long)currentTimeInMilliseconds;
+ (id)convertRequestValue:(id)arg1;
+ (void)array:(id)arg1 addObject:(id)arg2;
+ (id)dictionaryFromFBURL:(id)arg1;
+ (id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
+ (id)appURLScheme;
- (id)init;

@end

