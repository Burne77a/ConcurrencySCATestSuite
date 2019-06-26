#include "CComplexityAttCCViCCD7Lvl7.h"


CComplexityAttCCViCCD7Lvl7::CComplexityAttCCViCCD7Lvl7(IComplexityAttCCViCCD7Lvl6 & referenceToConcreteInstance)
	: m_iLvl6(referenceToConcreteInstance)
{
}

void CComplexityAttCCViCCD7Lvl7::DataRace(const unsigned int value)
{
	m_iLvl6.DataRace(value);
}

void CComplexityAttCCViCCD7Lvl7::Deadlock(const unsigned int value)
{
	m_iLvl6.Deadlock(value);
}

void CComplexityAttCCViCCD7Lvl7::Livelock(const unsigned int value)
{
	m_iLvl6.Livelock(value);
}
void CComplexityAttCCViCCD7Lvl7::BlockingSuspension(const unsigned int value)
{
	m_iLvl6.BlockingSuspension(value);
}
void CComplexityAttCCViCCD7Lvl7::AtomicityViolation(const unsigned int value)
{
	m_iLvl6.AtomicityViolation(value);
}
void CComplexityAttCCViCCD7Lvl7::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl6.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCViCCD7Lvl7::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl6.OrderViolationAssumedSecondExecution(value);
}