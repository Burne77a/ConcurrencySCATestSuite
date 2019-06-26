#include "CComplexityAtiCCViCCD7Lvl1.h"


CComplexityAtiCCViCCD7Lvl1::CComplexityAtiCCViCCD7Lvl1(IComplexityAttCCViCCD7Lvl0 & referenceToConcreteInstance)
	: m_iLvl0(referenceToConcreteInstance)
{
}

void CComplexityAtiCCViCCD7Lvl1::DataRace(const unsigned int value)
{
	m_iLvl0.DataRace(value);
}

void CComplexityAtiCCViCCD7Lvl1::Deadlock(const unsigned int value)
{
	m_iLvl0.Deadlock(value);
}

void CComplexityAtiCCViCCD7Lvl1::Livelock(const unsigned int value)
{
	m_iLvl0.Livelock(value);
}
void CComplexityAtiCCViCCD7Lvl1::BlockingSuspension(const unsigned int value)
{
	m_iLvl0.BlockingSuspension(value);
}
void CComplexityAtiCCViCCD7Lvl1::AtomicityViolation(const unsigned int value)
{
	m_iLvl0.AtomicityViolation(value);
}
void CComplexityAtiCCViCCD7Lvl1::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCViCCD7Lvl1::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedSecondExecution(value);
}