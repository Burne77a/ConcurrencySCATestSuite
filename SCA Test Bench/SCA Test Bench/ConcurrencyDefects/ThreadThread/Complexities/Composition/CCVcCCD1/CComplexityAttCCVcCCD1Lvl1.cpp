#include "CComplexityAttCCVcCCD1Lvl1.h"

CComplexityAttCCVcCCD1Lvl1::CComplexityAttCCVcCCD1Lvl1(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl0(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAttCCVcCCD1Lvl1::DataRace(const unsigned int value)
{
	m_lvl0.DataRace(value);
}

void CComplexityAttCCVcCCD1Lvl1::Deadlock(const unsigned int value)
{
	m_lvl0.Deadlock(value);
}

void CComplexityAttCCVcCCD1Lvl1::Livelock(const unsigned int value)
{
	m_lvl0.Livelock(value);
}
void CComplexityAttCCVcCCD1Lvl1::BlockingSuspension(const unsigned int value)
{
	m_lvl0.BlockingSuspension(value);
}
void CComplexityAttCCVcCCD1Lvl1::AtomicityViolation(const unsigned int value)
{
	m_lvl0.AtomicityViolation(value);
}
void CComplexityAttCCVcCCD1Lvl1::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl0.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCVcCCD1Lvl1::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl0.OrderViolationAssumedSecondExecution(value);
}