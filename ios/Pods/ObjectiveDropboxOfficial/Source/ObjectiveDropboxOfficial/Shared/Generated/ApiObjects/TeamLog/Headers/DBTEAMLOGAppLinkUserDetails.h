///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAppLinkUserDetails;
@class DBTEAMLOGAppLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AppLinkUserDetails` struct.
///
/// Linked app for member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAppLinkUserDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Relevant application details.
@property (nonatomic, readonly) DBTEAMLOGAppLogInfo *appInfo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param appInfo Relevant application details.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppInfo:(DBTEAMLOGAppLogInfo *)appInfo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AppLinkUserDetails` struct.
///
@interface DBTEAMLOGAppLinkUserDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGAppLinkUserDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGAppLinkUserDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAppLinkUserDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGAppLinkUserDetails *)instance;

///
/// Deserializes `DBTEAMLOGAppLinkUserDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAppLinkUserDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGAppLinkUserDetails` object.
///
+ (DBTEAMLOGAppLinkUserDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
