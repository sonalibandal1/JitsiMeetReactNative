///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMCOMMONGroupManagementType;
@class DBTEAMCOMMONGroupSummary;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupSummary` struct.
///
/// Information about a group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMCOMMONGroupSummary : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *groupName;

/// (no description).
@property (nonatomic, readonly, copy) NSString *groupId;

/// External ID of group. This is an arbitrary ID that an admin can attach to a
/// group.
@property (nonatomic, readonly, copy, nullable) NSString *groupExternalId;

/// The number of members in the group.
@property (nonatomic, readonly, nullable) NSNumber *memberCount;

/// Who is allowed to manage the group.
@property (nonatomic, readonly) DBTEAMCOMMONGroupManagementType *groupManagementType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
/// @param groupExternalId External ID of group. This is an arbitrary ID that an
/// admin can attach to a group.
/// @param memberCount The number of members in the group.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupName:(NSString *)groupName
                          groupId:(NSString *)groupId
              groupManagementType:(DBTEAMCOMMONGroupManagementType *)groupManagementType
                  groupExternalId:(nullable NSString *)groupExternalId
                      memberCount:(nullable NSNumber *)memberCount;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupName:(NSString *)groupName
                          groupId:(NSString *)groupId
              groupManagementType:(DBTEAMCOMMONGroupManagementType *)groupManagementType;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupSummary` struct.
///
@interface DBTEAMCOMMONGroupSummarySerializer : NSObject

///
/// Serializes `DBTEAMCOMMONGroupSummary` instances.
///
/// @param instance An instance of the `DBTEAMCOMMONGroupSummary` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMCOMMONGroupSummary` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMCOMMONGroupSummary *)instance;

///
/// Deserializes `DBTEAMCOMMONGroupSummary` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMCOMMONGroupSummary` API object.
///
/// @return An instantiation of the `DBTEAMCOMMONGroupSummary` object.
///
+ (DBTEAMCOMMONGroupSummary *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
