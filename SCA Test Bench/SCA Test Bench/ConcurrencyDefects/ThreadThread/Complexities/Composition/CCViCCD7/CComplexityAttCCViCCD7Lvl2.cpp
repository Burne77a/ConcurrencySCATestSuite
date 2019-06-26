#include "CComplexityAttCCViCCD7Lvl2.h"


CComplexityAttCCViCCD7Lvl2::CComplexityAttCCViCCD7Lvl2(IComplexityAttCCViCCD7Lvl1 & referenceToConcreteInstance)
	: m_iLvl1(referenceToConcreteInstance)
{
}

void CComplexityAttCCViCCD7Lvl2::DataRace(const unsigned int value)
{
	m_iLvl1.DataRace(value);
}

void CComplexityAttCCViCCD7Lvl2::Deadlock(const unsigned int value)
{
	m_iLvl1.Deadlock(value);
}

void CComplexityAttCCViCCD7Lvl2::Livelock(const unsigned int value)
{
	m_iLvl1.Livelock(value);
}
void CComplexityAttCCViCCD7Lvl2::BlockingSuspension(const unsigned int value)
{
	m_iLvl1.BlockingSuspension(value);
}
void CComplexityAttCCViCCD7Lvl2::AtomicityViolation(const unsigned int value)
{
	m_iLvl1.AtomicityViolation(value);
}
void CComplexityAttCCViCCD7Lvl2::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl1.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCViCCD7Lvl2::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl1.OrderViolationAssumedSecondExecution(value);
}