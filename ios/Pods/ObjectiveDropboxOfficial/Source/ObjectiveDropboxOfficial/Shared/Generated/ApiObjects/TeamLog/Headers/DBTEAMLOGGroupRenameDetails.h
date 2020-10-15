///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupRenameDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupRenameDetails` struct.
///
/// Renamed group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupRenameDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous display name.
@property (nonatomic, readonly, copy) NSString *previousValue;

/// New display name.
@property (nonatomic, readonly, copy) NSString *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous display name.
/// @param dNewValue New display name.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(NSString *)previousValue dNewValue:(NSString *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupRenameDetails` struct.
///
@interface DBTEAMLOGGroupRenameDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupRenameDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupRenameDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupRenameDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGGroupRenameDetails *)instance;

///
/// Deserializes `DBTEAMLOGGroupRenameDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupRenameDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupRenameDetails` object.
///
+ (DBTEAMLOGGroupRenameDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
