/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKV_EXTERNAL_TOOL_PVRTEXTOOL_HPP_INLCUDED
#define HKV_EXTERNAL_TOOL_PVRTEXTOOL_HPP_INLCUDED

#include <Vision/Editor/vForge/AssetManagement/AssetFramework/Transformation/hkvExternalToolTransformation.hpp>

class hkvTextureTransformationSettings;

class hkvExternalToolPvrTexTool : public hkvExternalToolTransformation
{
public:
  HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_TOOLS);

public:
  hkvExternalToolPvrTexTool(const hkvTextureTransformationSettings& settings, 
    const char* sourceFile, const char* targetFile);
private:
  hkvExternalToolPvrTexTool();
  hkvExternalToolPvrTexTool(const hkvExternalToolPvrTexTool&);
  hkvExternalToolPvrTexTool& operator=(const hkvExternalToolPvrTexTool&);

protected:
  virtual const char* getToolName() const HKV_OVERRIDE;

private:
  void determineExecutablePath();
  void determineCommandLineParameters(const hkvTextureTransformationSettings& settings, 
    const char* sourceFile, const char* targetFile);

};

#endif

/*
 * Havok SDK - Base file, BUILD(#20140328)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2014
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */
