//
//  YKOpenUDID.h
//  YKOpenUDID
//
// initiated by Yann Lechelle (cofounder @Appsfire) on 8/28/11.
// Copyright 2011 OpenUDID.org
//
// Main branches
// iOS code: https://github.com/ylechelle/OpenUDID
//


#import <Foundation/Foundation.h>

#define kOpenUDIDErrorNone 0
#define kOpenUDIDErrorOptedOut 1
#define kOpenUDIDErrorCompromised 2

NS_ASSUME_NONNULL_BEGIN

@interface YKOpenUDID : NSObject{
}

+ (NSString* )getOpenValue;

+ (NSString* )getOpenValueWithError:(NSError**)error;

+ (void)setOptOut:(BOOL)optOutValue;

/** 获取存在MMCSSKeychain中的OpenUDID值 */
+ (NSString* )getValueFromKeychain;

@end

NS_ASSUME_NONNULL_END
