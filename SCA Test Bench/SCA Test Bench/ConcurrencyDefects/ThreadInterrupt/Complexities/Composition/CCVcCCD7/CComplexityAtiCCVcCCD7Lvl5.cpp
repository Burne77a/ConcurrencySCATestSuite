#include "CComplexityAtiCCVcCCD7Lvl5.h"

CComplexityAtiCCVcCCD7Lvl5::CComplexityAtiCCVcCCD7Lvl5(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl4(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAtiCCVcCCD7Lvl5::DataRace(const unsigned int value)
{
	m_lvl4.DataRace(value);
}

void CComplexityAtiCCVcCCD7Lvl5::Deadlock(const unsigned int value)
{
	m_lvl4.Deadlock(value);
}

void CComplexityAtiCCVcCCD7Lvl5::Livelock(const unsigned int value)
{
	m_lvl4.Livelock(value);
}
void CComplexityAtiCCVcCCD7Lvl5::BlockingSuspension(const unsigned int value)
{
	m_lvl4.BlockingSuspension(value);
}
void CComplexityAtiCCVcCCD7Lvl5::AtomicityViolation(const unsigned int value)
{
	m_lvl4.AtomicityViolation(value);
}
void CComplexityAtiCCVcCCD7Lvl5::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl4.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCVcCCD7Lvl5::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl4.OrderViolationAssumedSecondExecution(value);
}