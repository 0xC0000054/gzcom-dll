#pragma once
#include "cIGZUnknown.h"
#include "cISC4BuildingOccupant.h"
#include "cISC4ZoneManager.h"

class cGZPersistResourceKey;
class cIGZPersistDBSegment;
class cIGZString;
class cSC4LotConfigurationObject;
template <typename T> class SC4Vector;

class cISC4LotConfiguration : public cIGZUnknown
{
	public:
		virtual uint32_t GetID(void) const = 0;
		virtual bool GetName(cIGZString& szName) const = 0;

		virtual bool BelongsToFamily(uint32_t dwFamilyId) const = 0;
		virtual SC4Vector<uint32_t>* GetFamilyIDArray(void) = 0;

		virtual bool GetSize(uint32_t& nSizeX, uint32_t& nSizeZ) const = 0;
		virtual float GetMaximumSlope(void) const = 0;
		virtual float GetMinimumSlope(void) const = 0;
		virtual float GetMaximumSlopeBeforeFoundation(void) const = 0;

		virtual uint8_t GetGrowthStage(void) const = 0;
		virtual uint16_t GetMinBuildingCapacity(void) const = 0;
		virtual uint16_t GetMaxBuildingCapacity(void) const = 0;

		virtual bool IsCompatibleWithWater(void) const = 0;
		virtual bool IsCompatibleWithZoneType(cISC4ZoneManager::ZoneType eType) const = 0;
		virtual bool IsCompatibleWithWealthType(cISC4BuildingOccupant::WealthType eType) const = 0;
		virtual bool IsCompatibleWithPurposeType(cISC4BuildingOccupant::PurposeType eType) const = 0;
		virtual bool IsCompatibleWithStyleType(uint32_t dwType) const = 0;
		virtual bool IsCompatibleWithMonopolyPieceUse(void) const = 0;
		virtual bool IsDoConstruction(void) const = 0;

		virtual bool GetRequiredRoads(SC4Vector<bool>& sRequiredVector) const = 0;

		virtual uint32_t GetLotConfigurationObjectCount(void) = 0;
		virtual SC4Vector<cSC4LotConfigurationObject>* GetLotConfigurationObjectArray(void) = 0;

		virtual cSC4LotConfigurationObject* GetPrimaryBuildingConfigurationObject(void) = 0;
		virtual cSC4LotConfigurationObject* GetPrimaryBaseConfigurationObject(void) = 0;
		virtual cSC4LotConfigurationObject* GetPrimaryFoundationConfigurationObject(void) = 0;

		virtual bool HasObjectsOfType(uint32_t dwTypeId) = 0;

		virtual SC4Vector<uint32_t>* GetRetainingWallIDArray(void) = 0;
		virtual SC4Vector<uint32_t>* GetFenceIDArray(void) = 0;
		virtual SC4Vector<int8_t>* GetFenceSegmentPositionArray(void) = 0;

		virtual bool Load(cGZPersistResourceKey const& sKey, uint8_t ucPropArraySize) = 0;
		virtual bool Save(cGZPersistResourceKey const& sKey, cIGZPersistDBSegment* pSegment) = 0;
};