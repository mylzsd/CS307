//
//  Course.h
//  PurdueCourseAssistant
//
//  Created by SQuare on 2/28/15.
//  Copyright (c) 2015 team_9. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Course : NSObject

@property (strong, nonatomic) NSString * courseName;
@property (strong, nonatomic) NSString * courseDescription;
@property (strong, nonatomic) NSString * courseTag;
@property (strong, nonatomic) NSNumber * courseRating;
@property (strong, nonatomic) NSMutableArray * courseComment;

@end
