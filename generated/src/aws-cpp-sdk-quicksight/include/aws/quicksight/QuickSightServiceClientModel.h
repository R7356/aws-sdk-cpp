﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/quicksight/QuickSightErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in QuickSightClient header */
#include <aws/quicksight/model/BatchCreateTopicReviewedAnswerResult.h>
#include <aws/quicksight/model/BatchDeleteTopicReviewedAnswerResult.h>
#include <aws/quicksight/model/CancelIngestionResult.h>
#include <aws/quicksight/model/CreateAccountCustomizationResult.h>
#include <aws/quicksight/model/CreateAccountSubscriptionResult.h>
#include <aws/quicksight/model/CreateAnalysisResult.h>
#include <aws/quicksight/model/CreateDashboardResult.h>
#include <aws/quicksight/model/CreateDataSetResult.h>
#include <aws/quicksight/model/CreateDataSourceResult.h>
#include <aws/quicksight/model/CreateFolderResult.h>
#include <aws/quicksight/model/CreateFolderMembershipResult.h>
#include <aws/quicksight/model/CreateGroupResult.h>
#include <aws/quicksight/model/CreateGroupMembershipResult.h>
#include <aws/quicksight/model/CreateIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/CreateIngestionResult.h>
#include <aws/quicksight/model/CreateNamespaceResult.h>
#include <aws/quicksight/model/CreateRefreshScheduleResult.h>
#include <aws/quicksight/model/CreateRoleMembershipResult.h>
#include <aws/quicksight/model/CreateTemplateResult.h>
#include <aws/quicksight/model/CreateTemplateAliasResult.h>
#include <aws/quicksight/model/CreateThemeResult.h>
#include <aws/quicksight/model/CreateThemeAliasResult.h>
#include <aws/quicksight/model/CreateTopicResult.h>
#include <aws/quicksight/model/CreateTopicRefreshScheduleResult.h>
#include <aws/quicksight/model/CreateVPCConnectionResult.h>
#include <aws/quicksight/model/DeleteAccountCustomizationResult.h>
#include <aws/quicksight/model/DeleteAccountSubscriptionResult.h>
#include <aws/quicksight/model/DeleteAnalysisResult.h>
#include <aws/quicksight/model/DeleteDashboardResult.h>
#include <aws/quicksight/model/DeleteDataSetResult.h>
#include <aws/quicksight/model/DeleteDataSetRefreshPropertiesResult.h>
#include <aws/quicksight/model/DeleteDataSourceResult.h>
#include <aws/quicksight/model/DeleteFolderResult.h>
#include <aws/quicksight/model/DeleteFolderMembershipResult.h>
#include <aws/quicksight/model/DeleteGroupResult.h>
#include <aws/quicksight/model/DeleteGroupMembershipResult.h>
#include <aws/quicksight/model/DeleteIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/DeleteIdentityPropagationConfigResult.h>
#include <aws/quicksight/model/DeleteNamespaceResult.h>
#include <aws/quicksight/model/DeleteRefreshScheduleResult.h>
#include <aws/quicksight/model/DeleteRoleCustomPermissionResult.h>
#include <aws/quicksight/model/DeleteRoleMembershipResult.h>
#include <aws/quicksight/model/DeleteTemplateResult.h>
#include <aws/quicksight/model/DeleteTemplateAliasResult.h>
#include <aws/quicksight/model/DeleteThemeResult.h>
#include <aws/quicksight/model/DeleteThemeAliasResult.h>
#include <aws/quicksight/model/DeleteTopicResult.h>
#include <aws/quicksight/model/DeleteTopicRefreshScheduleResult.h>
#include <aws/quicksight/model/DeleteUserResult.h>
#include <aws/quicksight/model/DeleteUserByPrincipalIdResult.h>
#include <aws/quicksight/model/DeleteVPCConnectionResult.h>
#include <aws/quicksight/model/DescribeAccountCustomizationResult.h>
#include <aws/quicksight/model/DescribeAccountSettingsResult.h>
#include <aws/quicksight/model/DescribeAccountSubscriptionResult.h>
#include <aws/quicksight/model/DescribeAnalysisResult.h>
#include <aws/quicksight/model/DescribeAnalysisDefinitionResult.h>
#include <aws/quicksight/model/DescribeAnalysisPermissionsResult.h>
#include <aws/quicksight/model/DescribeAssetBundleExportJobResult.h>
#include <aws/quicksight/model/DescribeAssetBundleImportJobResult.h>
#include <aws/quicksight/model/DescribeDashboardResult.h>
#include <aws/quicksight/model/DescribeDashboardDefinitionResult.h>
#include <aws/quicksight/model/DescribeDashboardPermissionsResult.h>
#include <aws/quicksight/model/DescribeDashboardSnapshotJobResult.h>
#include <aws/quicksight/model/DescribeDashboardSnapshotJobResultResult.h>
#include <aws/quicksight/model/DescribeDataSetResult.h>
#include <aws/quicksight/model/DescribeDataSetPermissionsResult.h>
#include <aws/quicksight/model/DescribeDataSetRefreshPropertiesResult.h>
#include <aws/quicksight/model/DescribeDataSourceResult.h>
#include <aws/quicksight/model/DescribeDataSourcePermissionsResult.h>
#include <aws/quicksight/model/DescribeFolderResult.h>
#include <aws/quicksight/model/DescribeFolderPermissionsResult.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsResult.h>
#include <aws/quicksight/model/DescribeGroupResult.h>
#include <aws/quicksight/model/DescribeGroupMembershipResult.h>
#include <aws/quicksight/model/DescribeIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/DescribeIngestionResult.h>
#include <aws/quicksight/model/DescribeIpRestrictionResult.h>
#include <aws/quicksight/model/DescribeKeyRegistrationResult.h>
#include <aws/quicksight/model/DescribeNamespaceResult.h>
#include <aws/quicksight/model/DescribeQPersonalizationConfigurationResult.h>
#include <aws/quicksight/model/DescribeRefreshScheduleResult.h>
#include <aws/quicksight/model/DescribeRoleCustomPermissionResult.h>
#include <aws/quicksight/model/DescribeTemplateResult.h>
#include <aws/quicksight/model/DescribeTemplateAliasResult.h>
#include <aws/quicksight/model/DescribeTemplateDefinitionResult.h>
#include <aws/quicksight/model/DescribeTemplatePermissionsResult.h>
#include <aws/quicksight/model/DescribeThemeResult.h>
#include <aws/quicksight/model/DescribeThemeAliasResult.h>
#include <aws/quicksight/model/DescribeThemePermissionsResult.h>
#include <aws/quicksight/model/DescribeTopicResult.h>
#include <aws/quicksight/model/DescribeTopicPermissionsResult.h>
#include <aws/quicksight/model/DescribeTopicRefreshResult.h>
#include <aws/quicksight/model/DescribeTopicRefreshScheduleResult.h>
#include <aws/quicksight/model/DescribeUserResult.h>
#include <aws/quicksight/model/DescribeVPCConnectionResult.h>
#include <aws/quicksight/model/GenerateEmbedUrlForAnonymousUserResult.h>
#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserResult.h>
#include <aws/quicksight/model/GetDashboardEmbedUrlResult.h>
#include <aws/quicksight/model/GetSessionEmbedUrlResult.h>
#include <aws/quicksight/model/ListAnalysesResult.h>
#include <aws/quicksight/model/ListAssetBundleExportJobsResult.h>
#include <aws/quicksight/model/ListAssetBundleImportJobsResult.h>
#include <aws/quicksight/model/ListDashboardVersionsResult.h>
#include <aws/quicksight/model/ListDashboardsResult.h>
#include <aws/quicksight/model/ListDataSetsResult.h>
#include <aws/quicksight/model/ListDataSourcesResult.h>
#include <aws/quicksight/model/ListFolderMembersResult.h>
#include <aws/quicksight/model/ListFoldersResult.h>
#include <aws/quicksight/model/ListFoldersForResourceResult.h>
#include <aws/quicksight/model/ListGroupMembershipsResult.h>
#include <aws/quicksight/model/ListGroupsResult.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsResult.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserResult.h>
#include <aws/quicksight/model/ListIdentityPropagationConfigsResult.h>
#include <aws/quicksight/model/ListIngestionsResult.h>
#include <aws/quicksight/model/ListNamespacesResult.h>
#include <aws/quicksight/model/ListRefreshSchedulesResult.h>
#include <aws/quicksight/model/ListRoleMembershipsResult.h>
#include <aws/quicksight/model/ListTagsForResourceResult.h>
#include <aws/quicksight/model/ListTemplateAliasesResult.h>
#include <aws/quicksight/model/ListTemplateVersionsResult.h>
#include <aws/quicksight/model/ListTemplatesResult.h>
#include <aws/quicksight/model/ListThemeAliasesResult.h>
#include <aws/quicksight/model/ListThemeVersionsResult.h>
#include <aws/quicksight/model/ListThemesResult.h>
#include <aws/quicksight/model/ListTopicRefreshSchedulesResult.h>
#include <aws/quicksight/model/ListTopicReviewedAnswersResult.h>
#include <aws/quicksight/model/ListTopicsResult.h>
#include <aws/quicksight/model/ListUserGroupsResult.h>
#include <aws/quicksight/model/ListUsersResult.h>
#include <aws/quicksight/model/ListVPCConnectionsResult.h>
#include <aws/quicksight/model/PutDataSetRefreshPropertiesResult.h>
#include <aws/quicksight/model/RegisterUserResult.h>
#include <aws/quicksight/model/RestoreAnalysisResult.h>
#include <aws/quicksight/model/SearchAnalysesResult.h>
#include <aws/quicksight/model/SearchDashboardsResult.h>
#include <aws/quicksight/model/SearchDataSetsResult.h>
#include <aws/quicksight/model/SearchDataSourcesResult.h>
#include <aws/quicksight/model/SearchFoldersResult.h>
#include <aws/quicksight/model/SearchGroupsResult.h>
#include <aws/quicksight/model/StartAssetBundleExportJobResult.h>
#include <aws/quicksight/model/StartAssetBundleImportJobResult.h>
#include <aws/quicksight/model/StartDashboardSnapshotJobResult.h>
#include <aws/quicksight/model/StartDashboardSnapshotJobScheduleResult.h>
#include <aws/quicksight/model/TagResourceResult.h>
#include <aws/quicksight/model/UntagResourceResult.h>
#include <aws/quicksight/model/UpdateAccountCustomizationResult.h>
#include <aws/quicksight/model/UpdateAccountSettingsResult.h>
#include <aws/quicksight/model/UpdateAnalysisResult.h>
#include <aws/quicksight/model/UpdateAnalysisPermissionsResult.h>
#include <aws/quicksight/model/UpdateDashboardResult.h>
#include <aws/quicksight/model/UpdateDashboardLinksResult.h>
#include <aws/quicksight/model/UpdateDashboardPermissionsResult.h>
#include <aws/quicksight/model/UpdateDashboardPublishedVersionResult.h>
#include <aws/quicksight/model/UpdateDataSetResult.h>
#include <aws/quicksight/model/UpdateDataSetPermissionsResult.h>
#include <aws/quicksight/model/UpdateDataSourceResult.h>
#include <aws/quicksight/model/UpdateDataSourcePermissionsResult.h>
#include <aws/quicksight/model/UpdateFolderResult.h>
#include <aws/quicksight/model/UpdateFolderPermissionsResult.h>
#include <aws/quicksight/model/UpdateGroupResult.h>
#include <aws/quicksight/model/UpdateIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/UpdateIdentityPropagationConfigResult.h>
#include <aws/quicksight/model/UpdateIpRestrictionResult.h>
#include <aws/quicksight/model/UpdateKeyRegistrationResult.h>
#include <aws/quicksight/model/UpdatePublicSharingSettingsResult.h>
#include <aws/quicksight/model/UpdateQPersonalizationConfigurationResult.h>
#include <aws/quicksight/model/UpdateRefreshScheduleResult.h>
#include <aws/quicksight/model/UpdateRoleCustomPermissionResult.h>
#include <aws/quicksight/model/UpdateSPICECapacityConfigurationResult.h>
#include <aws/quicksight/model/UpdateTemplateResult.h>
#include <aws/quicksight/model/UpdateTemplateAliasResult.h>
#include <aws/quicksight/model/UpdateTemplatePermissionsResult.h>
#include <aws/quicksight/model/UpdateThemeResult.h>
#include <aws/quicksight/model/UpdateThemeAliasResult.h>
#include <aws/quicksight/model/UpdateThemePermissionsResult.h>
#include <aws/quicksight/model/UpdateTopicResult.h>
#include <aws/quicksight/model/UpdateTopicPermissionsResult.h>
#include <aws/quicksight/model/UpdateTopicRefreshScheduleResult.h>
#include <aws/quicksight/model/UpdateUserResult.h>
#include <aws/quicksight/model/UpdateVPCConnectionResult.h>
/* End of service model headers required in QuickSightClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace QuickSight
  {
    using QuickSightClientConfiguration = Aws::Client::GenericClientConfiguration;
    using QuickSightEndpointProviderBase = Aws::QuickSight::Endpoint::QuickSightEndpointProviderBase;
    using QuickSightEndpointProvider = Aws::QuickSight::Endpoint::QuickSightEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QuickSightClient header */
      class BatchCreateTopicReviewedAnswerRequest;
      class BatchDeleteTopicReviewedAnswerRequest;
      class CancelIngestionRequest;
      class CreateAccountCustomizationRequest;
      class CreateAccountSubscriptionRequest;
      class CreateAnalysisRequest;
      class CreateDashboardRequest;
      class CreateDataSetRequest;
      class CreateDataSourceRequest;
      class CreateFolderRequest;
      class CreateFolderMembershipRequest;
      class CreateGroupRequest;
      class CreateGroupMembershipRequest;
      class CreateIAMPolicyAssignmentRequest;
      class CreateIngestionRequest;
      class CreateNamespaceRequest;
      class CreateRefreshScheduleRequest;
      class CreateRoleMembershipRequest;
      class CreateTemplateRequest;
      class CreateTemplateAliasRequest;
      class CreateThemeRequest;
      class CreateThemeAliasRequest;
      class CreateTopicRequest;
      class CreateTopicRefreshScheduleRequest;
      class CreateVPCConnectionRequest;
      class DeleteAccountCustomizationRequest;
      class DeleteAccountSubscriptionRequest;
      class DeleteAnalysisRequest;
      class DeleteDashboardRequest;
      class DeleteDataSetRequest;
      class DeleteDataSetRefreshPropertiesRequest;
      class DeleteDataSourceRequest;
      class DeleteFolderRequest;
      class DeleteFolderMembershipRequest;
      class DeleteGroupRequest;
      class DeleteGroupMembershipRequest;
      class DeleteIAMPolicyAssignmentRequest;
      class DeleteIdentityPropagationConfigRequest;
      class DeleteNamespaceRequest;
      class DeleteRefreshScheduleRequest;
      class DeleteRoleCustomPermissionRequest;
      class DeleteRoleMembershipRequest;
      class DeleteTemplateRequest;
      class DeleteTemplateAliasRequest;
      class DeleteThemeRequest;
      class DeleteThemeAliasRequest;
      class DeleteTopicRequest;
      class DeleteTopicRefreshScheduleRequest;
      class DeleteUserRequest;
      class DeleteUserByPrincipalIdRequest;
      class DeleteVPCConnectionRequest;
      class DescribeAccountCustomizationRequest;
      class DescribeAccountSettingsRequest;
      class DescribeAccountSubscriptionRequest;
      class DescribeAnalysisRequest;
      class DescribeAnalysisDefinitionRequest;
      class DescribeAnalysisPermissionsRequest;
      class DescribeAssetBundleExportJobRequest;
      class DescribeAssetBundleImportJobRequest;
      class DescribeDashboardRequest;
      class DescribeDashboardDefinitionRequest;
      class DescribeDashboardPermissionsRequest;
      class DescribeDashboardSnapshotJobRequest;
      class DescribeDashboardSnapshotJobResultRequest;
      class DescribeDataSetRequest;
      class DescribeDataSetPermissionsRequest;
      class DescribeDataSetRefreshPropertiesRequest;
      class DescribeDataSourceRequest;
      class DescribeDataSourcePermissionsRequest;
      class DescribeFolderRequest;
      class DescribeFolderPermissionsRequest;
      class DescribeFolderResolvedPermissionsRequest;
      class DescribeGroupRequest;
      class DescribeGroupMembershipRequest;
      class DescribeIAMPolicyAssignmentRequest;
      class DescribeIngestionRequest;
      class DescribeIpRestrictionRequest;
      class DescribeKeyRegistrationRequest;
      class DescribeNamespaceRequest;
      class DescribeQPersonalizationConfigurationRequest;
      class DescribeRefreshScheduleRequest;
      class DescribeRoleCustomPermissionRequest;
      class DescribeTemplateRequest;
      class DescribeTemplateAliasRequest;
      class DescribeTemplateDefinitionRequest;
      class DescribeTemplatePermissionsRequest;
      class DescribeThemeRequest;
      class DescribeThemeAliasRequest;
      class DescribeThemePermissionsRequest;
      class DescribeTopicRequest;
      class DescribeTopicPermissionsRequest;
      class DescribeTopicRefreshRequest;
      class DescribeTopicRefreshScheduleRequest;
      class DescribeUserRequest;
      class DescribeVPCConnectionRequest;
      class GenerateEmbedUrlForAnonymousUserRequest;
      class GenerateEmbedUrlForRegisteredUserRequest;
      class GetDashboardEmbedUrlRequest;
      class GetSessionEmbedUrlRequest;
      class ListAnalysesRequest;
      class ListAssetBundleExportJobsRequest;
      class ListAssetBundleImportJobsRequest;
      class ListDashboardVersionsRequest;
      class ListDashboardsRequest;
      class ListDataSetsRequest;
      class ListDataSourcesRequest;
      class ListFolderMembersRequest;
      class ListFoldersRequest;
      class ListFoldersForResourceRequest;
      class ListGroupMembershipsRequest;
      class ListGroupsRequest;
      class ListIAMPolicyAssignmentsRequest;
      class ListIAMPolicyAssignmentsForUserRequest;
      class ListIdentityPropagationConfigsRequest;
      class ListIngestionsRequest;
      class ListNamespacesRequest;
      class ListRefreshSchedulesRequest;
      class ListRoleMembershipsRequest;
      class ListTagsForResourceRequest;
      class ListTemplateAliasesRequest;
      class ListTemplateVersionsRequest;
      class ListTemplatesRequest;
      class ListThemeAliasesRequest;
      class ListThemeVersionsRequest;
      class ListThemesRequest;
      class ListTopicRefreshSchedulesRequest;
      class ListTopicReviewedAnswersRequest;
      class ListTopicsRequest;
      class ListUserGroupsRequest;
      class ListUsersRequest;
      class ListVPCConnectionsRequest;
      class PutDataSetRefreshPropertiesRequest;
      class RegisterUserRequest;
      class RestoreAnalysisRequest;
      class SearchAnalysesRequest;
      class SearchDashboardsRequest;
      class SearchDataSetsRequest;
      class SearchDataSourcesRequest;
      class SearchFoldersRequest;
      class SearchGroupsRequest;
      class StartAssetBundleExportJobRequest;
      class StartAssetBundleImportJobRequest;
      class StartDashboardSnapshotJobRequest;
      class StartDashboardSnapshotJobScheduleRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccountCustomizationRequest;
      class UpdateAccountSettingsRequest;
      class UpdateAnalysisRequest;
      class UpdateAnalysisPermissionsRequest;
      class UpdateDashboardRequest;
      class UpdateDashboardLinksRequest;
      class UpdateDashboardPermissionsRequest;
      class UpdateDashboardPublishedVersionRequest;
      class UpdateDataSetRequest;
      class UpdateDataSetPermissionsRequest;
      class UpdateDataSourceRequest;
      class UpdateDataSourcePermissionsRequest;
      class UpdateFolderRequest;
      class UpdateFolderPermissionsRequest;
      class UpdateGroupRequest;
      class UpdateIAMPolicyAssignmentRequest;
      class UpdateIdentityPropagationConfigRequest;
      class UpdateIpRestrictionRequest;
      class UpdateKeyRegistrationRequest;
      class UpdatePublicSharingSettingsRequest;
      class UpdateQPersonalizationConfigurationRequest;
      class UpdateRefreshScheduleRequest;
      class UpdateRoleCustomPermissionRequest;
      class UpdateSPICECapacityConfigurationRequest;
      class UpdateTemplateRequest;
      class UpdateTemplateAliasRequest;
      class UpdateTemplatePermissionsRequest;
      class UpdateThemeRequest;
      class UpdateThemeAliasRequest;
      class UpdateThemePermissionsRequest;
      class UpdateTopicRequest;
      class UpdateTopicPermissionsRequest;
      class UpdateTopicRefreshScheduleRequest;
      class UpdateUserRequest;
      class UpdateVPCConnectionRequest;
      /* End of service model forward declarations required in QuickSightClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreateTopicReviewedAnswerResult, QuickSightError> BatchCreateTopicReviewedAnswerOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteTopicReviewedAnswerResult, QuickSightError> BatchDeleteTopicReviewedAnswerOutcome;
      typedef Aws::Utils::Outcome<CancelIngestionResult, QuickSightError> CancelIngestionOutcome;
      typedef Aws::Utils::Outcome<CreateAccountCustomizationResult, QuickSightError> CreateAccountCustomizationOutcome;
      typedef Aws::Utils::Outcome<CreateAccountSubscriptionResult, QuickSightError> CreateAccountSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateAnalysisResult, QuickSightError> CreateAnalysisOutcome;
      typedef Aws::Utils::Outcome<CreateDashboardResult, QuickSightError> CreateDashboardOutcome;
      typedef Aws::Utils::Outcome<CreateDataSetResult, QuickSightError> CreateDataSetOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceResult, QuickSightError> CreateDataSourceOutcome;
      typedef Aws::Utils::Outcome<CreateFolderResult, QuickSightError> CreateFolderOutcome;
      typedef Aws::Utils::Outcome<CreateFolderMembershipResult, QuickSightError> CreateFolderMembershipOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, QuickSightError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateGroupMembershipResult, QuickSightError> CreateGroupMembershipOutcome;
      typedef Aws::Utils::Outcome<CreateIAMPolicyAssignmentResult, QuickSightError> CreateIAMPolicyAssignmentOutcome;
      typedef Aws::Utils::Outcome<CreateIngestionResult, QuickSightError> CreateIngestionOutcome;
      typedef Aws::Utils::Outcome<CreateNamespaceResult, QuickSightError> CreateNamespaceOutcome;
      typedef Aws::Utils::Outcome<CreateRefreshScheduleResult, QuickSightError> CreateRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<CreateRoleMembershipResult, QuickSightError> CreateRoleMembershipOutcome;
      typedef Aws::Utils::Outcome<CreateTemplateResult, QuickSightError> CreateTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateTemplateAliasResult, QuickSightError> CreateTemplateAliasOutcome;
      typedef Aws::Utils::Outcome<CreateThemeResult, QuickSightError> CreateThemeOutcome;
      typedef Aws::Utils::Outcome<CreateThemeAliasResult, QuickSightError> CreateThemeAliasOutcome;
      typedef Aws::Utils::Outcome<CreateTopicResult, QuickSightError> CreateTopicOutcome;
      typedef Aws::Utils::Outcome<CreateTopicRefreshScheduleResult, QuickSightError> CreateTopicRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<CreateVPCConnectionResult, QuickSightError> CreateVPCConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountCustomizationResult, QuickSightError> DeleteAccountCustomizationOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountSubscriptionResult, QuickSightError> DeleteAccountSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteAnalysisResult, QuickSightError> DeleteAnalysisOutcome;
      typedef Aws::Utils::Outcome<DeleteDashboardResult, QuickSightError> DeleteDashboardOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSetResult, QuickSightError> DeleteDataSetOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSetRefreshPropertiesResult, QuickSightError> DeleteDataSetRefreshPropertiesOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSourceResult, QuickSightError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteFolderResult, QuickSightError> DeleteFolderOutcome;
      typedef Aws::Utils::Outcome<DeleteFolderMembershipResult, QuickSightError> DeleteFolderMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, QuickSightError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupMembershipResult, QuickSightError> DeleteGroupMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteIAMPolicyAssignmentResult, QuickSightError> DeleteIAMPolicyAssignmentOutcome;
      typedef Aws::Utils::Outcome<DeleteIdentityPropagationConfigResult, QuickSightError> DeleteIdentityPropagationConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteNamespaceResult, QuickSightError> DeleteNamespaceOutcome;
      typedef Aws::Utils::Outcome<DeleteRefreshScheduleResult, QuickSightError> DeleteRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<DeleteRoleCustomPermissionResult, QuickSightError> DeleteRoleCustomPermissionOutcome;
      typedef Aws::Utils::Outcome<DeleteRoleMembershipResult, QuickSightError> DeleteRoleMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteTemplateResult, QuickSightError> DeleteTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteTemplateAliasResult, QuickSightError> DeleteTemplateAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteThemeResult, QuickSightError> DeleteThemeOutcome;
      typedef Aws::Utils::Outcome<DeleteThemeAliasResult, QuickSightError> DeleteThemeAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteTopicResult, QuickSightError> DeleteTopicOutcome;
      typedef Aws::Utils::Outcome<DeleteTopicRefreshScheduleResult, QuickSightError> DeleteTopicRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, QuickSightError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DeleteUserByPrincipalIdResult, QuickSightError> DeleteUserByPrincipalIdOutcome;
      typedef Aws::Utils::Outcome<DeleteVPCConnectionResult, QuickSightError> DeleteVPCConnectionOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountCustomizationResult, QuickSightError> DescribeAccountCustomizationOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountSettingsResult, QuickSightError> DescribeAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountSubscriptionResult, QuickSightError> DescribeAccountSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DescribeAnalysisResult, QuickSightError> DescribeAnalysisOutcome;
      typedef Aws::Utils::Outcome<DescribeAnalysisDefinitionResult, QuickSightError> DescribeAnalysisDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeAnalysisPermissionsResult, QuickSightError> DescribeAnalysisPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeAssetBundleExportJobResult, QuickSightError> DescribeAssetBundleExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeAssetBundleImportJobResult, QuickSightError> DescribeAssetBundleImportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeDashboardResult, QuickSightError> DescribeDashboardOutcome;
      typedef Aws::Utils::Outcome<DescribeDashboardDefinitionResult, QuickSightError> DescribeDashboardDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeDashboardPermissionsResult, QuickSightError> DescribeDashboardPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDashboardSnapshotJobResult, QuickSightError> DescribeDashboardSnapshotJobOutcome;
      typedef Aws::Utils::Outcome<DescribeDashboardSnapshotJobResultResult, QuickSightError> DescribeDashboardSnapshotJobResultOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSetResult, QuickSightError> DescribeDataSetOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSetPermissionsResult, QuickSightError> DescribeDataSetPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSetRefreshPropertiesResult, QuickSightError> DescribeDataSetRefreshPropertiesOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSourceResult, QuickSightError> DescribeDataSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSourcePermissionsResult, QuickSightError> DescribeDataSourcePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeFolderResult, QuickSightError> DescribeFolderOutcome;
      typedef Aws::Utils::Outcome<DescribeFolderPermissionsResult, QuickSightError> DescribeFolderPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeFolderResolvedPermissionsResult, QuickSightError> DescribeFolderResolvedPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeGroupResult, QuickSightError> DescribeGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeGroupMembershipResult, QuickSightError> DescribeGroupMembershipOutcome;
      typedef Aws::Utils::Outcome<DescribeIAMPolicyAssignmentResult, QuickSightError> DescribeIAMPolicyAssignmentOutcome;
      typedef Aws::Utils::Outcome<DescribeIngestionResult, QuickSightError> DescribeIngestionOutcome;
      typedef Aws::Utils::Outcome<DescribeIpRestrictionResult, QuickSightError> DescribeIpRestrictionOutcome;
      typedef Aws::Utils::Outcome<DescribeKeyRegistrationResult, QuickSightError> DescribeKeyRegistrationOutcome;
      typedef Aws::Utils::Outcome<DescribeNamespaceResult, QuickSightError> DescribeNamespaceOutcome;
      typedef Aws::Utils::Outcome<DescribeQPersonalizationConfigurationResult, QuickSightError> DescribeQPersonalizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeRefreshScheduleResult, QuickSightError> DescribeRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<DescribeRoleCustomPermissionResult, QuickSightError> DescribeRoleCustomPermissionOutcome;
      typedef Aws::Utils::Outcome<DescribeTemplateResult, QuickSightError> DescribeTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeTemplateAliasResult, QuickSightError> DescribeTemplateAliasOutcome;
      typedef Aws::Utils::Outcome<DescribeTemplateDefinitionResult, QuickSightError> DescribeTemplateDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeTemplatePermissionsResult, QuickSightError> DescribeTemplatePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeThemeResult, QuickSightError> DescribeThemeOutcome;
      typedef Aws::Utils::Outcome<DescribeThemeAliasResult, QuickSightError> DescribeThemeAliasOutcome;
      typedef Aws::Utils::Outcome<DescribeThemePermissionsResult, QuickSightError> DescribeThemePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeTopicResult, QuickSightError> DescribeTopicOutcome;
      typedef Aws::Utils::Outcome<DescribeTopicPermissionsResult, QuickSightError> DescribeTopicPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeTopicRefreshResult, QuickSightError> DescribeTopicRefreshOutcome;
      typedef Aws::Utils::Outcome<DescribeTopicRefreshScheduleResult, QuickSightError> DescribeTopicRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, QuickSightError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<DescribeVPCConnectionResult, QuickSightError> DescribeVPCConnectionOutcome;
      typedef Aws::Utils::Outcome<GenerateEmbedUrlForAnonymousUserResult, QuickSightError> GenerateEmbedUrlForAnonymousUserOutcome;
      typedef Aws::Utils::Outcome<GenerateEmbedUrlForRegisteredUserResult, QuickSightError> GenerateEmbedUrlForRegisteredUserOutcome;
      typedef Aws::Utils::Outcome<GetDashboardEmbedUrlResult, QuickSightError> GetDashboardEmbedUrlOutcome;
      typedef Aws::Utils::Outcome<GetSessionEmbedUrlResult, QuickSightError> GetSessionEmbedUrlOutcome;
      typedef Aws::Utils::Outcome<ListAnalysesResult, QuickSightError> ListAnalysesOutcome;
      typedef Aws::Utils::Outcome<ListAssetBundleExportJobsResult, QuickSightError> ListAssetBundleExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListAssetBundleImportJobsResult, QuickSightError> ListAssetBundleImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListDashboardVersionsResult, QuickSightError> ListDashboardVersionsOutcome;
      typedef Aws::Utils::Outcome<ListDashboardsResult, QuickSightError> ListDashboardsOutcome;
      typedef Aws::Utils::Outcome<ListDataSetsResult, QuickSightError> ListDataSetsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourcesResult, QuickSightError> ListDataSourcesOutcome;
      typedef Aws::Utils::Outcome<ListFolderMembersResult, QuickSightError> ListFolderMembersOutcome;
      typedef Aws::Utils::Outcome<ListFoldersResult, QuickSightError> ListFoldersOutcome;
      typedef Aws::Utils::Outcome<ListFoldersForResourceResult, QuickSightError> ListFoldersForResourceOutcome;
      typedef Aws::Utils::Outcome<ListGroupMembershipsResult, QuickSightError> ListGroupMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, QuickSightError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListIAMPolicyAssignmentsResult, QuickSightError> ListIAMPolicyAssignmentsOutcome;
      typedef Aws::Utils::Outcome<ListIAMPolicyAssignmentsForUserResult, QuickSightError> ListIAMPolicyAssignmentsForUserOutcome;
      typedef Aws::Utils::Outcome<ListIdentityPropagationConfigsResult, QuickSightError> ListIdentityPropagationConfigsOutcome;
      typedef Aws::Utils::Outcome<ListIngestionsResult, QuickSightError> ListIngestionsOutcome;
      typedef Aws::Utils::Outcome<ListNamespacesResult, QuickSightError> ListNamespacesOutcome;
      typedef Aws::Utils::Outcome<ListRefreshSchedulesResult, QuickSightError> ListRefreshSchedulesOutcome;
      typedef Aws::Utils::Outcome<ListRoleMembershipsResult, QuickSightError> ListRoleMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, QuickSightError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTemplateAliasesResult, QuickSightError> ListTemplateAliasesOutcome;
      typedef Aws::Utils::Outcome<ListTemplateVersionsResult, QuickSightError> ListTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<ListTemplatesResult, QuickSightError> ListTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListThemeAliasesResult, QuickSightError> ListThemeAliasesOutcome;
      typedef Aws::Utils::Outcome<ListThemeVersionsResult, QuickSightError> ListThemeVersionsOutcome;
      typedef Aws::Utils::Outcome<ListThemesResult, QuickSightError> ListThemesOutcome;
      typedef Aws::Utils::Outcome<ListTopicRefreshSchedulesResult, QuickSightError> ListTopicRefreshSchedulesOutcome;
      typedef Aws::Utils::Outcome<ListTopicReviewedAnswersResult, QuickSightError> ListTopicReviewedAnswersOutcome;
      typedef Aws::Utils::Outcome<ListTopicsResult, QuickSightError> ListTopicsOutcome;
      typedef Aws::Utils::Outcome<ListUserGroupsResult, QuickSightError> ListUserGroupsOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, QuickSightError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<ListVPCConnectionsResult, QuickSightError> ListVPCConnectionsOutcome;
      typedef Aws::Utils::Outcome<PutDataSetRefreshPropertiesResult, QuickSightError> PutDataSetRefreshPropertiesOutcome;
      typedef Aws::Utils::Outcome<RegisterUserResult, QuickSightError> RegisterUserOutcome;
      typedef Aws::Utils::Outcome<RestoreAnalysisResult, QuickSightError> RestoreAnalysisOutcome;
      typedef Aws::Utils::Outcome<SearchAnalysesResult, QuickSightError> SearchAnalysesOutcome;
      typedef Aws::Utils::Outcome<SearchDashboardsResult, QuickSightError> SearchDashboardsOutcome;
      typedef Aws::Utils::Outcome<SearchDataSetsResult, QuickSightError> SearchDataSetsOutcome;
      typedef Aws::Utils::Outcome<SearchDataSourcesResult, QuickSightError> SearchDataSourcesOutcome;
      typedef Aws::Utils::Outcome<SearchFoldersResult, QuickSightError> SearchFoldersOutcome;
      typedef Aws::Utils::Outcome<SearchGroupsResult, QuickSightError> SearchGroupsOutcome;
      typedef Aws::Utils::Outcome<StartAssetBundleExportJobResult, QuickSightError> StartAssetBundleExportJobOutcome;
      typedef Aws::Utils::Outcome<StartAssetBundleImportJobResult, QuickSightError> StartAssetBundleImportJobOutcome;
      typedef Aws::Utils::Outcome<StartDashboardSnapshotJobResult, QuickSightError> StartDashboardSnapshotJobOutcome;
      typedef Aws::Utils::Outcome<StartDashboardSnapshotJobScheduleResult, QuickSightError> StartDashboardSnapshotJobScheduleOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, QuickSightError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, QuickSightError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountCustomizationResult, QuickSightError> UpdateAccountCustomizationOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, QuickSightError> UpdateAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateAnalysisResult, QuickSightError> UpdateAnalysisOutcome;
      typedef Aws::Utils::Outcome<UpdateAnalysisPermissionsResult, QuickSightError> UpdateAnalysisPermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateDashboardResult, QuickSightError> UpdateDashboardOutcome;
      typedef Aws::Utils::Outcome<UpdateDashboardLinksResult, QuickSightError> UpdateDashboardLinksOutcome;
      typedef Aws::Utils::Outcome<UpdateDashboardPermissionsResult, QuickSightError> UpdateDashboardPermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateDashboardPublishedVersionResult, QuickSightError> UpdateDashboardPublishedVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSetResult, QuickSightError> UpdateDataSetOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSetPermissionsResult, QuickSightError> UpdateDataSetPermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourceResult, QuickSightError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourcePermissionsResult, QuickSightError> UpdateDataSourcePermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateFolderResult, QuickSightError> UpdateFolderOutcome;
      typedef Aws::Utils::Outcome<UpdateFolderPermissionsResult, QuickSightError> UpdateFolderPermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupResult, QuickSightError> UpdateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateIAMPolicyAssignmentResult, QuickSightError> UpdateIAMPolicyAssignmentOutcome;
      typedef Aws::Utils::Outcome<UpdateIdentityPropagationConfigResult, QuickSightError> UpdateIdentityPropagationConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateIpRestrictionResult, QuickSightError> UpdateIpRestrictionOutcome;
      typedef Aws::Utils::Outcome<UpdateKeyRegistrationResult, QuickSightError> UpdateKeyRegistrationOutcome;
      typedef Aws::Utils::Outcome<UpdatePublicSharingSettingsResult, QuickSightError> UpdatePublicSharingSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateQPersonalizationConfigurationResult, QuickSightError> UpdateQPersonalizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateRefreshScheduleResult, QuickSightError> UpdateRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateRoleCustomPermissionResult, QuickSightError> UpdateRoleCustomPermissionOutcome;
      typedef Aws::Utils::Outcome<UpdateSPICECapacityConfigurationResult, QuickSightError> UpdateSPICECapacityConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateTemplateResult, QuickSightError> UpdateTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateTemplateAliasResult, QuickSightError> UpdateTemplateAliasOutcome;
      typedef Aws::Utils::Outcome<UpdateTemplatePermissionsResult, QuickSightError> UpdateTemplatePermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateThemeResult, QuickSightError> UpdateThemeOutcome;
      typedef Aws::Utils::Outcome<UpdateThemeAliasResult, QuickSightError> UpdateThemeAliasOutcome;
      typedef Aws::Utils::Outcome<UpdateThemePermissionsResult, QuickSightError> UpdateThemePermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateTopicResult, QuickSightError> UpdateTopicOutcome;
      typedef Aws::Utils::Outcome<UpdateTopicPermissionsResult, QuickSightError> UpdateTopicPermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateTopicRefreshScheduleResult, QuickSightError> UpdateTopicRefreshScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, QuickSightError> UpdateUserOutcome;
      typedef Aws::Utils::Outcome<UpdateVPCConnectionResult, QuickSightError> UpdateVPCConnectionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreateTopicReviewedAnswerOutcome> BatchCreateTopicReviewedAnswerOutcomeCallable;
      typedef std::future<BatchDeleteTopicReviewedAnswerOutcome> BatchDeleteTopicReviewedAnswerOutcomeCallable;
      typedef std::future<CancelIngestionOutcome> CancelIngestionOutcomeCallable;
      typedef std::future<CreateAccountCustomizationOutcome> CreateAccountCustomizationOutcomeCallable;
      typedef std::future<CreateAccountSubscriptionOutcome> CreateAccountSubscriptionOutcomeCallable;
      typedef std::future<CreateAnalysisOutcome> CreateAnalysisOutcomeCallable;
      typedef std::future<CreateDashboardOutcome> CreateDashboardOutcomeCallable;
      typedef std::future<CreateDataSetOutcome> CreateDataSetOutcomeCallable;
      typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
      typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
      typedef std::future<CreateFolderMembershipOutcome> CreateFolderMembershipOutcomeCallable;
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<CreateGroupMembershipOutcome> CreateGroupMembershipOutcomeCallable;
      typedef std::future<CreateIAMPolicyAssignmentOutcome> CreateIAMPolicyAssignmentOutcomeCallable;
      typedef std::future<CreateIngestionOutcome> CreateIngestionOutcomeCallable;
      typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
      typedef std::future<CreateRefreshScheduleOutcome> CreateRefreshScheduleOutcomeCallable;
      typedef std::future<CreateRoleMembershipOutcome> CreateRoleMembershipOutcomeCallable;
      typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
      typedef std::future<CreateTemplateAliasOutcome> CreateTemplateAliasOutcomeCallable;
      typedef std::future<CreateThemeOutcome> CreateThemeOutcomeCallable;
      typedef std::future<CreateThemeAliasOutcome> CreateThemeAliasOutcomeCallable;
      typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
      typedef std::future<CreateTopicRefreshScheduleOutcome> CreateTopicRefreshScheduleOutcomeCallable;
      typedef std::future<CreateVPCConnectionOutcome> CreateVPCConnectionOutcomeCallable;
      typedef std::future<DeleteAccountCustomizationOutcome> DeleteAccountCustomizationOutcomeCallable;
      typedef std::future<DeleteAccountSubscriptionOutcome> DeleteAccountSubscriptionOutcomeCallable;
      typedef std::future<DeleteAnalysisOutcome> DeleteAnalysisOutcomeCallable;
      typedef std::future<DeleteDashboardOutcome> DeleteDashboardOutcomeCallable;
      typedef std::future<DeleteDataSetOutcome> DeleteDataSetOutcomeCallable;
      typedef std::future<DeleteDataSetRefreshPropertiesOutcome> DeleteDataSetRefreshPropertiesOutcomeCallable;
      typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
      typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
      typedef std::future<DeleteFolderMembershipOutcome> DeleteFolderMembershipOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DeleteGroupMembershipOutcome> DeleteGroupMembershipOutcomeCallable;
      typedef std::future<DeleteIAMPolicyAssignmentOutcome> DeleteIAMPolicyAssignmentOutcomeCallable;
      typedef std::future<DeleteIdentityPropagationConfigOutcome> DeleteIdentityPropagationConfigOutcomeCallable;
      typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
      typedef std::future<DeleteRefreshScheduleOutcome> DeleteRefreshScheduleOutcomeCallable;
      typedef std::future<DeleteRoleCustomPermissionOutcome> DeleteRoleCustomPermissionOutcomeCallable;
      typedef std::future<DeleteRoleMembershipOutcome> DeleteRoleMembershipOutcomeCallable;
      typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
      typedef std::future<DeleteTemplateAliasOutcome> DeleteTemplateAliasOutcomeCallable;
      typedef std::future<DeleteThemeOutcome> DeleteThemeOutcomeCallable;
      typedef std::future<DeleteThemeAliasOutcome> DeleteThemeAliasOutcomeCallable;
      typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
      typedef std::future<DeleteTopicRefreshScheduleOutcome> DeleteTopicRefreshScheduleOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DeleteUserByPrincipalIdOutcome> DeleteUserByPrincipalIdOutcomeCallable;
      typedef std::future<DeleteVPCConnectionOutcome> DeleteVPCConnectionOutcomeCallable;
      typedef std::future<DescribeAccountCustomizationOutcome> DescribeAccountCustomizationOutcomeCallable;
      typedef std::future<DescribeAccountSettingsOutcome> DescribeAccountSettingsOutcomeCallable;
      typedef std::future<DescribeAccountSubscriptionOutcome> DescribeAccountSubscriptionOutcomeCallable;
      typedef std::future<DescribeAnalysisOutcome> DescribeAnalysisOutcomeCallable;
      typedef std::future<DescribeAnalysisDefinitionOutcome> DescribeAnalysisDefinitionOutcomeCallable;
      typedef std::future<DescribeAnalysisPermissionsOutcome> DescribeAnalysisPermissionsOutcomeCallable;
      typedef std::future<DescribeAssetBundleExportJobOutcome> DescribeAssetBundleExportJobOutcomeCallable;
      typedef std::future<DescribeAssetBundleImportJobOutcome> DescribeAssetBundleImportJobOutcomeCallable;
      typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
      typedef std::future<DescribeDashboardDefinitionOutcome> DescribeDashboardDefinitionOutcomeCallable;
      typedef std::future<DescribeDashboardPermissionsOutcome> DescribeDashboardPermissionsOutcomeCallable;
      typedef std::future<DescribeDashboardSnapshotJobOutcome> DescribeDashboardSnapshotJobOutcomeCallable;
      typedef std::future<DescribeDashboardSnapshotJobResultOutcome> DescribeDashboardSnapshotJobResultOutcomeCallable;
      typedef std::future<DescribeDataSetOutcome> DescribeDataSetOutcomeCallable;
      typedef std::future<DescribeDataSetPermissionsOutcome> DescribeDataSetPermissionsOutcomeCallable;
      typedef std::future<DescribeDataSetRefreshPropertiesOutcome> DescribeDataSetRefreshPropertiesOutcomeCallable;
      typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
      typedef std::future<DescribeDataSourcePermissionsOutcome> DescribeDataSourcePermissionsOutcomeCallable;
      typedef std::future<DescribeFolderOutcome> DescribeFolderOutcomeCallable;
      typedef std::future<DescribeFolderPermissionsOutcome> DescribeFolderPermissionsOutcomeCallable;
      typedef std::future<DescribeFolderResolvedPermissionsOutcome> DescribeFolderResolvedPermissionsOutcomeCallable;
      typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
      typedef std::future<DescribeGroupMembershipOutcome> DescribeGroupMembershipOutcomeCallable;
      typedef std::future<DescribeIAMPolicyAssignmentOutcome> DescribeIAMPolicyAssignmentOutcomeCallable;
      typedef std::future<DescribeIngestionOutcome> DescribeIngestionOutcomeCallable;
      typedef std::future<DescribeIpRestrictionOutcome> DescribeIpRestrictionOutcomeCallable;
      typedef std::future<DescribeKeyRegistrationOutcome> DescribeKeyRegistrationOutcomeCallable;
      typedef std::future<DescribeNamespaceOutcome> DescribeNamespaceOutcomeCallable;
      typedef std::future<DescribeQPersonalizationConfigurationOutcome> DescribeQPersonalizationConfigurationOutcomeCallable;
      typedef std::future<DescribeRefreshScheduleOutcome> DescribeRefreshScheduleOutcomeCallable;
      typedef std::future<DescribeRoleCustomPermissionOutcome> DescribeRoleCustomPermissionOutcomeCallable;
      typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
      typedef std::future<DescribeTemplateAliasOutcome> DescribeTemplateAliasOutcomeCallable;
      typedef std::future<DescribeTemplateDefinitionOutcome> DescribeTemplateDefinitionOutcomeCallable;
      typedef std::future<DescribeTemplatePermissionsOutcome> DescribeTemplatePermissionsOutcomeCallable;
      typedef std::future<DescribeThemeOutcome> DescribeThemeOutcomeCallable;
      typedef std::future<DescribeThemeAliasOutcome> DescribeThemeAliasOutcomeCallable;
      typedef std::future<DescribeThemePermissionsOutcome> DescribeThemePermissionsOutcomeCallable;
      typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
      typedef std::future<DescribeTopicPermissionsOutcome> DescribeTopicPermissionsOutcomeCallable;
      typedef std::future<DescribeTopicRefreshOutcome> DescribeTopicRefreshOutcomeCallable;
      typedef std::future<DescribeTopicRefreshScheduleOutcome> DescribeTopicRefreshScheduleOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<DescribeVPCConnectionOutcome> DescribeVPCConnectionOutcomeCallable;
      typedef std::future<GenerateEmbedUrlForAnonymousUserOutcome> GenerateEmbedUrlForAnonymousUserOutcomeCallable;
      typedef std::future<GenerateEmbedUrlForRegisteredUserOutcome> GenerateEmbedUrlForRegisteredUserOutcomeCallable;
      typedef std::future<GetDashboardEmbedUrlOutcome> GetDashboardEmbedUrlOutcomeCallable;
      typedef std::future<GetSessionEmbedUrlOutcome> GetSessionEmbedUrlOutcomeCallable;
      typedef std::future<ListAnalysesOutcome> ListAnalysesOutcomeCallable;
      typedef std::future<ListAssetBundleExportJobsOutcome> ListAssetBundleExportJobsOutcomeCallable;
      typedef std::future<ListAssetBundleImportJobsOutcome> ListAssetBundleImportJobsOutcomeCallable;
      typedef std::future<ListDashboardVersionsOutcome> ListDashboardVersionsOutcomeCallable;
      typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
      typedef std::future<ListDataSetsOutcome> ListDataSetsOutcomeCallable;
      typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
      typedef std::future<ListFolderMembersOutcome> ListFolderMembersOutcomeCallable;
      typedef std::future<ListFoldersOutcome> ListFoldersOutcomeCallable;
      typedef std::future<ListFoldersForResourceOutcome> ListFoldersForResourceOutcomeCallable;
      typedef std::future<ListGroupMembershipsOutcome> ListGroupMembershipsOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListIAMPolicyAssignmentsOutcome> ListIAMPolicyAssignmentsOutcomeCallable;
      typedef std::future<ListIAMPolicyAssignmentsForUserOutcome> ListIAMPolicyAssignmentsForUserOutcomeCallable;
      typedef std::future<ListIdentityPropagationConfigsOutcome> ListIdentityPropagationConfigsOutcomeCallable;
      typedef std::future<ListIngestionsOutcome> ListIngestionsOutcomeCallable;
      typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
      typedef std::future<ListRefreshSchedulesOutcome> ListRefreshSchedulesOutcomeCallable;
      typedef std::future<ListRoleMembershipsOutcome> ListRoleMembershipsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTemplateAliasesOutcome> ListTemplateAliasesOutcomeCallable;
      typedef std::future<ListTemplateVersionsOutcome> ListTemplateVersionsOutcomeCallable;
      typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
      typedef std::future<ListThemeAliasesOutcome> ListThemeAliasesOutcomeCallable;
      typedef std::future<ListThemeVersionsOutcome> ListThemeVersionsOutcomeCallable;
      typedef std::future<ListThemesOutcome> ListThemesOutcomeCallable;
      typedef std::future<ListTopicRefreshSchedulesOutcome> ListTopicRefreshSchedulesOutcomeCallable;
      typedef std::future<ListTopicReviewedAnswersOutcome> ListTopicReviewedAnswersOutcomeCallable;
      typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
      typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<ListVPCConnectionsOutcome> ListVPCConnectionsOutcomeCallable;
      typedef std::future<PutDataSetRefreshPropertiesOutcome> PutDataSetRefreshPropertiesOutcomeCallable;
      typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
      typedef std::future<RestoreAnalysisOutcome> RestoreAnalysisOutcomeCallable;
      typedef std::future<SearchAnalysesOutcome> SearchAnalysesOutcomeCallable;
      typedef std::future<SearchDashboardsOutcome> SearchDashboardsOutcomeCallable;
      typedef std::future<SearchDataSetsOutcome> SearchDataSetsOutcomeCallable;
      typedef std::future<SearchDataSourcesOutcome> SearchDataSourcesOutcomeCallable;
      typedef std::future<SearchFoldersOutcome> SearchFoldersOutcomeCallable;
      typedef std::future<SearchGroupsOutcome> SearchGroupsOutcomeCallable;
      typedef std::future<StartAssetBundleExportJobOutcome> StartAssetBundleExportJobOutcomeCallable;
      typedef std::future<StartAssetBundleImportJobOutcome> StartAssetBundleImportJobOutcomeCallable;
      typedef std::future<StartDashboardSnapshotJobOutcome> StartDashboardSnapshotJobOutcomeCallable;
      typedef std::future<StartDashboardSnapshotJobScheduleOutcome> StartDashboardSnapshotJobScheduleOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccountCustomizationOutcome> UpdateAccountCustomizationOutcomeCallable;
      typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
      typedef std::future<UpdateAnalysisOutcome> UpdateAnalysisOutcomeCallable;
      typedef std::future<UpdateAnalysisPermissionsOutcome> UpdateAnalysisPermissionsOutcomeCallable;
      typedef std::future<UpdateDashboardOutcome> UpdateDashboardOutcomeCallable;
      typedef std::future<UpdateDashboardLinksOutcome> UpdateDashboardLinksOutcomeCallable;
      typedef std::future<UpdateDashboardPermissionsOutcome> UpdateDashboardPermissionsOutcomeCallable;
      typedef std::future<UpdateDashboardPublishedVersionOutcome> UpdateDashboardPublishedVersionOutcomeCallable;
      typedef std::future<UpdateDataSetOutcome> UpdateDataSetOutcomeCallable;
      typedef std::future<UpdateDataSetPermissionsOutcome> UpdateDataSetPermissionsOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateDataSourcePermissionsOutcome> UpdateDataSourcePermissionsOutcomeCallable;
      typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
      typedef std::future<UpdateFolderPermissionsOutcome> UpdateFolderPermissionsOutcomeCallable;
      typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
      typedef std::future<UpdateIAMPolicyAssignmentOutcome> UpdateIAMPolicyAssignmentOutcomeCallable;
      typedef std::future<UpdateIdentityPropagationConfigOutcome> UpdateIdentityPropagationConfigOutcomeCallable;
      typedef std::future<UpdateIpRestrictionOutcome> UpdateIpRestrictionOutcomeCallable;
      typedef std::future<UpdateKeyRegistrationOutcome> UpdateKeyRegistrationOutcomeCallable;
      typedef std::future<UpdatePublicSharingSettingsOutcome> UpdatePublicSharingSettingsOutcomeCallable;
      typedef std::future<UpdateQPersonalizationConfigurationOutcome> UpdateQPersonalizationConfigurationOutcomeCallable;
      typedef std::future<UpdateRefreshScheduleOutcome> UpdateRefreshScheduleOutcomeCallable;
      typedef std::future<UpdateRoleCustomPermissionOutcome> UpdateRoleCustomPermissionOutcomeCallable;
      typedef std::future<UpdateSPICECapacityConfigurationOutcome> UpdateSPICECapacityConfigurationOutcomeCallable;
      typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
      typedef std::future<UpdateTemplateAliasOutcome> UpdateTemplateAliasOutcomeCallable;
      typedef std::future<UpdateTemplatePermissionsOutcome> UpdateTemplatePermissionsOutcomeCallable;
      typedef std::future<UpdateThemeOutcome> UpdateThemeOutcomeCallable;
      typedef std::future<UpdateThemeAliasOutcome> UpdateThemeAliasOutcomeCallable;
      typedef std::future<UpdateThemePermissionsOutcome> UpdateThemePermissionsOutcomeCallable;
      typedef std::future<UpdateTopicOutcome> UpdateTopicOutcomeCallable;
      typedef std::future<UpdateTopicPermissionsOutcome> UpdateTopicPermissionsOutcomeCallable;
      typedef std::future<UpdateTopicRefreshScheduleOutcome> UpdateTopicRefreshScheduleOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      typedef std::future<UpdateVPCConnectionOutcome> UpdateVPCConnectionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QuickSightClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const QuickSightClient*, const Model::BatchCreateTopicReviewedAnswerRequest&, const Model::BatchCreateTopicReviewedAnswerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateTopicReviewedAnswerResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::BatchDeleteTopicReviewedAnswerRequest&, const Model::BatchDeleteTopicReviewedAnswerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTopicReviewedAnswerResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CancelIngestionRequest&, const Model::CancelIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateAccountCustomizationRequest&, const Model::CreateAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateAccountSubscriptionRequest&, const Model::CreateAccountSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountSubscriptionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateAnalysisRequest&, const Model::CreateAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDashboardRequest&, const Model::CreateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDataSetRequest&, const Model::CreateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateFolderRequest&, const Model::CreateFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateFolderMembershipRequest&, const Model::CreateFolderMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFolderMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupMembershipRequest&, const Model::CreateGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateIAMPolicyAssignmentRequest&, const Model::CreateIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateIngestionRequest&, const Model::CreateIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateNamespaceRequest&, const Model::CreateNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNamespaceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateRefreshScheduleRequest&, const Model::CreateRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateRoleMembershipRequest&, const Model::CreateRoleMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoleMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTemplateRequest&, const Model::CreateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTemplateAliasRequest&, const Model::CreateTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateThemeRequest&, const Model::CreateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateThemeAliasRequest&, const Model::CreateThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTopicRequest&, const Model::CreateTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTopicRefreshScheduleRequest&, const Model::CreateTopicRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateVPCConnectionRequest&, const Model::CreateVPCConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVPCConnectionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteAccountCustomizationRequest&, const Model::DeleteAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteAccountSubscriptionRequest&, const Model::DeleteAccountSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountSubscriptionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteAnalysisRequest&, const Model::DeleteAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDashboardRequest&, const Model::DeleteDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDataSetRequest&, const Model::DeleteDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDataSetRefreshPropertiesRequest&, const Model::DeleteDataSetRefreshPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSetRefreshPropertiesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteFolderRequest&, const Model::DeleteFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteFolderMembershipRequest&, const Model::DeleteFolderMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFolderMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupMembershipRequest&, const Model::DeleteGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteIAMPolicyAssignmentRequest&, const Model::DeleteIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteIdentityPropagationConfigRequest&, const Model::DeleteIdentityPropagationConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityPropagationConfigResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteNamespaceRequest&, const Model::DeleteNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamespaceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteRefreshScheduleRequest&, const Model::DeleteRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteRoleCustomPermissionRequest&, const Model::DeleteRoleCustomPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoleCustomPermissionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteRoleMembershipRequest&, const Model::DeleteRoleMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoleMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTemplateRequest&, const Model::DeleteTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTemplateAliasRequest&, const Model::DeleteTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteThemeRequest&, const Model::DeleteThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteThemeAliasRequest&, const Model::DeleteThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTopicRequest&, const Model::DeleteTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTopicRefreshScheduleRequest&, const Model::DeleteTopicRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserByPrincipalIdRequest&, const Model::DeleteUserByPrincipalIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserByPrincipalIdResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteVPCConnectionRequest&, const Model::DeleteVPCConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVPCConnectionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAccountCustomizationRequest&, const Model::DescribeAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAccountSettingsRequest&, const Model::DescribeAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAccountSubscriptionRequest&, const Model::DescribeAccountSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountSubscriptionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAnalysisRequest&, const Model::DescribeAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAnalysisDefinitionRequest&, const Model::DescribeAnalysisDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisDefinitionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAnalysisPermissionsRequest&, const Model::DescribeAnalysisPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAssetBundleExportJobRequest&, const Model::DescribeAssetBundleExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssetBundleExportJobResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAssetBundleImportJobRequest&, const Model::DescribeAssetBundleImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssetBundleImportJobResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardRequest&, const Model::DescribeDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardDefinitionRequest&, const Model::DescribeDashboardDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardDefinitionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardPermissionsRequest&, const Model::DescribeDashboardPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardSnapshotJobRequest&, const Model::DescribeDashboardSnapshotJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardSnapshotJobResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardSnapshotJobResultRequest&, const Model::DescribeDashboardSnapshotJobResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardSnapshotJobResultResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSetRequest&, const Model::DescribeDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSetPermissionsRequest&, const Model::DescribeDataSetPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSetPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSetRefreshPropertiesRequest&, const Model::DescribeDataSetRefreshPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSetRefreshPropertiesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSourceRequest&, const Model::DescribeDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSourcePermissionsRequest&, const Model::DescribeDataSourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeFolderRequest&, const Model::DescribeFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeFolderPermissionsRequest&, const Model::DescribeFolderPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFolderPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeFolderResolvedPermissionsRequest&, const Model::DescribeFolderResolvedPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFolderResolvedPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeGroupMembershipRequest&, const Model::DescribeGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIAMPolicyAssignmentRequest&, const Model::DescribeIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIngestionRequest&, const Model::DescribeIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIpRestrictionRequest&, const Model::DescribeIpRestrictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpRestrictionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeKeyRegistrationRequest&, const Model::DescribeKeyRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyRegistrationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeNamespaceRequest&, const Model::DescribeNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNamespaceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeQPersonalizationConfigurationRequest&, const Model::DescribeQPersonalizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQPersonalizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeRefreshScheduleRequest&, const Model::DescribeRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeRoleCustomPermissionRequest&, const Model::DescribeRoleCustomPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRoleCustomPermissionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateRequest&, const Model::DescribeTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateAliasRequest&, const Model::DescribeTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateDefinitionRequest&, const Model::DescribeTemplateDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateDefinitionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplatePermissionsRequest&, const Model::DescribeTemplatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplatePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeThemeRequest&, const Model::DescribeThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeThemeAliasRequest&, const Model::DescribeThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeThemePermissionsRequest&, const Model::DescribeThemePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThemePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTopicRequest&, const Model::DescribeTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTopicPermissionsRequest&, const Model::DescribeTopicPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTopicRefreshRequest&, const Model::DescribeTopicRefreshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicRefreshResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTopicRefreshScheduleRequest&, const Model::DescribeTopicRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeVPCConnectionRequest&, const Model::DescribeVPCConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVPCConnectionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GenerateEmbedUrlForAnonymousUserRequest&, const Model::GenerateEmbedUrlForAnonymousUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateEmbedUrlForAnonymousUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GenerateEmbedUrlForRegisteredUserRequest&, const Model::GenerateEmbedUrlForRegisteredUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateEmbedUrlForRegisteredUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GetDashboardEmbedUrlRequest&, const Model::GetDashboardEmbedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardEmbedUrlResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GetSessionEmbedUrlRequest&, const Model::GetSessionEmbedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionEmbedUrlResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListAnalysesRequest&, const Model::ListAnalysesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalysesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListAssetBundleExportJobsRequest&, const Model::ListAssetBundleExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetBundleExportJobsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListAssetBundleImportJobsRequest&, const Model::ListAssetBundleImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetBundleImportJobsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDashboardVersionsRequest&, const Model::ListDashboardVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDataSetsRequest&, const Model::ListDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListFolderMembersRequest&, const Model::ListFolderMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFolderMembersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListFoldersRequest&, const Model::ListFoldersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFoldersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListFoldersForResourceRequest&, const Model::ListFoldersForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFoldersForResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupMembershipsRequest&, const Model::ListGroupMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembershipsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIAMPolicyAssignmentsRequest&, const Model::ListIAMPolicyAssignmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIAMPolicyAssignmentsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIAMPolicyAssignmentsForUserRequest&, const Model::ListIAMPolicyAssignmentsForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIAMPolicyAssignmentsForUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIdentityPropagationConfigsRequest&, const Model::ListIdentityPropagationConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityPropagationConfigsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIngestionsRequest&, const Model::ListIngestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngestionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListNamespacesRequest&, const Model::ListNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamespacesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListRefreshSchedulesRequest&, const Model::ListRefreshSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRefreshSchedulesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListRoleMembershipsRequest&, const Model::ListRoleMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoleMembershipsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplateAliasesRequest&, const Model::ListTemplateAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateAliasesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplateVersionsRequest&, const Model::ListTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListThemeAliasesRequest&, const Model::ListThemeAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemeAliasesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListThemeVersionsRequest&, const Model::ListThemeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemeVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListThemesRequest&, const Model::ListThemesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTopicRefreshSchedulesRequest&, const Model::ListTopicRefreshSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicRefreshSchedulesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTopicReviewedAnswersRequest&, const Model::ListTopicReviewedAnswersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicReviewedAnswersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTopicsRequest&, const Model::ListTopicsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUserGroupsRequest&, const Model::ListUserGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListVPCConnectionsRequest&, const Model::ListVPCConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVPCConnectionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::PutDataSetRefreshPropertiesRequest&, const Model::PutDataSetRefreshPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataSetRefreshPropertiesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::RegisterUserRequest&, const Model::RegisterUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::RestoreAnalysisRequest&, const Model::RestoreAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchAnalysesRequest&, const Model::SearchAnalysesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAnalysesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchDashboardsRequest&, const Model::SearchDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDashboardsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchDataSetsRequest&, const Model::SearchDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDataSetsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchDataSourcesRequest&, const Model::SearchDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDataSourcesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchFoldersRequest&, const Model::SearchFoldersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFoldersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchGroupsRequest&, const Model::SearchGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::StartAssetBundleExportJobRequest&, const Model::StartAssetBundleExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAssetBundleExportJobResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::StartAssetBundleImportJobRequest&, const Model::StartAssetBundleImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAssetBundleImportJobResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::StartDashboardSnapshotJobRequest&, const Model::StartDashboardSnapshotJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDashboardSnapshotJobResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::StartDashboardSnapshotJobScheduleRequest&, const Model::StartDashboardSnapshotJobScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDashboardSnapshotJobScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAccountCustomizationRequest&, const Model::UpdateAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAnalysisRequest&, const Model::UpdateAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAnalysisPermissionsRequest&, const Model::UpdateAnalysisPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnalysisPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardRequest&, const Model::UpdateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardLinksRequest&, const Model::UpdateDashboardLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardLinksResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardPermissionsRequest&, const Model::UpdateDashboardPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardPublishedVersionRequest&, const Model::UpdateDashboardPublishedVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardPublishedVersionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSetRequest&, const Model::UpdateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSetPermissionsRequest&, const Model::UpdateDataSetPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSetPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSourcePermissionsRequest&, const Model::UpdateDataSourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateFolderRequest&, const Model::UpdateFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateFolderPermissionsRequest&, const Model::UpdateFolderPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFolderPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateIAMPolicyAssignmentRequest&, const Model::UpdateIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateIdentityPropagationConfigRequest&, const Model::UpdateIdentityPropagationConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentityPropagationConfigResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateIpRestrictionRequest&, const Model::UpdateIpRestrictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIpRestrictionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateKeyRegistrationRequest&, const Model::UpdateKeyRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKeyRegistrationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdatePublicSharingSettingsRequest&, const Model::UpdatePublicSharingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublicSharingSettingsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateQPersonalizationConfigurationRequest&, const Model::UpdateQPersonalizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQPersonalizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateRefreshScheduleRequest&, const Model::UpdateRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateRoleCustomPermissionRequest&, const Model::UpdateRoleCustomPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoleCustomPermissionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateSPICECapacityConfigurationRequest&, const Model::UpdateSPICECapacityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSPICECapacityConfigurationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplateRequest&, const Model::UpdateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplateAliasRequest&, const Model::UpdateTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplatePermissionsRequest&, const Model::UpdateTemplatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplatePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateThemeRequest&, const Model::UpdateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateThemeAliasRequest&, const Model::UpdateThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateThemePermissionsRequest&, const Model::UpdateThemePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTopicRequest&, const Model::UpdateTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTopicResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTopicPermissionsRequest&, const Model::UpdateTopicPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTopicPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTopicRefreshScheduleRequest&, const Model::UpdateTopicRefreshScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTopicRefreshScheduleResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateVPCConnectionRequest&, const Model::UpdateVPCConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVPCConnectionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace QuickSight
} // namespace Aws
