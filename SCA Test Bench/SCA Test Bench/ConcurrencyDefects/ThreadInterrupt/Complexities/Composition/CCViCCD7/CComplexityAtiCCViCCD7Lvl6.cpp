#include "CComplexityAtiCCViCCD7Lvl6.h"


CComplexityAtiCCViCCD7Lvl6::CComplexityAtiCCViCCD7Lvl6(IComplexityAttCCViCCD7Lvl5 & referenceToConcreteInstance)
	: m_iLvl5(referenceToConcreteInstance)
{
}

void CComplexityAtiCCViCCD7Lvl6::DataRace(const unsigned int value)
{
	m_iLvl5.DataRace(value);
}

void CComplexityAtiCCViCCD7Lvl6::Deadlock(const unsigned int value)
{
	m_iLvl5.Deadlock(value);
}

void CComplexityAtiCCViCCD7Lvl6::Livelock(const unsigned int value)
{
	m_iLvl5.Livelock(value);
}
void CComplexityAtiCCViCCD7Lvl6::BlockingSuspension(const unsigned int value)
{
	m_iLvl5.BlockingSuspension(value);
}
void CComplexityAtiCCViCCD7Lvl6::AtomicityViolation(const unsigned int value)
{
	m_iLvl5.AtomicityViolation(value);
}
void CComplexityAtiCCViCCD7Lvl6::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl5.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCViCCD7Lvl6::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl5.OrderViolationAssumedSecondExecution(value);
}