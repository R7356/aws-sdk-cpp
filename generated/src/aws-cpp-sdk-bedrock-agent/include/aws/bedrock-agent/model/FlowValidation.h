﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowValidationSeverity.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about validation of the flow.</p> <p>This data type is
   * used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetFlow.html#API_agent_GetFlow_ResponseSyntax">GetFlow
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetFlowVersion.html#API_agent_GetFlowVersion_ResponseSyntax">GetFlowVersion
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowValidation">AWS
   * API Reference</a></p>
   */
  class FlowValidation
  {
  public:
    AWS_BEDROCKAGENT_API FlowValidation();
    AWS_BEDROCKAGENT_API FlowValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message describing the validation error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline FlowValidation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline FlowValidation& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline FlowValidation& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the issue described in the message.</p>
     */
    inline const FlowValidationSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const FlowValidationSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(FlowValidationSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline FlowValidation& WithSeverity(const FlowValidationSeverity& value) { SetSeverity(value); return *this;}
    inline FlowValidation& WithSeverity(FlowValidationSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    FlowValidationSeverity m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
