#pragma once
#include "CComplexityAiiCCViCCD7Lvl5.h"


class IComplexityAttCCViCCD7Lvl6
{
public:
	virtual void DataRace(const unsigned int value) = 0;
	virtual void Deadlock(const unsigned int value) = 0;
	virtual void Livelock(const unsigned int value) = 0;
	virtual void BlockingSuspension(const unsigned int value) = 0;
	virtual void AtomicityViolation(const unsigned int value) = 0;
	virtual void OrderViolationAssumedFirstExecution(const unsigned int value) = 0;
	virtual void OrderViolationAssumedSecondExecution(const unsigned int value) = 0;
};

class CComplexityAiiCCViCCD7Lvl6 : public IComplexityAttCCViCCD7Lvl6
{
public:
	CComplexityAiiCCViCCD7Lvl6(IComplexityAttCCViCCD7Lvl5 & referenceToConcreteInstance);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
private:
	IComplexityAttCCViCCD7Lvl5 & m_iLvl5;
};