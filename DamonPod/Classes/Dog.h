//
//  Dog.h
//  DamonPod
//
//  Created by DamonLee on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Dog : NSObject

@property (nonatomic, copy) NSString *name;

- (void)eat;

@end

NS_ASSUME_NONNULL_END
