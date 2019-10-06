//
//  INSortType.h
//  Intents
//
//  Copyright (c) 2016-2019 Apple Inc. All rights reserved.
//

#ifndef INSortType_h
#define INSortType_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INSortType) {
    INSortTypeUnknown = 0,
    INSortTypeAsIs,
    INSortTypeByDate,
} API_AVAILABLE(ios(11.0), watchos(4.0)) API_UNAVAILABLE(macosx);

#endif // INSortType_h