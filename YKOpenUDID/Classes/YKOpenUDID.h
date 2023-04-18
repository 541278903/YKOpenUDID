//
//  YKOpenUDID.h
//  YKOpenUDID
//
//


#import <Foundation/Foundation.h>

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
