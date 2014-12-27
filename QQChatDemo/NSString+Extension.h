//
//  NSString+Extension.h
//  QQChatDemo
//
//  Created by hellovoidworld on 14/12/8.
//  Copyright (c) 2014年 hellovoidworld. All rights reserved.
//
// NSString扩展类

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Extension)

/** 测量文本的尺寸 */
- (CGSize) sizeWithFont:(UIFont *)font maxSize:(CGSize) maxSize;

@end
