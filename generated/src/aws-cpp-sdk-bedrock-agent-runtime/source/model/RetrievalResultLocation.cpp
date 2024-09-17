﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

RetrievalResultLocation::RetrievalResultLocation() : 
    m_confluenceLocationHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_salesforceLocationHasBeenSet(false),
    m_sharePointLocationHasBeenSet(false),
    m_type(RetrievalResultLocationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_webLocationHasBeenSet(false)
{
}

RetrievalResultLocation::RetrievalResultLocation(JsonView jsonValue)
  : RetrievalResultLocation()
{
  *this = jsonValue;
}

RetrievalResultLocation& RetrievalResultLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("confluenceLocation"))
  {
    m_confluenceLocation = jsonValue.GetObject("confluenceLocation");

    m_confluenceLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("salesforceLocation"))
  {
    m_salesforceLocation = jsonValue.GetObject("salesforceLocation");

    m_salesforceLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharePointLocation"))
  {
    m_sharePointLocation = jsonValue.GetObject("sharePointLocation");

    m_sharePointLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RetrievalResultLocationTypeMapper::GetRetrievalResultLocationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webLocation"))
  {
    m_webLocation = jsonValue.GetObject("webLocation");

    m_webLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue RetrievalResultLocation::Jsonize() const
{
  JsonValue payload;

  if(m_confluenceLocationHasBeenSet)
  {
   payload.WithObject("confluenceLocation", m_confluenceLocation.Jsonize());

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_salesforceLocationHasBeenSet)
  {
   payload.WithObject("salesforceLocation", m_salesforceLocation.Jsonize());

  }

  if(m_sharePointLocationHasBeenSet)
  {
   payload.WithObject("sharePointLocation", m_sharePointLocation.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RetrievalResultLocationTypeMapper::GetNameForRetrievalResultLocationType(m_type));
  }

  if(m_webLocationHasBeenSet)
  {
   payload.WithObject("webLocation", m_webLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
