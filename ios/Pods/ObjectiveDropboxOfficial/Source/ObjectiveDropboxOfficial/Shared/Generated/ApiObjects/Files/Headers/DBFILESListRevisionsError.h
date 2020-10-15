///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESListRevisionsError;
@class DBFILESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListRevisionsError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListRevisionsError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESListRevisionsErrorTag` enum type represents the possible tag
/// states with which the `DBFILESListRevisionsError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESListRevisionsErrorTag) {
  /// (no description).
  DBFILESListRevisionsErrorPath,

  /// (no description).
  DBFILESListRevisionsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESListRevisionsErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

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
/// The serialization class for the `DBFILESListRevisionsError` union.
///
@interface DBFILESListRevisionsErrorSerializer : NSObject

///
/// Serializes `DBFILESListRevisionsError` instances.
///
/// @param instance An instance of the `DBFILESListRevisionsError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListRevisionsError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESListRevisionsError *)instance;

///
/// Deserializes `DBFILESListRevisionsError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListRevisionsError` API object.
///
/// @return An instantiation of the `DBFILESListRevisionsError` object.
///
+ (DBFILESListRevisionsError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
