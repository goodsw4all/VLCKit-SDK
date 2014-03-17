//
//  YGYChannelsManager.h
//  月光影音
//
//  Created by 吴琼 on 13-10-18.
//  Copyright (c) 2013年 长沙戴维营教育(http://www.diveinedu.cn). All rights reserved.
//

#import <Foundation/Foundation.h>

#define kLoadChannelsNotification   @"kLoadChannelsNotification"

@interface YGYChannelsManager : NSObject

+ (instancetype)sharedManager;

+ (void)loadChannelFromInernet;

- (NSArray *)channels;
- (NSString *)adHtml;
@end
