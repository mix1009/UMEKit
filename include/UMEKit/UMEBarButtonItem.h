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

#if UME_NON_FRAMEWORK_COMPILE
#import "UMEBarItem.h"
#import "UMEInterface.h"
#else
#import <UMEKit/UMEBarItem.h>
#import <UMEKit/UMEInterface.h>
#endif

typedef enum {
    UMEBarButtonItemStylePlain,    // shows glow when pressed
    UMEBarButtonItemStyleBack,
    UMEBarButtonItemStyleDone,
} UMEBarButtonItemStyle;

typedef enum {
    UMEBarButtonSystemItemDone,
    UMEBarButtonSystemItemCancel,
    UMEBarButtonSystemItemEdit,  
    UMEBarButtonSystemItemSave,  
    UMEBarButtonSystemItemAdd,
    UMEBarButtonSystemItemFlexibleSpace,
    UMEBarButtonSystemItemFixedSpace,
    UMEBarButtonSystemItemCompose,
    UMEBarButtonSystemItemReply,
    UMEBarButtonSystemItemAction,
    UMEBarButtonSystemItemOrganize,
    UMEBarButtonSystemItemBookmarks,
    UMEBarButtonSystemItemSearch,
    UMEBarButtonSystemItemRefresh,
    UMEBarButtonSystemItemStop,
    UMEBarButtonSystemItemCamera,
    UMEBarButtonSystemItemTrash,
    UMEBarButtonSystemItemPlay,
    UMEBarButtonSystemItemPause,
    UMEBarButtonSystemItemRewind,
    UMEBarButtonSystemItemFastForward,
    UMEBarButtonSystemItemUndo,
    UMEBarButtonSystemItemRedo,
    UMEBarButtonSystemItemUser,
    UMEBarButtonSystemItemEveryone,
} UMEBarButtonSystemItem;

@interface UMEBarButtonItem : UMEBarItem {
    NSView *customView;
    NSButton *button;
    UMEBarButtonItemStyle style;
    CGFloat width;
    
    UMEBarStyle barStyle;
    
    BOOL space;
    BOOL flexible;
}

- (id)initWithBarButtonSystemItem:(UMEBarButtonSystemItem)systemItem target:(id)target action:(SEL)action;
- (id)initWithCustomView:(NSView *)customView;
- (id)initWithImage:(NSImage *)image style:(UMEBarButtonItemStyle)style target:(id)target action:(SEL)action;
- (id)initWithTitle:(NSString *)title style:(UMEBarButtonItemStyle)style target:(id)target action:(SEL)action;

@property (nonatomic, strong) NSView *customView;
@property (nonatomic) UMEBarButtonItemStyle style;            // default is UMEBarButtonItemStylePlain
@property (nonatomic) UMEBarStyle barStyle;            // default is UMEBarStyleDefault
@property (nonatomic) CGFloat width;            // default is 0.0
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, strong) id target;
@property (nonatomic) SEL action;
@property (nonatomic, strong) NSButton *button;
@end
