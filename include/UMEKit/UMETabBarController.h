//  Copyright 2010 Todd Ditchendorf
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <UMEKit/UMEViewController.h>
#import <UMEKit/UMENavigationController.h>

@class UMETabBar;
@protocol UMETabBarControllerDelegate;

@interface UMETabBarController : UMEViewController <UMENavigationControllerDelegate> {
    UMETabBar *tabBar;
    NSView *containerView;
    
    id <UMETabBarControllerDelegate>__strong delegate;

    NSArray *viewControllers;
    UMEViewController *__strong selectedViewController;
    NSUInteger selectedIndex;

    BOOL tabBarHiddenBottom;
    BOOL tabBarHiddenLeft;
    BOOL tabBarHidden;
    
    NSArray *tabBarItems;
    UMETabBarItem *selectedTabBarItem;
}

- (void)setViewControllers:(NSArray *)vcs animated:(BOOL)animated;

@property (nonatomic, readonly, strong) UMETabBar *tabBar; // Provided for -[UIActionSheet showFromTabBar:]. Attempting to modify the contents of the tab bar directly will throw an exception.
@property (nonatomic, strong) NSView *containerView;
@property (nonatomic, strong) id <UMETabBarControllerDelegate>delegate;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, strong) UMEViewController *selectedViewController;
@property (nonatomic) NSUInteger selectedIndex;
@end

@protocol UMETabBarControllerDelegate <NSObject>
@optional
- (BOOL)tabBarController:(UMETabBarController *)tabBarController shouldSelectViewController:(UMEViewController *)viewController;
- (void)tabBarController:(UMETabBarController *)tabBarController willSelectViewController:(UMEViewController *)viewController;
- (void)tabBarController:(UMETabBarController *)tabBarController didSelectViewController:(UMEViewController *)viewController;
@end
