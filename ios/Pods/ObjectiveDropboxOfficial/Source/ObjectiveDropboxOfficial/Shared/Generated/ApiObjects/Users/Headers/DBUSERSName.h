///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBUSERSName;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `Name` struct.
///
/// Representations for a person's name to assist with internationalization.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSName : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Also known as a first name.
@property (nonatomic, readonly, copy) NSString *givenName;

/// Also known as a last name or family name.
@property (nonatomic, readonly, copy) NSString *surname;

/// Locale-dependent name. In the US, a person's familiar name is their
/// givenName, but elsewhere, it could be any combination of a person's
/// givenName and surname.
@property (nonatomic, readonly, copy) NSString *familiarName;

/// A name that can be used directly to represent the name of a user's Dropbox
/// account.
@property (nonatomic, readonly, copy) NSString *displayName;

/// An abbreviated form of the person's name. Their initials in most locales.
@property (nonatomic, readonly, copy) NSString *abbreviatedName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param givenName Also known as a first name.
/// @param surname Also known as a last name or family name.
/// @param familiarName Locale-dependent name. In the US, a person's familiar
/// name is their givenName, but elsewhere, it could be any combination of a
/// person's givenName and surname.
/// @param displayName A name that can be used directly to represent the name of
/// a user's Dropbox account.
/// @param abbreviatedName An abbreviated form of the person's name. Their
/// initials in most locales.
///
/// @return An initialized instance.
///
- (instancetype)initWithGivenName:(NSString *)givenName
                          surname:(NSString *)surname
                     familiarName:(NSString *)familiarName
                      displayName:(NSString *)displayName
                  abbreviatedName:(NSString *)abbreviatedName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `Name` struct.
///
@interface DBUSERSNameSerializer : NSObject

///
/// Serializes `DBUSERSName` instances.
///
/// @param instance An instance of the `DBUSERSName` API object.
///
/// @return A json-compatible dictionary representation of the `DBUSERSName` API
/// object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBUSERSName *)instance;

///
/// Deserializes `DBUSERSName` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBUSERSName`
/// API object.
///
/// @return An instantiation of the `DBUSERSName` object.
///
+ (DBUSERSName *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
