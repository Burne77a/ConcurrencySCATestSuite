#include "CComplexityAiiCCViCCD7Lvl3.h"


CComplexityAiiCCViCCD7Lvl3::CComplexityAiiCCViCCD7Lvl3(IComplexityAttCCViCCD7Lvl2 & referenceToConcreteInstance)
	: m_iLvl2(referenceToConcreteInstance)
{
}

void CComplexityAiiCCViCCD7Lvl3::DataRace(const unsigned int value)
{
	m_iLvl2.DataRace(value);
}

void CComplexityAiiCCViCCD7Lvl3::Deadlock(const unsigned int value)
{
	m_iLvl2.Deadlock(value);
}

void CComplexityAiiCCViCCD7Lvl3::Livelock(const unsigned int value)
{
	m_iLvl2.Livelock(value);
}
void CComplexityAiiCCViCCD7Lvl3::BlockingSuspension(const unsigned int value)
{
	m_iLvl2.BlockingSuspension(value);
}
void CComplexityAiiCCViCCD7Lvl3::AtomicityViolation(const unsigned int value)
{
	m_iLvl2.AtomicityViolation(value);
}
void CComplexityAiiCCViCCD7Lvl3::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl2.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiCCViCCD7Lvl3::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl2.OrderViolationAssumedSecondExecution(value);
}