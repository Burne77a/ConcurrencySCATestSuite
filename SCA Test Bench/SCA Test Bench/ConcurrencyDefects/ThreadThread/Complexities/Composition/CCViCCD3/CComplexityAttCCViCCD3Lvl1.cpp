#include "CComplexityAttCCViCCD3Lvl1.h"


CComplexityAttCCViCCD3Lvl1::CComplexityAttCCViCCD3Lvl1(IComplexityAttCCViCCD3Lvl0 & referenceToConcreteInstance)
	: m_iLvl0(referenceToConcreteInstance)
{
}

void CComplexityAttCCViCCD3Lvl1::DataRace(const unsigned int value)
{
	m_iLvl0.DataRace(value);
}

void CComplexityAttCCViCCD3Lvl1::Deadlock(const unsigned int value)
{
	m_iLvl0.Deadlock(value);
}

void CComplexityAttCCViCCD3Lvl1::Livelock(const unsigned int value)
{
	m_iLvl0.Livelock(value);
}
void CComplexityAttCCViCCD3Lvl1::BlockingSuspension(const unsigned int value)
{
	m_iLvl0.BlockingSuspension(value);
}
void CComplexityAttCCViCCD3Lvl1::AtomicityViolation(const unsigned int value)
{
	m_iLvl0.AtomicityViolation(value);
}
void CComplexityAttCCViCCD3Lvl1::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCViCCD3Lvl1::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedSecondExecution(value);
}