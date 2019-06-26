#include "CComplexityAtiCCViCCD3Lvl3.h"


CComplexityAtiCCViCCD3Lvl3::CComplexityAtiCCViCCD3Lvl3(IComplexityAttCCViCCD3Lvl2 & referenceToConcreteInstance)
	: m_iLvl2(referenceToConcreteInstance)
{
}

void CComplexityAtiCCViCCD3Lvl3::DataRace(const unsigned int value)
{
	m_iLvl2.DataRace(value);
}

void CComplexityAtiCCViCCD3Lvl3::Deadlock(const unsigned int value)
{
	m_iLvl2.Deadlock(value);
}

void CComplexityAtiCCViCCD3Lvl3::Livelock(const unsigned int value)
{
	m_iLvl2.Livelock(value);
}
void CComplexityAtiCCViCCD3Lvl3::BlockingSuspension(const unsigned int value)
{
	m_iLvl2.BlockingSuspension(value);
}
void CComplexityAtiCCViCCD3Lvl3::AtomicityViolation(const unsigned int value)
{
	m_iLvl2.AtomicityViolation(value);
}
void CComplexityAtiCCViCCD3Lvl3::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl2.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCViCCD3Lvl3::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl2.OrderViolationAssumedSecondExecution(value);
}