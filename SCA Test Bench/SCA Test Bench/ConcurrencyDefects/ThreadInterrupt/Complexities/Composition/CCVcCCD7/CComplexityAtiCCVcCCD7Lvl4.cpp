#include "CComplexityAtiCCVcCCD7Lvl4.h"

CComplexityAtiCCVcCCD7Lvl4::CComplexityAtiCCVcCCD7Lvl4(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl3(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAtiCCVcCCD7Lvl4::DataRace(const unsigned int value)
{
	m_lvl3.DataRace(value);
}

void CComplexityAtiCCVcCCD7Lvl4::Deadlock(const unsigned int value)
{
	m_lvl3.Deadlock(value);
}

void CComplexityAtiCCVcCCD7Lvl4::Livelock(const unsigned int value)
{
	m_lvl3.Livelock(value);
}
void CComplexityAtiCCVcCCD7Lvl4::BlockingSuspension(const unsigned int value)
{
	m_lvl3.BlockingSuspension(value);
}
void CComplexityAtiCCVcCCD7Lvl4::AtomicityViolation(const unsigned int value)
{
	m_lvl3.AtomicityViolation(value);
}
void CComplexityAtiCCVcCCD7Lvl4::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl3.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCVcCCD7Lvl4::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl3.OrderViolationAssumedSecondExecution(value);
}