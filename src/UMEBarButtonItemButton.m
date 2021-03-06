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
#import "UMEBarButtonItemButton.h"
#else
#import <UMEKit/UMEBarButtonItemButton.h>
#endif
#import "UMEBarButtonItemButtonCell.h"
#import "UMEBarButtonItem.h"

#define MIN_WIDTH 36
#define MIN_HEIGHT 44
#define BACK_TITLE_OFFSET_X 5

@implementation UMEBarButtonItemButton

+ (Class)cellClass {
    return [UMEBarButtonItemButtonCell class];
}


- (id)initWithFrame:(NSRect)frame {
    if ((self = [super initWithFrame:frame])) {
        [self setButtonType:NSMomentaryPushInButton];
        [self setBordered:NO];
        [self setFocusRingType:NSFocusRingTypeNone];
        [self setAutoresizingMask:NSViewWidthSizable|NSViewHeightSizable|NSViewMinXMargin|NSViewMaxXMargin|NSViewMinYMargin|NSViewMaxYMargin];
    }
    return self;
}


- (void)dealloc {
    self.item = nil;
}


- (BOOL)isFlipped {
    return YES;
}


- (void)sizeToFit {
    [super sizeToFit];
    
    NSSize size = [self bounds].size;
    
    size.width += 18;
    if (size.width < MIN_WIDTH) {
        size.width = MIN_WIDTH;
    }
    if (size.height < MIN_HEIGHT) {
        size.height = MIN_HEIGHT;
    }
    
    if (UMEBarButtonItemStyleBack == item.style) {
        size.width += BACK_TITLE_OFFSET_X;
    }
    [self setFrameSize:size];
}


- (BOOL)isEnabled {
    return [super isEnabled];
}


- (void)setEnabled:(BOOL)yn {
    [super setEnabled:yn];
}

@synthesize item;
@end
