#pragma once
#include "CComplexityAttCCViCCD3Lvl2.h"
class CComplexityAttCCViCCD3Lvl3
{
public:
	CComplexityAttCCViCCD3Lvl3(IComplexityAttCCViCCD3Lvl2 & referenceToConcreteInstance);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
private:
	IComplexityAttCCViCCD3Lvl2 & m_iLvl2;
};