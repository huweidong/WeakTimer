//
//  NSTimer+WeakTimer.h
//  Memory
//
//  Created by huweidong on 2018/3/4.
//  Copyright © 2018年 huweidong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (WeakTimer)

+ (NSTimer *)scheduledWeakTimerWithTimeInterval:(NSTimeInterval)interval
                                         target:(id)aTarget
                                       selector:(SEL)aSelector
                                       userInfo:(id)userInfo
                                        repeats:(BOOL)repeats;

+ (NSTimer *)timerWithWeakTimeInterval:(NSTimeInterval)ti
                                target:(id)aTarget
                              selector:(SEL)aSelector
                              userInfo:(nullable id)userInfo
                               repeats:(BOOL)yesOrNo;

@end
