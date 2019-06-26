#pragma once
#include "CComplexityAttCCVcCCD7Lvl6.h"
class CComplexityAttCCVcCCD7Lvl7
{
public:
	CComplexityAttCCVcCCD7Lvl7(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
private:
	CComplexityAttCCVcCCD7Lvl6 m_lvl6;
};