/**
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import "CHIPError.h"
#import <Foundation/Foundation.h>

#ifdef __cplusplus
#import <setup_payload/SetupPayload.h>
#endif

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, OptionalQRCodeInfoType) { kOptionalQRCodeInfoTypeString, kOptionalQRCodeInfoTypeInt };

@interface CHIPOptionalQRCodeInfo : NSObject
@property (nonatomic, strong) NSNumber * infoType;
@property (nonatomic, strong) NSNumber * tag;
@property (nonatomic, strong) NSNumber * integerValue;
@property (nonatomic, strong) NSString * stringValue;
@end

@interface CHIPSetupPayload : NSObject

@property (nonatomic, strong) NSNumber * version;
@property (nonatomic, strong) NSNumber * vendorID;
@property (nonatomic, strong) NSNumber * productID;
@property (nonatomic, assign) BOOL requiresCustomFlow;
@property (nonatomic, strong) NSNumber * rendezvousInformation;
@property (nonatomic, strong) NSNumber * discriminator;
@property (nonatomic, strong) NSNumber * setUpPINCode;

@property (nonatomic, strong) NSString * serialNumber;
- (NSArray<CHIPOptionalQRCodeInfo *> *)getAllOptionalData:(NSError * __autoreleasing *)error;

#ifdef __cplusplus
- (id)initWithSetupPayload:(chip::SetupPayload)setupPayload;
#endif

@end

NS_ASSUME_NONNULL_END