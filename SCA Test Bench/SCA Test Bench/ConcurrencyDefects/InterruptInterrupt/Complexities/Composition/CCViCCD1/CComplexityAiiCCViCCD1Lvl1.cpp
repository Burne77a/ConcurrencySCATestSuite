#include "CComplexityAiiCCViCCD1Lvl1.h"


CComplexityAiiCCViCCD1Lvl1::CComplexityAiiCCViCCD1Lvl1(IComplexityAttCCViCCD1Lvl0 & referenceToConcreteInstance)
	: m_iLvl0(referenceToConcreteInstance)
{
}

void CComplexityAiiCCViCCD1Lvl1::DataRace(const unsigned int value)
{
	m_iLvl0.DataRace(value);
}

void CComplexityAiiCCViCCD1Lvl1::Deadlock(const unsigned int value)
{
	m_iLvl0.Deadlock(value);
}

void CComplexityAiiCCViCCD1Lvl1::Livelock(const unsigned int value)
{
	m_iLvl0.Livelock(value);
}
void CComplexityAiiCCViCCD1Lvl1::BlockingSuspension(const unsigned int value)
{
	m_iLvl0.BlockingSuspension(value);
}
void CComplexityAiiCCViCCD1Lvl1::AtomicityViolation(const unsigned int value)
{
	m_iLvl0.AtomicityViolation(value);
}
void CComplexityAiiCCViCCD1Lvl1::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiCCViCCD1Lvl1::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_iLvl0.OrderViolationAssumedSecondExecution(value);
}