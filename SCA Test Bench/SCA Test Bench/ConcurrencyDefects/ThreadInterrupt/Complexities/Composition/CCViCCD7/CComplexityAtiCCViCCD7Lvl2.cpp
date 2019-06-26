#include "CComplexityAtiCCViCCD7Lvl2.h"


CComplexityAtiCCViCCD7Lvl2::CComplexityAtiCCViCCD7Lvl2(IComplexityAttCCViCCD7Lvl1 & referenceToConcreteInstance)
	: m_iLvl1(referenceToConcreteInstance)
{
}

void CComplexityAtiCCViCCD7Lvl2::DataRace(const unsigned int value)
{
	m_iLvl1.DataRace(value);
}

void CComplexityAtiCCViCCD7Lvl2::Deadlock(const unsigned int value)
{
	m_iLvl1.Deadlock(value);
}

void CComplexityAtiCCViCCD7Lvl2::Livelock(const unsigned int value)
{
	m_iLvl1.Livelock(value);
}
void CComplexityAtiCCViCCD7Lvl2::BlockingSuspension(const unsigned int value)
{
	m_iLvl1.BlockingSuspension(value);
}
void CComplexityAtiCCViCCD7Lvl2::AtomicityViolation(const unsigned int value)
{
	m_iLvl1.AtomicityViolation(value);
}
void CComplexityAtiCCViCCD7Lvl2::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl1.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCViCCD7Lvl2::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl1.OrderViolationAssumedSecondExecution(value);
}