#include "CSemaphoreGuard.h"
#include "CComplexityAiiMD7.h"

#include "CSemaphoreGuard.h"
#include "CComplexityAiiMD3.h"
#include "CSemaphoreGuard.h"
#include "CComplexityAiiMD1.h"

static DATA_STRUCTURE_X1 classGlobalDataRaceVar = emptyX1;
static DATA_STRUCTURE_X1 classGlobalDataRaceVarSemProtected = emptyX1;
static DATA_STRUCTURE_X1 classGlobalDataRaceVarGuardProtected = emptyX1;
static SEMAPHORE_ID classGlobalSem = semaphoreCreateBinary(SEMAPHORE_STATE_FULL);
static SEMAPHORE_ID classGlobalSemForGuard = semaphoreCreateBinary(SEMAPHORE_STATE_FULL);


CComplexityAiiMD7::CComplexityAiiMD7(DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariable,DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableSemProtected, 
		DATA_STRUCTURE_X1 & referenceToDataRaceExposedVariableGuardProtected, DATA_STRUCTURE_X1 & referenceToAtomicityExposedVariable) :
	m_dataRaceExposedVariable(emptyX1),
	m_dataRaceExposedVariableSemProtected(emptyX1),
	m_dataRaceExposedVariableSemGuardProtected(emptyX1),
	m_referenceToDataRaceExposedVariable(referenceToDataRaceExposedVariable),
	m_referenceToDataRaceExposedVariableSemProtected(referenceToDataRaceExposedVariableSemProtected),
	m_referenceToDataRaceExposedVariableSemGuardProtected(referenceToDataRaceExposedVariableGuardProtected),
	m_deadlockExposedVariable (emptyX1),
	m_livelockExposedVariable(emptyX1),
	m_blockingSuspesionExposedVariable(emptyX1),
	m_atomicityViolationExposedVariable(emptyX1),
	m_referenceToAtomicityExposedVariable(referenceToAtomicityExposedVariable),
	m_orderViolationExposedFp(NULL),
	m_noOrderViolationExposedFp(NULL),
	m_semDataRace(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semADeadlock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semBDeadlock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semANoDeadlock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semBNoDeadlock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semALivelock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semBLivelock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semANoLivelock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semBNoLivelock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semABlockingSuspensionlock(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semAtomicityViolation(semaphoreCreateBinary(SEMAPHORE_STATE_FULL)),
	m_semOrderViolation(semaphoreCreateBinary(SEMAPHORE_STATE_FULL))

{

}

void CComplexityAiiMD7::DataRace(const unsigned int value)
{
	if ((value % DO_RACE) == 0)
	{
		DepthFiveFromRace(value);
	}
}

void CComplexityAiiMD7::DepthFiveFromRace(const unsigned int value)
{
	DepthFourFromRace(value);
}
void CComplexityAiiMD7::DepthFourFromRace(const unsigned int value)
{
	DepthThreeFromRace(value);
}
void CComplexityAiiMD7::DepthThreeFromRace(const unsigned int value)
{
	DepthTwoFromRace(value);
}
void CComplexityAiiMD7::DepthTwoFromRace(const unsigned int value)
{
	DepthOneFromRace(value);
}

void CComplexityAiiMD7::DepthOneFromRace(const unsigned int value)
{
	TheDataRace(value);
}

void CComplexityAiiMD7::TheDataRace(const unsigned int value)
{
	//ACg. Global variable. 
	if((value % 20) == DO_RACE)
	{
		classGlobalDataRaceVar.x1 = classGlobalDataRaceVar.x1 + 2;	//Violation - Data race
	}

	if((value % 21) == DO_RACE)
	{
		const CSemaphoreGuard guard(classGlobalSemForGuard);
		classGlobalDataRaceVarGuardProtected.x1 = classGlobalDataRaceVarGuardProtected.x1 + 3; //No violation - protected with semaphore
	}

	if((value % 22) == DO_RACE)
	{
		semaphoreTake(classGlobalSem, OS_WAIT_FOREVER);
		classGlobalDataRaceVarSemProtected.x1 = classGlobalDataRaceVarSemProtected.x1 + 3; //No violation - protected with semaphore
		semaphoreGive(classGlobalSem);
	}

	//ACd complexity, access direct.  
	if (value == DO_RACE)
	{
		m_dataRaceExposedVariable.x1 = m_dataRaceExposedVariable.x1 + 2U; //Violation - Data race
	}
	else
	{
		const CSemaphoreGuard guard(m_semDataRace);
		m_dataRaceExposedVariableSemGuardProtected.x1 = m_dataRaceExposedVariableSemGuardProtected.x1 + 3U; //No violation - protected with semaphore
	}

	if ((value % 70) == DO_RACE)
	{
		semaphoreTake(m_semDataRace, OS_WAIT_FOREVER);
		m_dataRaceExposedVariableSemProtected.x1 = m_dataRaceExposedVariableSemProtected.x1 + 7U; //No violation - protected with semaphore
		semaphoreGive(m_semDataRace);
	}

	//ACr complexity, access reference.
	if (value == DO_RACE)
	{
		m_referenceToDataRaceExposedVariable.x1 = m_referenceToDataRaceExposedVariable.x1 + 2U; //Violation - Data race
	}
	else
	{
		const CSemaphoreGuard guard(m_semDataRace);
		m_referenceToDataRaceExposedVariableSemGuardProtected.x1 = m_referenceToDataRaceExposedVariableSemGuardProtected.x1 + 3U; //No violation - protected with semaphore
	}

	if ((value % 70) == DO_RACE)
	{
		semaphoreTake(m_semDataRace, OS_WAIT_FOREVER);
		m_referenceToDataRaceExposedVariableSemProtected.x1 = m_referenceToDataRaceExposedVariableSemProtected.x1 + 7U; //No violation - protected with semaphore
		semaphoreGive(m_semDataRace);
	}
}

void CComplexityAiiMD7::Deadlock(const unsigned int value)
{
	if ((value % DO_RACE) == 0)
	{
		DepthFiveFromDeadlock(value);
	}
}

void CComplexityAiiMD7::DepthFiveFromDeadlock(const unsigned int value)
{
	DepthFourFromDeadlock(value);
}
void CComplexityAiiMD7::DepthFourFromDeadlock(const unsigned int value)
{
	DepthThreeFromDeadlock(value);
}
void CComplexityAiiMD7::DepthThreeFromDeadlock(const unsigned int value)
{
	DepthTwoFromDeadlock(value);
}
void CComplexityAiiMD7::DepthTwoFromDeadlock(const unsigned int value)
{
	DepthOneFromDeadlock(value);
}

void CComplexityAiiMD7::DepthOneFromDeadlock(const unsigned int value)
{
	TheDeadlock(value);
}

void CComplexityAiiMD7::TheDeadlock(const unsigned int value)
{
	//Deadlock, native OS call.
	if ((value % 10) == DO_DEAD_LOCK)
	{
		semaphoreTake(m_semADeadlock,OS_WAIT_FOREVER);
		semaphoreTake(m_semBDeadlock, OS_WAIT_FOREVER);	//Violation - Potential deadlock.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 1U;
		semaphoreGive(m_semBDeadlock);
		semaphoreGive(m_semADeadlock);
	}
	if ((value % 30) == DO_DEAD_LOCK)
	{
		semaphoreTake(m_semBDeadlock, OS_WAIT_FOREVER);
		semaphoreTake(m_semADeadlock, OS_WAIT_FOREVER); //Violation - Potential deadlock.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 2U;
		semaphoreGive(m_semADeadlock);
		semaphoreGive(m_semBDeadlock);
	}

	//Deadlock, using RAII.
	if ((value % 40) == DO_DEAD_LOCK)
	{
		const CSemaphoreGuard guardA(m_semADeadlock);
		const CSemaphoreGuard guardB(m_semBDeadlock);	//Violation - Potential deadlock.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 3U;
	}
	if ((value % 50) == DO_DEAD_LOCK)
	{
		const CSemaphoreGuard guardB(m_semBDeadlock);
		const CSemaphoreGuard guardA(m_semADeadlock); //Violation - Potential deadlock.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 4U;
	}

	//No deadlock, native OS call.
	if ((value % 20) == DO_NO_DEAD_LOCK)
	{
		semaphoreTake(m_semANoDeadlock, OS_WAIT_FOREVER);
		semaphoreTake(m_semBNoDeadlock, OS_WAIT_FOREVER);	//No violation - order ok.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 10U;
		semaphoreGive(m_semBNoDeadlock);
		semaphoreGive(m_semANoDeadlock);
	}
	if ((value % 30) == DO_NO_DEAD_LOCK)
	{
		semaphoreTake(m_semANoDeadlock, OS_WAIT_FOREVER);
		semaphoreTake(m_semBNoDeadlock, OS_WAIT_FOREVER); //No violation - order ok.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 20U;
		semaphoreGive(m_semBNoDeadlock);
		semaphoreGive(m_semANoDeadlock);
	}

	//No deadlock, using RAII.
	if ((value % 40) == DO_NO_DEAD_LOCK)
	{
		const CSemaphoreGuard guardA(m_semANoDeadlock);
		const CSemaphoreGuard guardB(m_semBNoDeadlock);	//No violation - order ok.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 30U;
	}
	if ((value % 50) == DO_NO_DEAD_LOCK)
	{
		const CSemaphoreGuard guardA(m_semANoDeadlock);
		const CSemaphoreGuard guardB(m_semBNoDeadlock); //No violation - order ok.
		m_deadlockExposedVariable.x1 = m_deadlockExposedVariable.x1 + 40U;
	}
}

void CComplexityAiiMD7::Livelock(const unsigned int value)
{
	DepthFiveFromLivelock(value);
}

void CComplexityAiiMD7::DepthFiveFromLivelock(const unsigned int value)
{
	DepthFourFromLivelock(value);
}
void CComplexityAiiMD7::DepthFourFromLivelock(const unsigned int value)
{
	DepthThreeFromLivelock(value);
}
void CComplexityAiiMD7::DepthThreeFromLivelock(const unsigned int value)
{
	DepthTwoFromLivelock(value);
}
void CComplexityAiiMD7::DepthTwoFromLivelock(const unsigned int value)
{
	DepthOneFromLivelock(value);
}
	
void CComplexityAiiMD7::DepthOneFromLivelock(const unsigned int value)
{
	TheLivelock(value);
}

void CComplexityAiiMD7::TheLivelock(const unsigned int value)
{
	unsigned int justADummyValue = 0U;
	unsigned int anotherDummyValue = 0U;
	//Livelock, native OS call.
	if ((value % 20) == DO_LIVE_LOCK)
	{
		while (semaphoreTake(m_semALivelock, OS_NO_WAIT) != OK)
		{
			justADummyValue++;
		};
		while (semaphoreTake(m_semBLivelock, OS_NO_WAIT) != OK) //Violation - Potential livelock.
		{
			anotherDummyValue++;
		};
		m_livelockExposedVariable.x1 = m_livelockExposedVariable.x1 + 1U;
		semaphoreGive(m_semBLivelock);
		semaphoreGive(m_semALivelock);
	}
	if ((value % 30) == DO_LIVE_LOCK)
	{
		while (semaphoreTake(m_semBLivelock, OS_NO_WAIT) != OK) 
		{
			anotherDummyValue++;
		};

		while (semaphoreTake(m_semALivelock, OS_NO_WAIT) != OK) //Violation - Potential livelock.
		{
			justADummyValue++;
		};
		m_livelockExposedVariable.x1 = m_livelockExposedVariable.x1 + 2U;
		semaphoreGive(m_semALivelock);
		semaphoreGive(m_semBLivelock);
	}

	//No livelock. 
	if ((value % 20) == DO_NO_LIVE_LOCK)
	{
		while (semaphoreTake(m_semANoLivelock, OS_NO_WAIT) != OK)
		{
			justADummyValue++;
		};
		while (semaphoreTake(m_semBNoLivelock, OS_NO_WAIT) != OK) //No violation - order ok.
		{
			anotherDummyValue++;
		};
		m_livelockExposedVariable.x1 = m_livelockExposedVariable.x1 + 10U;
		semaphoreGive(m_semBNoLivelock);
		semaphoreGive(m_semANoLivelock);
	}
	if ((value % 30) == DO_NO_LIVE_LOCK)
	{
		while (semaphoreTake(m_semANoLivelock, OS_NO_WAIT) != OK)
		{
			anotherDummyValue++;
		};

		while (semaphoreTake(m_semBNoLivelock, OS_NO_WAIT) != OK) //No violation - order ok.
		{
			justADummyValue++;
		};
		m_livelockExposedVariable.x1 = m_livelockExposedVariable.x1 + 20U;
		semaphoreGive(m_semBNoLivelock);
		semaphoreGive(m_semANoLivelock);
	}
}

void CComplexityAiiMD7::BlockingSuspension(const unsigned int value)
{
	DepthFiveFromBlockingSuspension(value);
}
void CComplexityAiiMD7::DepthFiveFromBlockingSuspension(const unsigned int value)
{
	DepthFourFromBlockingSuspension(value);
}
void CComplexityAiiMD7::DepthFourFromBlockingSuspension(const unsigned int value)
{
	DepthThreeFromBlockingSuspension(value);
}
void CComplexityAiiMD7::DepthThreeFromBlockingSuspension(const unsigned int value)
{
	DepthTwoFromBlockingSuspension(value);
}
void CComplexityAiiMD7::DepthTwoFromBlockingSuspension(const unsigned int value)
{
	DepthOneFromBlockingSuspension(value);
}
void CComplexityAiiMD7::DepthOneFromBlockingSuspension(const unsigned int value)
{
	TheBlockingSuspension(value);
}

void CComplexityAiiMD7::TheBlockingSuspension(const unsigned int value)
{
	if (semaphoreTake(m_semABlockingSuspensionlock, 1000000000) == OK) //Violation - blocking suspension. Very long wait. 
	{
		m_blockingSuspesionExposedVariable.x1++;
		semaphoreGive(m_semABlockingSuspensionlock);
	}

	if (semaphoreTake(m_semABlockingSuspensionlock, OS_NO_WAIT) == OK) //No violation - no wait.  
	{
		m_blockingSuspesionExposedVariable.x1++;
		semaphoreGive(m_semABlockingSuspensionlock);
	}
}

void CComplexityAiiMD7::AtomicityViolation(const unsigned int value)
{
	DepthFiveFromAtomicityViolation(value);
}
void CComplexityAiiMD7::DepthFiveFromAtomicityViolation(const unsigned int value)
{
	DepthFourFromAtomicityViolation(value);
}
void CComplexityAiiMD7::DepthFourFromAtomicityViolation(const unsigned int value)
{
	DepthThreeFromAtomicityViolation(value);
}
void CComplexityAiiMD7::DepthThreeFromAtomicityViolation(const unsigned int value)
{
	DepthTwoFromAtomicityViolation(value);
}
void CComplexityAiiMD7::DepthTwoFromAtomicityViolation(const unsigned int value)
{
	DepthOneFromAtomicityViolation(value);
}
void CComplexityAiiMD7::DepthOneFromAtomicityViolation(const unsigned int value)
{
	TheAtomicityViolation(value);
}
void CComplexityAiiMD7::TheAtomicityViolation(const unsigned int value)
{
	//ACd complexity, access direct. 
	//Native OS call.
	if ((value % 20) == DO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		semaphoreTake(m_semAtomicityViolation, OS_WAIT_FOREVER);
		tmp = m_atomicityViolationExposedVariable.x1;
		semaphoreGive(m_semAtomicityViolation);
		for (unsigned int i = 0; i < value; i++)
		{
			tmp++;
		}

		semaphoreTake(m_semAtomicityViolation, OS_WAIT_FOREVER);
		m_atomicityViolationExposedVariable.x1 = tmp;  //Violation - atomicity violation
		semaphoreGive(m_semAtomicityViolation);
	}

	//RAII.
	if ((value % 30) == DO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		{
			const CSemaphoreGuard guard(m_semAtomicityViolation);
			tmp = m_atomicityViolationExposedVariable.x1;
		}
		
		for (unsigned int i = 0; i < value; i++)
		{
			tmp++;
		}

		{
			const CSemaphoreGuard guard(m_semAtomicityViolation);
			m_atomicityViolationExposedVariable.x1 = tmp;  //Violation - atomicity violation
		}
	}

	//ACr complexity, access reference.
	//Native OS call.
	if ((value % 20) == DO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		semaphoreTake(m_semAtomicityViolation, OS_WAIT_FOREVER);
		tmp = m_referenceToAtomicityExposedVariable.x1;
		semaphoreGive(m_semAtomicityViolation);
		for (unsigned int i = 0; i < value; i++)
		{
			tmp++;
		}

		semaphoreTake(m_semAtomicityViolation, OS_WAIT_FOREVER);
		m_referenceToAtomicityExposedVariable.x1 = tmp;  //Violation - atomicity violation
		semaphoreGive(m_semAtomicityViolation);
	}

	//RAII.
	if ((value % 30) == DO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		{
			const CSemaphoreGuard guard(m_semAtomicityViolation);
			tmp = m_referenceToAtomicityExposedVariable.x1;
		}

		for (unsigned int i = 0; i < value; i++)
		{
			tmp++;
		}

		{
			const CSemaphoreGuard guard(m_semAtomicityViolation);
			m_referenceToAtomicityExposedVariable.x1 = tmp;  //Violation - atomicity violation
		}
	}

	//Atomicity OK - below.
	//ACd complexity, access direct. 
	//Native OS call.
	if ((value % 20) == DO_NO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		semaphoreTake(m_semAtomicityViolation, OS_WAIT_FOREVER);
		tmp = m_atomicityViolationExposedVariable.x1;
		for (unsigned int i = 0; i < value; i++)
		{
			tmp++;
		}
		m_atomicityViolationExposedVariable.x1 = tmp;   //No violation - atomicity keept
		semaphoreGive(m_semAtomicityViolation);
	}

	//RAII.
	if ((value % 30) == DO_NO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		{
			const CSemaphoreGuard guard(m_semAtomicityViolation);
			tmp = m_atomicityViolationExposedVariable.x1;
			for (unsigned int i = 0; i < value; i++)
			{
				tmp++;
			}
			m_atomicityViolationExposedVariable.x1 = tmp;  //No violation - atomicity keept.
		}
	}

	//ACr complexity, access reference.
	//Native OS call.
	if ((value % 20) == DO_NO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		semaphoreTake(m_semAtomicityViolation, OS_WAIT_FOREVER);
		tmp = m_referenceToAtomicityExposedVariable.x1;
		for (unsigned int i = 0; i < value; i++)
		{
			tmp++;
		}
		m_referenceToAtomicityExposedVariable.x1 = tmp;  //No violation - atomicity keept.
		semaphoreGive(m_semAtomicityViolation);
	}

	//RAII.
	if ((value % 30) == DO_NO_ATOMICITY_VIOLATION)
	{
		unsigned int tmp = 0U;
		{
			const CSemaphoreGuard guard(m_semAtomicityViolation);
			tmp = m_referenceToAtomicityExposedVariable.x1;
			for (unsigned int i = 0; i < value; i++)
			{
				tmp++;
			}
			m_referenceToAtomicityExposedVariable.x1 = tmp;  //No violation - atomicity keept.
		}
	}
}

void CComplexityAiiMD7::OrderViolationAssumedFirstExecution(const unsigned int value)
{
	DepthFiveFromOrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiMD7::DepthFiveFromOrderViolationAssumedFirstExecution(const unsigned int value)
{
	DepthFourFromOrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiMD7::DepthFourFromOrderViolationAssumedFirstExecution(const unsigned int value)
{
	DepthThreeFromOrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiMD7::DepthThreeFromOrderViolationAssumedFirstExecution(const unsigned int value)
{
	DepthTwoFromOrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiMD7::DepthTwoFromOrderViolationAssumedFirstExecution(const unsigned int value)
{
	DepthOneFromOrderViolationAssumedFirstExecution(value);
}
void CComplexityAiiMD7::DepthOneFromOrderViolationAssumedFirstExecution(const unsigned int value)
{
	TheOrderViolationAssumedFirstExecution(value);
}

void CComplexityAiiMD7::TheOrderViolationAssumedFirstExecution(const unsigned int value)
{
	if((value % 10) == DO_ORDER_VIOLATION)
	{ 
		m_orderViolationExposedFp = fopen ("fileViolation.txt", "w+");
	}

	if ((value % 20) == DO_NO_ORDER_VIOLATION)
	{
		semaphoreTake(m_semOrderViolation, OS_WAIT_FOREVER);
		if(m_noOrderViolationExposedFp == NULL)
		{
			m_noOrderViolationExposedFp = fopen ("fileNoViolation.txt", "w+");
		}
		semaphoreGive(m_semOrderViolation);
	}
}

void CComplexityAiiMD7::OrderViolationAssumedSecondExecution(const unsigned int value)
{
	DepthFiveFromOrderViolationAssumedSecondExecution(value);
}

void CComplexityAiiMD7::DepthFiveFromOrderViolationAssumedSecondExecution(const unsigned int value)
{
	DepthFourFromOrderViolationAssumedSecondExecution(value);
}
void CComplexityAiiMD7::DepthFourFromOrderViolationAssumedSecondExecution(const unsigned int value)
{
	DepthThreeFromOrderViolationAssumedSecondExecution(value);
}
void CComplexityAiiMD7::DepthThreeFromOrderViolationAssumedSecondExecution(const unsigned int value)
{
	DepthTwoFromOrderViolationAssumedSecondExecution(value);
}
void CComplexityAiiMD7::DepthTwoFromOrderViolationAssumedSecondExecution(const unsigned int value)
{
	DepthOneFromOrderViolationAssumedFirstExecution(value);
}

void CComplexityAiiMD7::DepthOneFromOrderViolationAssumedSecondExecution(const unsigned int value)
{
	TheOrderViolationAssumedSecondExecution(value);
}

void CComplexityAiiMD7::TheOrderViolationAssumedSecondExecution(const unsigned int value)
{
	if((value % 10) == DO_ORDER_VIOLATION)
	{
		int buffer[100];
		buffer[0] = fgetc(m_orderViolationExposedFp); //Violation - order might be compromised
	}

	if ((value % 20) == DO_NO_ORDER_VIOLATION)
	{
		int buffer[100];
		semaphoreTake(m_semOrderViolation, OS_WAIT_FOREVER);
		if (m_noOrderViolationExposedFp != NULL)
		{
			buffer[0] = fgetc(m_noOrderViolationExposedFp);//No violation - order ok.
		}
		semaphoreGive(m_semOrderViolation);
	}
}
