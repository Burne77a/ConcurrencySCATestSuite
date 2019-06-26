#include "CComplexityAttCCVcCCD7Lvl6.h"

CComplexityAttCCVcCCD7Lvl6::CComplexityAttCCVcCCD7Lvl6(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl5(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAttCCVcCCD7Lvl6::DataRace(const unsigned int value)
{
	m_lvl5.DataRace(value);
}

void CComplexityAttCCVcCCD7Lvl6::Deadlock(const unsigned int value)
{
	m_lvl5.Deadlock(value);
}

void CComplexityAttCCVcCCD7Lvl6::Livelock(const unsigned int value)
{
	m_lvl5.Livelock(value);
}
void CComplexityAttCCVcCCD7Lvl6::BlockingSuspension(const unsigned int value)
{
	m_lvl5.BlockingSuspension(value);
}
void CComplexityAttCCVcCCD7Lvl6::AtomicityViolation(const unsigned int value)
{
	m_lvl5.AtomicityViolation(value);
}
void CComplexityAttCCVcCCD7Lvl6::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl5.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCVcCCD7Lvl6::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl5.OrderViolationAssumedSecondExecution(value);
}