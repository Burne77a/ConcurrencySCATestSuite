#pragma once
#include "SharedData.h"
#include "DummyRTOS.h"
#include <stdio.h>

class CComplexityAtiMD7
{
public: 
	CComplexityAtiMD7(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable,DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
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
	void DepthFiveFromRace(const unsigned int value);
	void DepthFourFromRace(const unsigned int value);
	void DepthThreeFromRace(const unsigned int value);
	void DepthTwoFromRace(const unsigned int value);
	void DepthOneFromRace(const unsigned int value);
	void TheDataRace(const unsigned int value);

	void DepthFiveFromDeadlock(const unsigned int value);
	void DepthFourFromDeadlock(const unsigned int value);
	void DepthThreeFromDeadlock(const unsigned int value);
	void DepthTwoFromDeadlock(const unsigned int value);
	void DepthOneFromDeadlock(const unsigned int value);
	void TheDeadlock(const unsigned int value);
	
	void DepthFiveFromLivelock(const unsigned int value);
	void DepthFourFromLivelock(const unsigned int value);
	void DepthThreeFromLivelock(const unsigned int value);
	void DepthTwoFromLivelock(const unsigned int value);
	void DepthOneFromLivelock(const unsigned int value);
	void TheLivelock(const unsigned int value);

	void DepthFiveFromBlockingSuspension(const unsigned int value);
	void DepthFourFromBlockingSuspension(const unsigned int value);
	void DepthThreeFromBlockingSuspension(const unsigned int value);
	void DepthTwoFromBlockingSuspension(const unsigned int value);
	void DepthOneFromBlockingSuspension(const unsigned int value);
	void TheBlockingSuspension(const unsigned int value);

	void DepthFiveFromAtomicityViolation(const unsigned int value);
	void DepthFourFromAtomicityViolation(const unsigned int value);
	void DepthThreeFromAtomicityViolation(const unsigned int value);
	void DepthTwoFromAtomicityViolation(const unsigned int value);
	void DepthOneFromAtomicityViolation(const unsigned int value);
	void TheAtomicityViolation(const unsigned int value);

	void DepthFiveFromOrderViolationAssumedFirstExecution(const unsigned int value);
	void DepthFourFromOrderViolationAssumedFirstExecution(const unsigned int value);
	void DepthThreeFromOrderViolationAssumedFirstExecution(const unsigned int value);
	void DepthTwoFromOrderViolationAssumedFirstExecution(const unsigned int value);
	void DepthOneFromOrderViolationAssumedFirstExecution(const unsigned int value);
	void TheOrderViolationAssumedFirstExecution(const unsigned int value);

	void DepthFiveFromOrderViolationAssumedSecondExecution(const unsigned int value);
	void DepthFourFromOrderViolationAssumedSecondExecution(const unsigned int value);
	void DepthThreeFromOrderViolationAssumedSecondExecution(const unsigned int value);
	void DepthTwoFromOrderViolationAssumedSecondExecution(const unsigned int value);
	void DepthOneFromOrderViolationAssumedSecondExecution(const unsigned int value);
	void TheOrderViolationAssumedSecondExecution(const unsigned int value);


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
/*
class CComplexityAtiMD7
{
public:
	CComplexityAtiMD7(DATA_STRUCTURE_X1 & referenceToStructureExposedToRace);
	void DataRace(const unsigned int value);
	static const unsigned int DO_RACE = 1U;
private:
	void DepthFiveFromRace(const unsigned int value);
	void DepthFourFromRace(const unsigned int value);
	void DepthThreeFromRace(const unsigned int value);
	void DepthTwoFromRace(const unsigned int value);
	void DepthOneFromRace(const unsigned int value);
	void TheDataRace(const unsigned int value);
	DATA_STRUCTURE_X1 m_memberStructureExposedToRace;
	DATA_STRUCTURE_X1 & m_referenceToStructureExposedToRace;
	SEMAPHORE_ID m_sempahoreId;
};*/