#include "CComplexityAiiCCVcCCD3Lvl3.h"

CComplexityAiiCCVcCCD3Lvl3::CComplexityAiiCCVcCCD3Lvl3(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl2(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAiiCCVcCCD3Lvl3::DataRace(const unsigned int value)
{
	m_lvl2.DataRace(value);
}

void CComplexityAiiCCVcCCD3Lvl3::Deadlock(const unsigned int value)
{
	m_lvl2.Deadlock(value);
}

void CComplexityAiiCCVcCCD3Lvl3::Livelock(const unsigned int value)
{
	m_lvl2.Livelock(value);
}
void CComplexityAiiCCVcCCD3Lvl3::BlockingSuspension(const unsigned int value)
{
	m_lvl2.BlockingSuspension(value);
}
void CComplexityAiiCCVcCCD3Lvl3::AtomicityViolation(const unsigned int value)
{
	m_lvl2.AtomicityViolation(value);
}
void CComplexityAiiCCVcCCD3Lvl3::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl2.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiCCVcCCD3Lvl3::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl2.OrderViolationAssumedSecondExecution(value);
}