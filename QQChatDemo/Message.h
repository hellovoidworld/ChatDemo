//
//  Message.h
//  QQChatDemo
//
//  Created by hellovoidworld on 14/12/8.
//  Copyright (c) 2014年 hellovoidworld. All rights reserved.
//
// message信息模型，存储聊天记录

#import <Foundation/Foundation.h>

typedef enum {
    MessageTypeMe = 0, // 我发出的信息
    MessageTypeOhter = 1 // 对方发出的信息
} MessageType;

@interface Message : NSObject

/** 信息 */
@property(nonatomic, copy) NSString *text;

/** 发送时间 */
@property(nonatomic, copy) NSString *time;

/** 发送方 */
@property(nonatomic, assign) MessageType type;

/** 是否隐藏发送时间 */
@property(nonatomic, assign) BOOL hideTime;

- (instancetype) initWithDictionary:(NSDictionary *) dictionary;
+ (instancetype) messageWithDictionary:(NSDictionary *) dictionary;
+ (instancetype) message;

@end
