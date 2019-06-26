#include "CComplexityAtiCCVcCCD1Lvl1.h"

CComplexityAtiCCVcCCD1Lvl1::CComplexityAtiCCVcCCD1Lvl1(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable)
	: m_lvl0(referenceToDataRaceExposedVariable,referenceToDataRaceExposedVariableSemProtected,referenceToDataRaceExposedVariableGuardProtected,referenceToAtomicityExposedVariable)
{
}

void CComplexityAtiCCVcCCD1Lvl1::DataRace(const unsigned int value)
{
	m_lvl0.DataRace(value);
}

void CComplexityAtiCCVcCCD1Lvl1::Deadlock(const unsigned int value)
{
	m_lvl0.Deadlock(value);
}

void CComplexityAtiCCVcCCD1Lvl1::Livelock(const unsigned int value)
{
	m_lvl0.Livelock(value);
}
void CComplexityAtiCCVcCCD1Lvl1::BlockingSuspension(const unsigned int value)
{
	m_lvl0.BlockingSuspension(value);
}
void CComplexityAtiCCVcCCD1Lvl1::AtomicityViolation(const unsigned int value)
{
	m_lvl0.AtomicityViolation(value);
}
void CComplexityAtiCCVcCCD1Lvl1::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	m_lvl0.OrderViolationAssumedFirstExecution(value);
}
void CComplexityAtiCCVcCCD1Lvl1::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	m_lvl0.OrderViolationAssumedSecondExecution(value);
}