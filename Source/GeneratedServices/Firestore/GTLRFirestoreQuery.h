// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Firestore API (firestore/v1)
// Description:
//   Accesses the NoSQL document database built for automatic scaling, high
//   performance, and ease of application development.
// Documentation:
//   https://cloud.google.com/firestore

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirestore_GoogleLongrunningCancelOperationRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Firestore query classes.
 */
@interface GTLRFirestoreQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  Method: firestore.projects.databases.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsDatabasesOperationsCancel : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsDatabasesOperationsCancelWithObject:name:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirestore_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  @param object The @c GTLRFirestore_GoogleLongrunningCancelOperationRequest
 *    to include in the query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRFirestoreQuery_ProjectsDatabasesOperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRFirestore_GoogleLongrunningCancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: firestore.projects.databases.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsDatabasesOperationsDelete : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsDatabasesOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirestore_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRFirestoreQuery_ProjectsDatabasesOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: firestore.projects.databases.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsDatabasesOperationsGet : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsDatabasesOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirestore_GoogleLongrunningOperation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRFirestoreQuery_ProjectsDatabasesOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  Method: firestore.projects.databases.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsDatabasesOperationsList : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsDatabasesOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFirestore_GoogleLongrunningListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRFirestoreQuery_ProjectsDatabasesOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a location.
 *
 *  Method: firestore.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsLocationsGet : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsLocationsGetWithname:]

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirestore_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRFirestoreQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: firestore.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsLocationsList : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFirestore_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRFirestoreQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
