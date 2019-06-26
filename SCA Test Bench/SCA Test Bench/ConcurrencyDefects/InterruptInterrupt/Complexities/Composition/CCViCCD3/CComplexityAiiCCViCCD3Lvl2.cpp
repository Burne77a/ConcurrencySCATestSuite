#include "CComplexityAiiCCViCCD3Lvl2.h"


CComplexityAiiCCViCCD3Lvl2::CComplexityAiiCCViCCD3Lvl2(IComplexityAttCCViCCD3Lvl1 & referenceToConcreteInstance)
	: m_iLvl1(referenceToConcreteInstance)
{
}

void CComplexityAiiCCViCCD3Lvl2::DataRace(const unsigned int value)
{
	m_iLvl1.DataRace(value);
}

void CComplexityAiiCCViCCD3Lvl2::Deadlock(const unsigned int value)
{
	m_iLvl1.Deadlock(value);
}

void CComplexityAiiCCViCCD3Lvl2::Livelock(const unsigned int value)
{
	m_iLvl1.Livelock(value);
}
void CComplexityAiiCCViCCD3Lvl2::BlockingSuspension(const unsigned int value)
{
	m_iLvl1.BlockingSuspension(value);
}
void CComplexityAiiCCViCCD3Lvl2::AtomicityViolation(const unsigned int value)
{
	m_iLvl1.AtomicityViolation(value);
}
void CComplexityAiiCCViCCD3Lvl2::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl1.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiCCViCCD3Lvl2::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl1.OrderViolationAssumedSecondExecution(value);
}