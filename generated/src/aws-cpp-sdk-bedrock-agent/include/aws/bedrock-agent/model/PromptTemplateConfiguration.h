﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/TextPromptTemplateConfiguration.h>
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
   * <p>Contains the message for a prompt. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management.html">Prompt
   * management in Amazon Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptTemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptTemplateConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptTemplateConfiguration();
    AWS_BEDROCKAGENT_API PromptTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for the text in a message for a prompt.</p>
     */
    inline const TextPromptTemplateConfiguration& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const TextPromptTemplateConfiguration& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(TextPromptTemplateConfiguration&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline PromptTemplateConfiguration& WithText(const TextPromptTemplateConfiguration& value) { SetText(value); return *this;}
    inline PromptTemplateConfiguration& WithText(TextPromptTemplateConfiguration&& value) { SetText(std::move(value)); return *this;}
    ///@}
  private:

    TextPromptTemplateConfiguration m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
