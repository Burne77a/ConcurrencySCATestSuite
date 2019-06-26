#include "CComplexityAiiCCVcCCD7Lvl7.h"

CComplexityAiiCCVcCCD7Lvl7::CComplexityAiiCCVcCCD7Lvl7(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl6(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAiiCCVcCCD7Lvl7::DataRace(const unsigned int value)
{
	m_lvl6.DataRace(value);
}

void CComplexityAiiCCVcCCD7Lvl7::Deadlock(const unsigned int value)
{
	m_lvl6.Deadlock(value);
}

void CComplexityAiiCCVcCCD7Lvl7::Livelock(const unsigned int value)
{
	m_lvl6.Livelock(value);
}
void CComplexityAiiCCVcCCD7Lvl7::BlockingSuspension(const unsigned int value)
{
	m_lvl6.BlockingSuspension(value);
}
void CComplexityAiiCCVcCCD7Lvl7::AtomicityViolation(const unsigned int value)
{
	m_lvl6.AtomicityViolation(value);
}
void CComplexityAiiCCVcCCD7Lvl7::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl6.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiCCVcCCD7Lvl7::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl6.OrderViolationAssumedSecondExecution(value);
}