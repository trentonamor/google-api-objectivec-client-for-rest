// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Binary Authorization API (binaryauthorization/v1beta1)
// Description:
//   The management interface for Binary Authorization, a system providing
//   policy control for images deployed to Kubernetes Engine clusters.
// Documentation:
//   https://cloud.google.com/binary-authorization/

#import "GTLRBinaryAuthorization.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeBinaryAuthorizationCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRBinaryAuthorizationService
//

@implementation GTLRBinaryAuthorizationService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://binaryauthorization.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
