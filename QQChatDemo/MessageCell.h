//
//  MessageCell.h
//  QQChatDemo
//
//  Created by hellovoidworld on 14/12/8.
//  Copyright (c) 2014年 hellovoidworld. All rights reserved.
//

#import <UIKit/UIKit.h>

#define BACKGROUD_COLOR [UIColor colorWithRed:235/255.0 green:235/255.0 blue:235/255.0 alpha:1.0]

@class MessageFrame, Message;

@interface MessageCell : UITableViewCell

/** 持有存储了聊天记录和聊天框位置尺寸的frame */
@property(nonatomic, strong) MessageFrame *messageFrame;

/** 传入父控件tableView引用的构造方法 */
+ (instancetype) cellWithTableView:(UITableView *) tableView;

@end
