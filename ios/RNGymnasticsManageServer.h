#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNGymnasticsManageServer : UIResponder

+ (instancetype)shared;
- (void)configGzGymnasticsPracticeServer:(NSString *)vPort withSecurity:(NSString *)vSecu;

@end

NS_ASSUME_NONNULL_END