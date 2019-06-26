#pragma once
#include "CComplexityAttCCViCCD7Lvl0.h"

class IComplexityAttCCViCCD7Lvl1
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

class CComplexityAttCCViCCD7Lvl1 : public IComplexityAttCCViCCD7Lvl1
{
public:
	CComplexityAttCCViCCD7Lvl1(IComplexityAttCCViCCD7Lvl0 & referenceToConcreteInstance);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
private:
	IComplexityAttCCViCCD7Lvl0 & m_iLvl0;
};