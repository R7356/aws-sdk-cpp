﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-runtime/BedrockRuntimeServiceClientModel.h>

namespace Aws
{
namespace BedrockRuntime
{
  /**
   * <p>Describes the API operations for running inference using Amazon Bedrock
   * models.</p>
   */
  class AWS_BEDROCKRUNTIME_API BedrockRuntimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BedrockRuntimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BedrockRuntimeClientConfiguration ClientConfigurationType;
      typedef BedrockRuntimeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration = Aws::BedrockRuntime::BedrockRuntimeClientConfiguration(),
                             std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration = Aws::BedrockRuntime::BedrockRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration = Aws::BedrockRuntime::BedrockRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BedrockRuntimeClient();

        /**
         * <p>The action to apply a guardrail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ApplyGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyGuardrailOutcome ApplyGuardrail(const Model::ApplyGuardrailRequest& request) const;

        /**
         * A Callable wrapper for ApplyGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplyGuardrailRequestT = Model::ApplyGuardrailRequest>
        Model::ApplyGuardrailOutcomeCallable ApplyGuardrailCallable(const ApplyGuardrailRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::ApplyGuardrail, request);
        }

        /**
         * An Async wrapper for ApplyGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyGuardrailRequestT = Model::ApplyGuardrailRequest>
        void ApplyGuardrailAsync(const ApplyGuardrailRequestT& request, const ApplyGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::ApplyGuardrail, request, handler, context);
        }

        /**
         * <p>Sends messages to the specified Amazon Bedrock model. <code>Converse</code>
         * provides a consistent interface that works with all models that support
         * messages. This allows you to write code once and use it with different models.
         * If a model has unique inference parameters, you can also pass those unique
         * parameters to the model.</p> <p>Amazon Bedrock doesn't store any text, images,
         * or documents that you provide as content. The data is only used to generate the
         * response.</p> <p>For information about the Converse API, see <i>Use the Converse
         * API</i> in the <i>Amazon Bedrock User Guide</i>. To use a guardrail, see <i>Use
         * a guardrail with the Converse API</i> in the <i>Amazon Bedrock User Guide</i>.
         * To use a tool with a model, see <i>Tool use (Function calling)</i> in the
         * <i>Amazon Bedrock User Guide</i> </p> <p>For example code, see <i>Converse API
         * examples</i> in the <i>Amazon Bedrock User Guide</i>. </p> <p>This operation
         * requires permission for the <code>bedrock:InvokeModel</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/Converse">AWS
         * API Reference</a></p>
         */
        virtual Model::ConverseOutcome Converse(const Model::ConverseRequest& request) const;

        /**
         * A Callable wrapper for Converse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConverseRequestT = Model::ConverseRequest>
        Model::ConverseOutcomeCallable ConverseCallable(const ConverseRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::Converse, request);
        }

        /**
         * An Async wrapper for Converse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConverseRequestT = Model::ConverseRequest>
        void ConverseAsync(const ConverseRequestT& request, const ConverseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::Converse, request, handler, context);
        }

        /**
         * <p>Sends messages to the specified Amazon Bedrock model and returns the response
         * in a stream. <code>ConverseStream</code> provides a consistent API that works
         * with all Amazon Bedrock models that support messages. This allows you to write
         * code once and use it with different models. Should a model have unique inference
         * parameters, you can also pass those unique parameters to the model. </p> <p>To
         * find out if a model supports streaming, call <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetFoundationModel.html">GetFoundationModel</a>
         * and check the <code>responseStreamingSupported</code> field in the response.</p>
         *  <p>The CLI doesn't support streaming operations in Amazon Bedrock,
         * including <code>ConverseStream</code>.</p>  <p>Amazon Bedrock doesn't
         * store any text, images, or documents that you provide as content. The data is
         * only used to generate the response.</p> <p>For information about the Converse
         * API, see <i>Use the Converse API</i> in the <i>Amazon Bedrock User Guide</i>. To
         * use a guardrail, see <i>Use a guardrail with the Converse API</i> in the
         * <i>Amazon Bedrock User Guide</i>. To use a tool with a model, see <i>Tool use
         * (Function calling)</i> in the <i>Amazon Bedrock User Guide</i> </p> <p>For
         * example code, see <i>Conversation streaming example</i> in the <i>Amazon Bedrock
         * User Guide</i>. </p> <p>This operation requires permission for the
         * <code>bedrock:InvokeModelWithResponseStream</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ConverseStreamOutcome ConverseStream(Model::ConverseStreamRequest& request) const;

        /**
         * A Callable wrapper for ConverseStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConverseStreamRequestT = Model::ConverseStreamRequest>
        Model::ConverseStreamOutcomeCallable ConverseStreamCallable(ConverseStreamRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::ConverseStream, request);
        }

        /**
         * An Async wrapper for ConverseStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConverseStreamRequestT = Model::ConverseStreamRequest>
        void ConverseStreamAsync(ConverseStreamRequestT& request, const ConverseStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::ConverseStream, request, handler, context);
        }

        /**
         * <p>Invokes the specified Amazon Bedrock model to run inference using the prompt
         * and inference parameters provided in the request body. You use model inference
         * to generate text, images, and embeddings.</p> <p>For example code, see <i>Invoke
         * model code examples</i> in the <i>Amazon Bedrock User Guide</i>. </p> <p>This
         * operation requires permission for the <code>bedrock:InvokeModel</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeModelOutcome InvokeModel(const Model::InvokeModelRequest& request) const;

        /**
         * A Callable wrapper for InvokeModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeModelRequestT = Model::InvokeModelRequest>
        Model::InvokeModelOutcomeCallable InvokeModelCallable(const InvokeModelRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::InvokeModel, request);
        }

        /**
         * An Async wrapper for InvokeModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeModelRequestT = Model::InvokeModelRequest>
        void InvokeModelAsync(const InvokeModelRequestT& request, const InvokeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::InvokeModel, request, handler, context);
        }

        /**
         * <p>Invoke the specified Amazon Bedrock model to run inference using the prompt
         * and inference parameters provided in the request body. The response is returned
         * in a stream.</p> <p>To see if a model supports streaming, call <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetFoundationModel.html">GetFoundationModel</a>
         * and check the <code>responseStreamingSupported</code> field in the response.</p>
         *  <p>The CLI doesn't support streaming operations in Amazon Bedrock,
         * including <code>InvokeModelWithResponseStream</code>.</p>  <p>For example
         * code, see <i>Invoke model with streaming code example</i> in the <i>Amazon
         * Bedrock User Guide</i>. </p> <p>This operation requires permissions to perform
         * the <code>bedrock:InvokeModelWithResponseStream</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModelWithResponseStream">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeModelWithResponseStreamOutcome InvokeModelWithResponseStream(Model::InvokeModelWithResponseStreamRequest& request) const;

        /**
         * A Callable wrapper for InvokeModelWithResponseStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeModelWithResponseStreamRequestT = Model::InvokeModelWithResponseStreamRequest>
        Model::InvokeModelWithResponseStreamOutcomeCallable InvokeModelWithResponseStreamCallable(InvokeModelWithResponseStreamRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::InvokeModelWithResponseStream, request);
        }

        /**
         * An Async wrapper for InvokeModelWithResponseStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeModelWithResponseStreamRequestT = Model::InvokeModelWithResponseStreamRequest>
        void InvokeModelWithResponseStreamAsync(InvokeModelWithResponseStreamRequestT& request, const InvokeModelWithResponseStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::InvokeModelWithResponseStream, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockRuntimeClient>;
      void init(const BedrockRuntimeClientConfiguration& clientConfiguration);

      BedrockRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<BedrockRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockRuntime
} // namespace Aws
