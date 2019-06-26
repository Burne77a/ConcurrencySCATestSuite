#pragma once
#include "DummyRTOS.h"
#include "SharedData.h"
#include <stdio.h>

class CComplexityAtiCCVcCCD7Lvl0
{
public: 
	CComplexityAtiCCVcCCD7Lvl0(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable, DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable);
	void DataRace(const unsigned int value);
	void Deadlock(const unsigned int value);
	void Livelock(const unsigned int value);
	void BlockingSuspension(const unsigned int value);
	void AtomicityViolation(const unsigned int value);
	void OrderViolationAssumedFirstExecution(const unsigned int value);
	void OrderViolationAssumedSecondExecution(const unsigned int value);
	static const unsigned int DO_RACE = 1U;
	static const unsigned int DO_DEAD_LOCK = 1U;
	static const unsigned int DO_NO_DEAD_LOCK = 2U;
	static const unsigned int DO_LIVE_LOCK = 1U;
	static const unsigned int DO_NO_LIVE_LOCK = 2U;
	static const unsigned int DO_ATOMICITY_VIOLATION = 1U;
	static const unsigned int DO_NO_ATOMICITY_VIOLATION = 2U;
	static const unsigned int DO_ORDER_VIOLATION = 1U;
	static const unsigned int DO_NO_ORDER_VIOLATION = 2U;
private:
	DATA_STRUCTURE_X1 m_dataRaceExposedVariable;
	DATA_STRUCTURE_X1 m_dataRaceExposedVariableSemProtected;
	DATA_STRUCTURE_X1 m_dataRaceExposedVariableSemGuardProtected;
	DATA_STRUCTURE_X1 & m_referenceToDataRaceExposedVariable;
	DATA_STRUCTURE_X1 & m_referenceToDataRaceExposedVariableSemProtected;
	DATA_STRUCTURE_X1 & m_referenceToDataRaceExposedVariableSemGuardProtected;
	DATA_STRUCTURE_X1 m_deadlockExposedVariable;
	DATA_STRUCTURE_X1 m_livelockExposedVariable;
	DATA_STRUCTURE_X1 m_blockingSuspesionExposedVariable;
	DATA_STRUCTURE_X1 m_atomicityViolationExposedVariable;
	DATA_STRUCTURE_X1 & m_referenceToAtomicityExposedVariable;
	FILE * m_orderViolationExposedFp;
	FILE * m_noOrderViolationExposedFp;

	SEMAPHORE_ID m_semDataRace;

	SEMAPHORE_ID m_semADeadlock;
	SEMAPHORE_ID m_semBDeadlock;
	SEMAPHORE_ID m_semANoDeadlock;
	SEMAPHORE_ID m_semBNoDeadlock;

	SEMAPHORE_ID m_semALivelock;
	SEMAPHORE_ID m_semBLivelock;
	SEMAPHORE_ID m_semANoLivelock;
	SEMAPHORE_ID m_semBNoLivelock;

	SEMAPHORE_ID m_semABlockingSuspensionlock;

	SEMAPHORE_ID m_semAtomicityViolation;
	SEMAPHORE_ID m_semOrderViolation;

};
