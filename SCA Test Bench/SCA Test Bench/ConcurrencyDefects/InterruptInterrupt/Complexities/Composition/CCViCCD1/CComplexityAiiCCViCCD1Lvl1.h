#pragma once
#include "CComplexityAiiCCViCCD1Lvl0.h"
class CComplexityAiiCCViCCD1Lvl1
{
public:
	CComplexityAiiCCViCCD1Lvl1(IComplexityAttCCViCCD1Lvl0 & referenceToConcreteInstance);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
private:
	IComplexityAttCCViCCD1Lvl0 & m_iLvl0;
};