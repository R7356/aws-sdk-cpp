﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about the content in an output from prompt flow
   * invocation.</p> <p>This data type is used in the following API operations:</p>
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeFlow.html#API_agent_InvokeFlow_RequestSyntax">InvokeFlow
   * request</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowOutputContent">AWS
   * API Reference</a></p>
   */
  class FlowOutputContent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowOutputContent();
    AWS_BEDROCKAGENTRUNTIME_API FlowOutputContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowOutputContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content in the output.</p>
     */
    inline Aws::Utils::DocumentView GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Aws::Utils::Document& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Aws::Utils::Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline FlowOutputContent& WithDocument(const Aws::Utils::Document& value) { SetDocument(value); return *this;}
    inline FlowOutputContent& WithDocument(Aws::Utils::Document&& value) { SetDocument(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
