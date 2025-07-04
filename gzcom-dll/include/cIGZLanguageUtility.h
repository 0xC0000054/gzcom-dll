#pragma once
#include "cIGZUnknown.h"

class cIGZString;

class cIGZLanguageUtility : public cIGZUnknown
{
public:
	virtual bool Init() = 0;
	virtual bool Shutdown() = 0;

	virtual bool GetDayName(uint8_t dayOfWeek, cIGZString& outString) = 0;
	virtual bool GetAbbrDayName(uint8_t dayOfWeek, cIGZString& outString) = 0;
	virtual bool GetMonthName(uint8_t month, cIGZString& outString) = 0;
	virtual bool GetAbbrMonthName(uint8_t month, cIGZString& outString) = 0;

	virtual bool MakeTimeString(int32_t hour, int32_t minute, int32_t second, cIGZString& outString) = 0;
	virtual bool MakeDateString(int32_t month, int32_t day, uint32_t year, cIGZString& outString, uint32_t dateFormat) = 0;

	virtual bool GetCurrencySymbol(cIGZString& outString) = 0;
	virtual bool DoesCurrencySymbolPrecedeAmount() = 0;
	virtual bool IsSpaceBetweenCurrencySymbolAndAmount() = 0;
	virtual bool GetThousandSeparator(cIGZString& outString) = 0;
	virtual bool GetDecimalSeparator(cIGZString& outString) = 0;

	virtual bool MakeMoneyString(int64_t value, cIGZString& outString, cIGZString const* currencySymbol) = 0;
	virtual bool MakeFormattedMoneyString(double value, cIGZString& outString, cIGZString const& format, cIGZString const* currencySymbol) = 0;
	virtual bool MakeNumberString(int64_t value, cIGZString& outString) = 0;
	virtual bool MakeFormattedNumberString(double value, cIGZString& outString, cIGZString const& format) = 0;

	virtual bool ConvertToLowerCase(cIGZString const& source, cIGZString& dest) = 0;
	virtual bool ConvertToUpperCase(cIGZString const& source, cIGZString& dest) = 0;
	virtual int32_t CompareStrings(cIGZString const& s1, cIGZString const& s2, bool caseSensitive) = 0;

	virtual int32_t GetCharacterSetFromLanguage() = 0;
	virtual bool DoesLanguageUseCharacterSet(int32_t charSet) = 0;

	// Returns 0 for left hand side driving, or 1 for right hand side driving.
	virtual int32_t GetLanguageRoadDrivingSide() = 0;
	virtual uint32_t GetMeasurementSystem() = 0;

	virtual bool AreFirstAndLastNamesReversed() = 0;
	virtual bool DoesLanguageUseInputMethodEditing() = 0;
	virtual bool DoesLanguageUseMultiByteCharacters() = 0;
};
