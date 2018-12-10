// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Hosting API (firebasehosting/v1beta1)
// Description:
//   The Firebase Hosting REST API enables programmatic custom deployment for
//   releasing versions of your Firebase hosted content and configuration files.
// Documentation:
//   https://firebase.google.com/docs/hosting/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseHostingCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseHostingCloudPlatformReadOnly;
/**
 *  Authorization scope: View and administer all your Firebase data and settings
 *
 *  Value "https://www.googleapis.com/auth/firebase"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseHostingFirebase;
/**
 *  Authorization scope: View all your Firebase data and settings
 *
 *  Value "https://www.googleapis.com/auth/firebase.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFirebaseHostingFirebaseReadonly;

// ----------------------------------------------------------------------------
//   GTLRFirebaseHostingService
//

/**
 *  Service for executing Firebase Hosting API queries.
 *
 *  The Firebase Hosting REST API enables programmatic custom deployment for
 *  releasing versions of your Firebase hosted content and configuration files.
 */
@interface GTLRFirebaseHostingService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRFirebaseHostingQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
