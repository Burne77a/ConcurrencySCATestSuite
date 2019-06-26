#pragma once
#include "CComplexityAtiCCViCCD7Lvl2.h"


class IComplexityAttCCViCCD7Lvl3
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

class CComplexityAtiCCViCCD7Lvl3 : public IComplexityAttCCViCCD7Lvl3
{
public:
	CComplexityAtiCCViCCD7Lvl3(IComplexityAttCCViCCD7Lvl2 & referenceToConcreteInstance);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
private:
	IComplexityAttCCViCCD7Lvl2 & m_iLvl2;
};