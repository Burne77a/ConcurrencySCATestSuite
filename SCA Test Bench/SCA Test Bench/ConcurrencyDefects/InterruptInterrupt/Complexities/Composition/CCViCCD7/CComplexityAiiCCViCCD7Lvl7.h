#pragma once
#include "CComplexityAiiCCViCCD7Lvl6.h"



class CComplexityAiiCCViCCD7Lvl7
{
public:
	CComplexityAiiCCViCCD7Lvl7(IComplexityAttCCViCCD7Lvl6 & referenceToConcreteInstance);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
private:
	IComplexityAttCCViCCD7Lvl6 & m_iLvl6;
};