// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Hosting API (firebasehosting/v1beta1)
// Description:
//   The Firebase Hosting REST API enables programmatic custom deployment for
//   releasing versions of your Firebase hosted content and configuration files.
// Documentation:
//   https://firebase.google.com/docs/hosting/

#import "GTLRFirebaseHosting.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeFirebaseHostingCloudPlatform    = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeFirebaseHostingCloudPlatformReadOnly = @"https://www.googleapis.com/auth/cloud-platform.read-only";
NSString * const kGTLRAuthScopeFirebaseHostingFirebase         = @"https://www.googleapis.com/auth/firebase";
NSString * const kGTLRAuthScopeFirebaseHostingFirebaseReadonly = @"https://www.googleapis.com/auth/firebase.readonly";

// ----------------------------------------------------------------------------
//   GTLRFirebaseHostingService
//

@implementation GTLRFirebaseHostingService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://firebasehosting.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
