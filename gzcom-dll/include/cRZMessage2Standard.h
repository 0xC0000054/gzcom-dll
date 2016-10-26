#pragma once
#include "cIGZMessage2Standard.h"
#include "cIGZSerializable.h"
#include "cRZAutoRefCount.h"
#include "cRZBaseString.h"

class cRZMessage2Standard : public cIGZMessage2Standard
{
	public:
		cRZMessage2Standard();

		bool GetHasData1(void) const;
		int32_t GetData1(void) const;
		void* GetVoid1(void) const;

		cIGZMessage2Standard* SetData1(int32_t ulData);
		cIGZMessage2Standard* SetVoid1(void* pData);

		bool GetHasData2(void) const;
		int32_t GetData2(void) const;
		void* GetVoid2(void) const;

		cIGZMessage2Standard* SetData2(int32_t ulData);
		cIGZMessage2Standard* SetVoid2(void* pData);

		bool GetHasData3(void) const;
		int32_t GetData3(void) const;
		void* GetVoid3(void) const;

		cIGZMessage2Standard* SetData3(int32_t ulData);
		cIGZMessage2Standard* SetVoid3(void* pData);

		bool GetHasData4(void) const;
		int32_t GetData4(void) const;
		void* GetVoid4(void) const;

		cIGZMessage2Standard* SetData4(int32_t ulData);
		cIGZMessage2Standard* SetVoid4(void* pData);

		bool GetHasString(void) const;
		bool GetString(uint32_t dwMaxLen, void** ppStringOut) const;
		cIGZMessage2Standard* SetString(cIGZString* pString);

		bool GetHasIGZUnknown(void) const;
		cIGZUnknown* GetIGZUnknown(void) const;
		cIGZMessage2Standard* SetIGZUnknown(cIGZUnknown* pObj);

		bool GetHasExtra(void) const;
		uint32_t GetExtra(uint32_t dwLen, void** ppOut) const;
		bool SetExtra(cIGZSerializable* pSerializable);

	protected:
		inline bool IsDataFieldSet(uint8_t uFlag) const {
			return (m_uDataFlags & uFlag) == 1;
		}

		uint8_t m_uDataFlags;
		int32_t m_dwData[4];
		cRZBaseString m_szDataString;
		cRZAutoRefCount<cIGZUnknown> m_pUnknown;
};