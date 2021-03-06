// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Replica Pool API (replicapool/v1beta1)
// Description:
//   The Replica Pool API allows users to declaratively provision and manage
//   groups of Google Compute Engine instances based on a common template.
// Documentation:
//   https://developers.google.com/compute/docs/replica-pool/

#import "GTLRReplicaPool.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeReplicaPool                     = @"https://www.googleapis.com/auth/replicapool";
NSString * const kGTLRAuthScopeReplicaPoolCloudPlatform        = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeReplicaPoolCloudPlatformReadOnly = @"https://www.googleapis.com/auth/cloud-platform.read-only";
NSString * const kGTLRAuthScopeReplicaPoolNdevCloudman         = @"https://www.googleapis.com/auth/ndev.cloudman";
NSString * const kGTLRAuthScopeReplicaPoolNdevCloudmanReadonly = @"https://www.googleapis.com/auth/ndev.cloudman.readonly";
NSString * const kGTLRAuthScopeReplicaPoolReadonly             = @"https://www.googleapis.com/auth/replicapool.readonly";

// ----------------------------------------------------------------------------
//   GTLRReplicaPoolService
//

@implementation GTLRReplicaPoolService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://www.googleapis.com/";
    self.servicePath = @"replicapool/v1beta1/projects/";
    self.batchPath = @"batch/replicapool/v1beta1";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
