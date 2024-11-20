#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNGymnasticsPracticeAssistant : UIResponder

+ (instancetype)gymnaticsPractice_shared;
- (BOOL)gymnaticsPractice_followThisWay:(void (^ __nullable)(void))changeVcBlock;
- (UIInterfaceOrientationMask)gymnaticsPractice_getOrientation;
- (UIViewController *)gymnaticsPractice_throughMainController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
