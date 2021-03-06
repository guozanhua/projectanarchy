/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKB_PARAMETRIC_MOTION_GENERATOR_VIEWER_H
#define HKB_PARAMETRIC_MOTION_GENERATOR_VIEWER_H

#include <Behavior/Utilities/VisualDebugger/Viewer/hkbWorldViewerBase.h>

	/// Displays the state of all parametric blenders
class hkbParametricMotionGeneratorViewer: public hkbWorldViewerBase
{	
	public:

		HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_TOOLS);

			/// Creates a hkbParametricMotionGeneratorViewer.
		static hkProcess* HK_CALL create(const hkArray<hkProcessContext*>& contexts);

			/// Registers the hkbParametricMotionGeneratorViewer with the hkProcessFactory.
		static void HK_CALL registerViewer();

			/// Gets the tag associated with this viewer type
		virtual int getProcessTag() HK_OVERRIDE { return m_tag; }
			
			/// The name of the viewer shown in the VDB
		static inline const char* HK_CALL getName() { return "Parametric Motion Generators"; }
		
			/// Initializes the viewer
		hkbParametricMotionGeneratorViewer( const hkArray<hkProcessContext*>& contexts );			
			/// Destructs the viewer
		virtual ~hkbParametricMotionGeneratorViewer();	
									
			/// Draws the world from model of the character
		virtual void postGenerateCallback( hkbCharacter* character, hkReal deltaTime) HK_OVERRIDE;					

	protected:
		
			/// Transforms a vertex in the parameter space to world space
		hkVector4 transformVertexToWorld( const hkVector4& right, const hkVector4& forward, const hkQsTransform& worldFromModel, const hkVector4& vertex ) const;

			/// Unique ID for the viewer
		static int m_tag;
};

#endif

/*
 * Havok SDK - Base file, BUILD(#20140327)
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
