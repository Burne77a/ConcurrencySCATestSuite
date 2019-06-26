#include "CComplexityAttCCViCCD1Lvl1.h"


CComplexityAttCCViCCD1Lvl1::CComplexityAttCCViCCD1Lvl1(IComplexityAttCCViCCD1Lvl0 & referenceToConcreteInstance)
	: m_iLvl0(referenceToConcreteInstance)
{
}

void CComplexityAttCCViCCD1Lvl1::DataRace(const unsigned int value)
{
	m_iLvl0.DataRace(value);
}

void CComplexityAttCCViCCD1Lvl1::Deadlock(const unsigned int value)
{
	m_iLvl0.Deadlock(value);
}

void CComplexityAttCCViCCD1Lvl1::Livelock(const unsigned int value)
{
	m_iLvl0.Livelock(value);
}
void CComplexityAttCCViCCD1Lvl1::BlockingSuspension(const unsigned int value)
{
	m_iLvl0.BlockingSuspension(value);
}
void CComplexityAttCCViCCD1Lvl1::AtomicityViolation(const unsigned int value)
{
	m_iLvl0.AtomicityViolation(value);
}
void CComplexityAttCCViCCD1Lvl1::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCViCCD1Lvl1::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedSecondExecution(value);
}