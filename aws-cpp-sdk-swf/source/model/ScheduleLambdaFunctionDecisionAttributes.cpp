/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/swf/model/ScheduleLambdaFunctionDecisionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ScheduleLambdaFunctionDecisionAttributes::ScheduleLambdaFunctionDecisionAttributes() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_startToCloseTimeoutHasBeenSet(false)
{
}

ScheduleLambdaFunctionDecisionAttributes::ScheduleLambdaFunctionDecisionAttributes(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_startToCloseTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleLambdaFunctionDecisionAttributes& ScheduleLambdaFunctionDecisionAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startToCloseTimeout"))
  {
    m_startToCloseTimeout = jsonValue.GetString("startToCloseTimeout");

    m_startToCloseTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleLambdaFunctionDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_startToCloseTimeoutHasBeenSet)
  {
   payload.WithString("startToCloseTimeout", m_startToCloseTimeout);

  }

  return payload;
}