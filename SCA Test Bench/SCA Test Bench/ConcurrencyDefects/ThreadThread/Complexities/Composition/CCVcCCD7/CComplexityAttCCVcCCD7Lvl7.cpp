#include "CComplexityAttCCVcCCD7Lvl7.h"

CComplexityAttCCVcCCD7Lvl7::CComplexityAttCCVcCCD7Lvl7(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl6(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAttCCVcCCD7Lvl7::DataRace(const unsigned int value)
{
	m_lvl6.DataRace(value);
}

void CComplexityAttCCVcCCD7Lvl7::Deadlock(const unsigned int value)
{
	m_lvl6.Deadlock(value);
}

void CComplexityAttCCVcCCD7Lvl7::Livelock(const unsigned int value)
{
	m_lvl6.Livelock(value);
}
void CComplexityAttCCVcCCD7Lvl7::BlockingSuspension(const unsigned int value)
{
	m_lvl6.BlockingSuspension(value);
}
void CComplexityAttCCVcCCD7Lvl7::AtomicityViolation(const unsigned int value)
{
	m_lvl6.AtomicityViolation(value);
}
void CComplexityAttCCVcCCD7Lvl7::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl6.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAttCCVcCCD7Lvl7::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl6.OrderViolationAssumedSecondExecution(value);
}