#include "CComplexityAttCCViCCD7Lvl4.h"


CComplexityAttCCViCCD7Lvl4::CComplexityAttCCViCCD7Lvl4(IComplexityAttCCViCCD7Lvl3 & referenceToConcreteInstance)
	: m_iLvl3(referenceToConcreteInstance)
{
}

void CComplexityAttCCViCCD7Lvl4::DataRace(const unsigned int value)
{
	m_iLvl3.DataRace(value);
}

void CComplexityAttCCViCCD7Lvl4::Deadlock(const unsigned int value)
{
	m_iLvl3.Deadlock(value);
}

void CComplexityAttCCViCCD7Lvl4::Livelock(const unsigned int value)
{
	m_iLvl3.Livelock(value);
}
void CComplexityAttCCViCCD7Lvl4::BlockingSuspension(const unsigned int value)
{
	m_iLvl3.BlockingSuspension(value);
}
void CComplexityAttCCViCCD7Lvl4::AtomicityViolation(const unsigned int value)
{
	m_iLvl3.AtomicityViolation(value);
}
void CComplexityAttCCViCCD7Lvl4::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl3.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCViCCD7Lvl4::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl3.OrderViolationAssumedSecondExecution(value);
}