///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAccountCaptureAvailability;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AccountCaptureAvailability` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAccountCaptureAvailability : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGAccountCaptureAvailabilityTag` enum type represents the
/// possible tag states with which the `DBTEAMLOGAccountCaptureAvailability`
/// union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGAccountCaptureAvailabilityTag) {
  /// (no description).
  DBTEAMLOGAccountCaptureAvailabilityUnavailable,

  /// (no description).
  DBTEAMLOGAccountCaptureAvailabilityAvailable,

  /// (no description).
  DBTEAMLOGAccountCaptureAvailabilityOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGAccountCaptureAvailabilityTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "unavailable".
///
/// @return An initialized instance.
///
- (instancetype)initWithUnavailable;

///
/// Initializes union class with tag state of "available".
///
/// @return An initialized instance.
///
- (instancetype)initWithAvailable;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "unavailable".
///
/// @return Whether the union's current tag state has value "unavailable".
///
- (BOOL)isUnavailable;

///
/// Retrieves whether the union's current tag state has value "available".
///
/// @return Whether the union's current tag state has value "available".
///
- (BOOL)isAvailable;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGAccountCaptureAvailability` union.
///
@interface DBTEAMLOGAccountCaptureAvailabilitySerializer : NSObject

///
/// Serializes `DBTEAMLOGAccountCaptureAvailability` instances.
///
/// @param instance An instance of the `DBTEAMLOGAccountCaptureAvailability` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAccountCaptureAvailability` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGAccountCaptureAvailability *)instance;

///
/// Deserializes `DBTEAMLOGAccountCaptureAvailability` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAccountCaptureAvailability` API object.
///
/// @return An instantiation of the `DBTEAMLOGAccountCaptureAvailability`
/// object.
///
+ (DBTEAMLOGAccountCaptureAvailability *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
