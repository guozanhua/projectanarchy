/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#ifndef RPG_PLUGIN_MANA_PICKUP_H__
#define RPG_PLUGIN_MANA_PICKUP_H__

#include <Vision/Samples/Engine/RPGPlugin/Pickup.h>

class RPG_Character;

class RPG_ManaPickup : public RPG_Pickup
{
public:
  RPG_PLUGIN_IMPEXP RPG_ManaPickup();

  virtual void OnPickup(RPG_Character* character);

protected:
  int m_manaAmount;

private:
  V_DECLARE_SERIAL_DLLEXP(RPG_ManaPickup, RPG_PLUGIN_IMPEXP);
  V_DECLARE_VARTABLE(RPG_ManaPickup, RPG_PLUGIN_IMPEXP);
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
