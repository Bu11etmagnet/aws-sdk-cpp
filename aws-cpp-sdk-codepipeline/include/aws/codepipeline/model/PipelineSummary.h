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
#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Returns a summary of a pipeline.</p>
   */
  class AWS_CODEPIPELINE_API PipelineSummary
  {
  public:
    PipelineSummary();
    PipelineSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    PipelineSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline long GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline void SetVersion(long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline PipelineSummary& WithVersion(long value) { SetVersion(value); return *this;}

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline double GetCreated() const{ return m_created; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline void SetCreated(double value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline PipelineSummary& WithCreated(double value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline double GetUpdated() const{ return m_updated; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline void SetUpdated(double value) { m_updatedHasBeenSet = true; m_updated = value; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline PipelineSummary& WithUpdated(double value) { SetUpdated(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    long m_version;
    bool m_versionHasBeenSet;
    double m_created;
    bool m_createdHasBeenSet;
    double m_updated;
    bool m_updatedHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
