/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <ReactABI30_0_0/ABI30_0_0RCTBridge.h>
#import <ReactABI30_0_0/ABI30_0_0RCTURLRequestHandler.h>

@class ALAssetsLibrary;

@interface ABI30_0_0RCTAssetsLibraryRequestHandler : NSObject <ABI30_0_0RCTURLRequestHandler>

@end

@interface ABI30_0_0RCTBridge (ABI30_0_0RCTAssetsLibraryImageLoader)

/**
 * The shared asset library instance.
 */
@property (nonatomic, readonly) ALAssetsLibrary *assetsLibrary;

@end
