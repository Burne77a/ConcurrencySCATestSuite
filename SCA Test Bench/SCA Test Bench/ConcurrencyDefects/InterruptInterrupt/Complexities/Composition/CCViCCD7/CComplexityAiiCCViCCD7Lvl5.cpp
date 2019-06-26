#include "CComplexityAiiCCViCCD7Lvl5.h"


CComplexityAiiCCViCCD7Lvl5::CComplexityAiiCCViCCD7Lvl5(IComplexityAttCCViCCD7Lvl4 & referenceToConcreteInstance)
	: m_iLvl4(referenceToConcreteInstance)
{
}

void CComplexityAiiCCViCCD7Lvl5::DataRace(const unsigned int value)
{
	m_iLvl4.DataRace(value);
}

void CComplexityAiiCCViCCD7Lvl5::Deadlock(const unsigned int value)
{
	m_iLvl4.Deadlock(value);
}

void CComplexityAiiCCViCCD7Lvl5::Livelock(const unsigned int value)
{
	m_iLvl4.Livelock(value);
}
void CComplexityAiiCCViCCD7Lvl5::BlockingSuspension(const unsigned int value)
{
	m_iLvl4.BlockingSuspension(value);
}
void CComplexityAiiCCViCCD7Lvl5::AtomicityViolation(const unsigned int value)
{
	m_iLvl4.AtomicityViolation(value);
}
void CComplexityAiiCCViCCD7Lvl5::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl4.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiCCViCCD7Lvl5::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl4.OrderViolationAssumedSecondExecution(value);
}