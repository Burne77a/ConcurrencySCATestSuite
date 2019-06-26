#include "CComplexityAtiCCViCCD7Lvl4.h"


CComplexityAtiCCViCCD7Lvl4::CComplexityAtiCCViCCD7Lvl4(IComplexityAttCCViCCD7Lvl3 & referenceToConcreteInstance)
	: m_iLvl3(referenceToConcreteInstance)
{
}

void CComplexityAtiCCViCCD7Lvl4::DataRace(const unsigned int value)
{
	m_iLvl3.DataRace(value);
}

void CComplexityAtiCCViCCD7Lvl4::Deadlock(const unsigned int value)
{
	m_iLvl3.Deadlock(value);
}

void CComplexityAtiCCViCCD7Lvl4::Livelock(const unsigned int value)
{
	m_iLvl3.Livelock(value);
}
void CComplexityAtiCCViCCD7Lvl4::BlockingSuspension(const unsigned int value)
{
	m_iLvl3.BlockingSuspension(value);
}
void CComplexityAtiCCViCCD7Lvl4::AtomicityViolation(const unsigned int value)
{
	m_iLvl3.AtomicityViolation(value);
}
void CComplexityAtiCCViCCD7Lvl4::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl3.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCViCCD7Lvl4::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl3.OrderViolationAssumedSecondExecution(value);
}