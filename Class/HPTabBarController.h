//
//  HPTabBarController.h
//  
//
//  Created by Huy Pham on 7/10/14.
//
//

#import <UIKit/UIKit.h>
#import "HPTabBar.h"

@interface HPTabBarController : UIViewController

/*
 
 - TabBar height.
 
 */

@property (nonatomic) CGFloat tabBarHeight;

/*
 
 - Selected item index.

 */

@property (nonatomic) NSUInteger selectedIndex;

/*

 - Selected Controller.
 
 */

@property (nonatomic, weak) UIViewController *selectedViewController;

/*
 
 - TabBar.
 
 */

@property (nonatomic, strong) HPTabBar *tabBar;

/*
 
 - Selected controller.
 
 */

@property (nonatomic, strong) NSArray *viewControllers;

/*
 
 - tabBar hidden.
 
 */

@property (nonatomic, getter=isTabBarHidden) BOOL tabBarHidden;

/*
 
 - Custom init with array of view controller.
 
 */

- (instancetype)initWithViewControllers:(NSArray *)viewControllers;

/*
 
 - Array of item selected image.
 
*/

@property (nonatomic, strong) NSArray *tabBarItemselectedImages;

/*
 
 - Array of item unSelected image.
 
 */

@property (nonatomic, strong) NSArray *tabBarItemUnselectedImages;

/*
 
 - Array of item disable image.
 
 */

@property (nonatomic, strong) NSArray *tabBarItemDisableImages;

/*
 
 - Array of item translucent value.
 
 */

@property (nonatomic, strong) NSArray *tabBarItemtranslucentValues;


/*
 
 - Set badges count
 
*/

- (void)setBagesCount:(NSInteger)count atIndex:(NSInteger)index;

@end
