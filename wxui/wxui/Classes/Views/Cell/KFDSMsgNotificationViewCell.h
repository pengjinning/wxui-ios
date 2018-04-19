//
//  KFDSNotificationViewCell.h
//  feedback
//
//  Created by 宁金鹏 on 2017/2/21.
//  Copyright © 2017年 宁金鹏. All rights reserved.
//

//#import <UIKit/UIKit.h>
#import <QMUIKit/QMUIKit.h>


@import wxcore;


@interface KFDSMsgNotificationViewCell : QMUITableViewCell

@property(nonatomic, strong) QMUILabel                   *timestampLabel;
@property(nonatomic, strong) QMUILabel                   *contentLabel;
@property(nonatomic, strong) WXMessageModel            *messageModel;

- (void)initWithMessageModel:(WXMessageModel *)messageModel;

@end