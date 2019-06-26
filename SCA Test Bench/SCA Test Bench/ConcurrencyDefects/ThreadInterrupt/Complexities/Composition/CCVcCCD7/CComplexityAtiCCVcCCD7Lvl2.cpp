#include "CComplexityAtiCCVcCCD7Lvl2.h"

CComplexityAtiCCVcCCD7Lvl2::CComplexityAtiCCVcCCD7Lvl2(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl1(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAtiCCVcCCD7Lvl2::DataRace(const unsigned int value)
{
	m_lvl1.DataRace(value);
}

void CComplexityAtiCCVcCCD7Lvl2::Deadlock(const unsigned int value)
{
	m_lvl1.Deadlock(value);
}

void CComplexityAtiCCVcCCD7Lvl2::Livelock(const unsigned int value)
{
	m_lvl1.Livelock(value);
}
void CComplexityAtiCCVcCCD7Lvl2::BlockingSuspension(const unsigned int value)
{
	m_lvl1.BlockingSuspension(value);
}
void CComplexityAtiCCVcCCD7Lvl2::AtomicityViolation(const unsigned int value)
{
	m_lvl1.AtomicityViolation(value);
}
void CComplexityAtiCCVcCCD7Lvl2::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl1.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCVcCCD7Lvl2::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl1.OrderViolationAssumedSecondExecution(value);
}