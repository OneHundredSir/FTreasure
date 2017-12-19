//
//  NoticeCell.h
//  WinTreasure
//
//  Created by Apple on 16/7/4.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoticeModel.h"

@interface NoticeCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *decriptLabel;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

+ (instancetype)cellWithTableView:(UITableView *)tableview;


@end
