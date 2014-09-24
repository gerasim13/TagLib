//
//  TLMP4MetaData.h
//  PlayerKit
//
//  Created by Peter MacWhinnie on 12/24/08.
//  Copyright 2008 Roundabout Software. All rights reserved.
//

#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
    #import <Foundation/Foundation.h>
    #import "TLMetaData.h"
#else
    #import <Cocoa/Cocoa.h>
    #import <TagLib/TLMetaData.h>
#endif

@interface TLMP4MetaData : TLMetaData
{
    void *_file;
}

@end
