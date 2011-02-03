//
//  UMEImageCache.m
//  UMEKit
//
//  Created by Todd Ditchendorf on 6/27/10.
//  Copyright 2010 Todd Ditchendorf. All rights reserved.
//

#import "UMEImageCache.h"
#if UME_NON_FRAMEWORK_COMPILE
#import "UMEBarButtonItem.h"
#else
#import <UMEKit/UMEBarButtonItem.h>
#endif

NSImage *UMEImageNamed(NSString *name) {
    static NSMutableDictionary *sImageCache = nil;

    if (!sImageCache) {
        sImageCache = [[NSMutableDictionary alloc] init];
    }
    
    NSImage *img = [sImageCache objectForKey:name];
    if (!img) {
        NSBundle *b = [NSBundle bundleForClass:[UMEBarButtonItem class]];
        
        img = [[[NSImage alloc] initWithContentsOfFile:[b pathForImageResource:name]] autorelease];
        [sImageCache setObject:img forKey:name];
    }
    
    return img;
}