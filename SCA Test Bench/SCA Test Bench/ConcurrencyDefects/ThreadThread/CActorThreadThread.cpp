#include "DummyRTOS.h"
#include "SharedData.h"
#include "CActorThreadThread.h"
#include "Complexities/MethodDepth/CComplexityAttMD1.h"
#include "Complexities/MethodDepth/CComplexityAttMD3.h"
#include "Complexities/MethodDepth/CComplexityAttMD7.h"
#include "Complexities/Composition/CCVcCCD1/CComplexityAttCCVcCCD1Lvl1.h"
#include "Complexities/Composition/CCVcCCD3/CComplexityAttCCVcCCD3Lvl3.h"
#include "Complexities/Composition/CCVcCCD7/CComplexityAttCCVcCCD7Lvl7.h"

#include "Complexities/Composition/CCViCCD1/CComplexityAttCCViCCD1Lvl0.h"
#include "Complexities/Composition/CCViCCD1/CComplexityAttCCViCCD1Lvl1.h"

#include "Complexities/Composition/CCViCCD3/CComplexityAttCCViCCD3Lvl0.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAttCCViCCD3Lvl1.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAttCCViCCD3Lvl2.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAttCCViCCD3Lvl3.h"

#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl0.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl1.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl2.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl3.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl4.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl5.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl6.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAttCCViCCD7Lvl7.h"

DATA_STRUCTURE_X1 globalDataRaceVarForDifferentFunctionTest = emptyX1;
DATA_STRUCTURE_X1 globalDataRaceVarForSameFunctionTest = emptyX1;

DATA_STRUCTURE_X1 gVarDataRaceAttMD1ACr;					//Shared data structure, passed to CComplexityAttMD1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttMD1ACr;		//Shared data structure, passed to CComplexityAttMD1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttMD1ACr;	//Shared data structure, passed to CComplexityAttMD1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttMD1ACr;		    //Shared data structure, passed to CComplexityAttMD1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAttMD3ACr;					//Shared data structure, passed to CComplexityAttMD3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttMD3ACr;		//Shared data structure, passed to CComplexityAttMD3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttMD3ACr;	//Shared data structure, passed to CComplexityAttMD3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttMD3ACr;		    //Shared data structure, passed to CComplexityAttMD3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAttMD7ACr;					//Shared data structure, passed to CComplexityAttMD7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttMD7ACr;		//Shared data structure, passed to CComplexityAttMD7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttMD7ACr;	//Shared data structure, passed to CComplexityAttMD7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttMD7ACr;		    //Shared data structure, passed to CComplexityAttMD7 instance as a reference. For reference complexity test. 

CComplexityAttMD1 testAttMD1Instance(gVarDataRaceAttMD1ACr,gVarDataRaceSemProtectedAttMD1ACr,gVarDataRaceSemGuardProtectedAttMD1ACr, gVarAtomicityViolationAttMD1ACr);
CComplexityAttMD3 testAttMD3Instance(gVarDataRaceAttMD3ACr,gVarDataRaceSemProtectedAttMD3ACr,gVarDataRaceSemGuardProtectedAttMD3ACr,gVarAtomicityViolationAttMD3ACr);
CComplexityAttMD7 testAttMD7Instance(gVarDataRaceAttMD7ACr,gVarDataRaceSemProtectedAttMD7ACr,gVarDataRaceSemGuardProtectedAttMD7ACr,gVarAtomicityViolationAttMD7ACr);

DATA_STRUCTURE_X1 gVarDataRaceAttVcCCD1ACr;					//Shared data structure, passed to CComplexityAttCCVcCCD1Lvl1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttVcCCD1ACr;		//Shared data structure, passed to CComplexityAttCCVcCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttVcCCD1ACr;	//Shared data structure, passed to CComplexityAttCCVcCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttVcCCD1ACr;		    //Shared data structure, passed to CComplexityAttCCVcCCD1Lvl1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAttVcCCD3ACr;						//Shared data structure, passed to CComplexityAttCCVcCCD3Lvl3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttVcCCD3ACr;			//Shared data structure, passed to CComplexityAttCCVcCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttVcCCD3ACr;	//Shared data structure, passed to CComplexityAttCCVcCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttVcCCD3ACr;		    //Shared data structure, passed to CComplexityAttCCVcCCD3Lvl3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAttVcCCD7ACr;						//Shared data structure, passed to CComplexityAttCCVcCCD7Lvl7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttVcCCD7ACr;			//Shared data structure, passed to CComplexityAttCCVcCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttVcCCD7ACr;	//Shared data structure, passed to CComplexityAttCCVcCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttVcCCD7Cr;		    //Shared data structure, passed to CComplexityAttCCVcCCD7Lvl7 instance as a reference. For reference complexity test. 

CComplexityAttCCVcCCD1Lvl1 testAttCCVcCCD1Lvl1Instance(gVarDataRaceAttVcCCD1ACr,gVarDataRaceSemProtectedAttVcCCD1ACr,gVarDataRaceSemGuardProtectedAttVcCCD1ACr,gVarAtomicityViolationAttVcCCD1ACr);
CComplexityAttCCVcCCD3Lvl3 testAttCCVcCCD3Lvl3Instance(gVarDataRaceAttVcCCD3ACr,gVarDataRaceSemProtectedAttVcCCD3ACr,gVarDataRaceSemGuardProtectedAttVcCCD3ACr,gVarAtomicityViolationAttVcCCD3ACr);
CComplexityAttCCVcCCD7Lvl7 testAttCCVcCCD7Lvl7Instance(gVarDataRaceAttVcCCD7ACr,gVarDataRaceSemProtectedAttVcCCD7ACr,gVarDataRaceSemGuardProtectedAttVcCCD7ACr,gVarAtomicityViolationAttVcCCD7Cr);

DATA_STRUCTURE_X1 gVarDataRaceAttViCCD1ACr;						//Shared data structure, passed to CComplexityAttCCViCCD1Lvl1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttViCCD1ACr;			//Shared data structure, passed to CComplexityAttCCViCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttViCCD1ACr;	//Shared data structure, passed to CComplexityAttCCViCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttViCCD1ACr;		    //Shared data structure, passed to CComplexityAttCCViCCD1Lvl1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAttViCCD3ACr;						//Shared data structure, passed to CComplexityAttCCViCCD3Lvl3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttViCCD3ACr;			//Shared data structure, passed to CComplexityAttCCViCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttViCCD3ACr;	//Shared data structure, passed to CComplexityAttCCViCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttViCCD3ACr;		    //Shared data structure, passed to CComplexityAttCCViCCD3Lvl3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAttViCCD7ACr;						//Shared data structure, passed to CComplexityAttCCViCCD7Lvl7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAttViCCD7ACr;			//Shared data structure, passed to CComplexityAttCCViCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAttViCCD7ACr;	//Shared data structure, passed to CComplexityAttCCViCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAttViCCD7ACr;		    //Shared data structure, passed to CComplexityAttCCViCCD7Lvl7 instance as a reference. For reference complexity test. 
CComplexityAttCCViCCD1Lvl0 testAttCCViCCD1Lvl0Instance(gVarDataRaceAttViCCD1ACr,gVarDataRaceSemProtectedAttViCCD1ACr,gVarDataRaceSemGuardProtectedAttViCCD1ACr,gVarAtomicityViolationAttViCCD1ACr);
CComplexityAttCCViCCD1Lvl1 testAttCCViCCD1Lvl1Instance(testAttCCViCCD1Lvl0Instance);
CComplexityAttCCViCCD3Lvl0 testAttCCViCCD3Lvl0Instance(gVarDataRaceAttViCCD3ACr,gVarDataRaceSemProtectedAttViCCD3ACr,gVarDataRaceSemGuardProtectedAttViCCD3ACr,gVarAtomicityViolationAttViCCD3ACr);
CComplexityAttCCViCCD3Lvl1 testAttCCViCCD3Lvl1Instance(testAttCCViCCD3Lvl0Instance);
CComplexityAttCCViCCD3Lvl2 testAttCCViCCD3Lvl2Instance(testAttCCViCCD3Lvl1Instance);
CComplexityAttCCViCCD3Lvl3 testAttCCViCCD3Lvl3Instance(testAttCCViCCD3Lvl2Instance);
CComplexityAttCCViCCD7Lvl0 testAttCCViCCD7Lvl0Instance(gVarDataRaceAttViCCD7ACr,gVarDataRaceSemProtectedAttViCCD7ACr,gVarDataRaceSemGuardProtectedAttViCCD7ACr,gVarAtomicityViolationAttViCCD7ACr);
CComplexityAttCCViCCD7Lvl1 testAttCCViCCD7Lvl1Instance(testAttCCViCCD7Lvl0Instance);
CComplexityAttCCViCCD7Lvl2 testAttCCViCCD7Lvl2Instance(testAttCCViCCD7Lvl1Instance);
CComplexityAttCCViCCD7Lvl3 testAttCCViCCD7Lvl3Instance(testAttCCViCCD7Lvl2Instance);
CComplexityAttCCViCCD7Lvl4 testAttCCViCCD7Lvl4Instance(testAttCCViCCD7Lvl3Instance);
CComplexityAttCCViCCD7Lvl5 testAttCCViCCD7Lvl5Instance(testAttCCViCCD7Lvl4Instance);
CComplexityAttCCViCCD7Lvl6 testAttCCViCCD7Lvl6Instance(testAttCCViCCD7Lvl5Instance);
CComplexityAttCCViCCD7Lvl7 testAttCCViCCD7Lvl7Instance(testAttCCViCCD7Lvl6Instance);


int FunctionEntryThreadA(int dummyValue)
{
	do
	{
		globalDataRaceVarForDifferentFunctionTest.x1 = globalDataRaceVarForDifferentFunctionTest.x1 + dummyValue;			//Violation - data race
	}while(true);
}

int FunctionEntryThreadB(int dummyValue)
{
	do
	{
		globalDataRaceVarForDifferentFunctionTest.x1 = globalDataRaceVarForDifferentFunctionTest.x1 + dummyValue;			//Violation - data race
	}while(true);
}

int FunctionEntryThreadTwoSame(int dummyValue)
{
	do
	{
		globalDataRaceVarForSameFunctionTest.x1 = globalDataRaceVarForSameFunctionTest.x1 + dummyValue;			//Violation - data race
	}while(true);
}

CAttThreadA::CAttThreadA()
{
}
void CAttThreadA::Spawn()
{
	threadSpawn((char*)"tAttThA", 1, 0, 10000, CAttThreadA::ThreadWrapper, (int)this);
}

int CAttThreadA::ThreadWrapper(int thisPointer)
{
	reinterpret_cast<CAttThreadA*>(&thisPointer)->Thread();
	return OK;
}
void CAttThreadA::Thread(void)
{
	unsigned int iterationCounter = 0U;
	do
	{
		//Data race
		testAttMD1Instance.DataRace(iterationCounter);
		testAttMD3Instance.DataRace(iterationCounter);
		testAttMD7Instance.DataRace(iterationCounter);


		testAttCCVcCCD1Lvl1Instance.DataRace(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.DataRace(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.DataRace(iterationCounter);

		testAttCCViCCD1Lvl1Instance.DataRace(iterationCounter);
		testAttCCViCCD3Lvl3Instance.DataRace(iterationCounter);
		testAttCCViCCD7Lvl7Instance.DataRace(iterationCounter);


		//Deadlock
		testAttMD1Instance.Deadlock(iterationCounter);
		testAttMD3Instance.Deadlock(iterationCounter);
		testAttMD7Instance.Deadlock(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.Deadlock(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.Deadlock(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.Deadlock(iterationCounter);

		testAttCCViCCD1Lvl1Instance.Deadlock(iterationCounter);
		testAttCCViCCD3Lvl3Instance.Deadlock(iterationCounter);
		testAttCCViCCD7Lvl7Instance.Deadlock(iterationCounter);

		//Livelock
		testAttMD1Instance.Livelock(iterationCounter);
		testAttMD3Instance.Livelock(iterationCounter);
		testAttMD7Instance.Livelock(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.Livelock(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.Livelock(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.Livelock(iterationCounter);

		testAttCCViCCD1Lvl1Instance.Livelock(iterationCounter);
		testAttCCViCCD3Lvl3Instance.Livelock(iterationCounter);
		testAttCCViCCD7Lvl7Instance.Livelock(iterationCounter);

		//Blocking suspension
		testAttMD1Instance.BlockingSuspension(iterationCounter);
		testAttMD3Instance.BlockingSuspension(iterationCounter);
		testAttMD7Instance.BlockingSuspension(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.BlockingSuspension(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.BlockingSuspension(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.BlockingSuspension(iterationCounter);

		testAttCCViCCD1Lvl1Instance.BlockingSuspension(iterationCounter);
		testAttCCViCCD3Lvl3Instance.BlockingSuspension(iterationCounter);
		testAttCCViCCD7Lvl7Instance.BlockingSuspension(iterationCounter);

		//Atomicity violation
		testAttMD1Instance.AtomicityViolation(iterationCounter);
		testAttMD3Instance.AtomicityViolation(iterationCounter);
		testAttMD7Instance.AtomicityViolation(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.AtomicityViolation(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.AtomicityViolation(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.AtomicityViolation(iterationCounter);

		testAttCCViCCD1Lvl1Instance.AtomicityViolation(iterationCounter);
		testAttCCViCCD3Lvl3Instance.AtomicityViolation(iterationCounter);
		testAttCCViCCD7Lvl7Instance.AtomicityViolation(iterationCounter);

		//Order violation
		//Dummy construction to get the two threads to use different methods that inturn exposes a order violation defect. 
		testAttMD1Instance.OrderViolationAssumedFirstExecution(iterationCounter);
		testAttMD3Instance.OrderViolationAssumedFirstExecution(iterationCounter);
		testAttMD7Instance.OrderViolationAssumedFirstExecution(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.OrderViolationAssumedFirstExecution(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.OrderViolationAssumedFirstExecution(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.OrderViolationAssumedFirstExecution(iterationCounter);

		testAttCCViCCD1Lvl1Instance.OrderViolationAssumedFirstExecution(iterationCounter);
		testAttCCViCCD3Lvl3Instance.OrderViolationAssumedFirstExecution(iterationCounter);
		testAttCCViCCD7Lvl7Instance.OrderViolationAssumedFirstExecution(iterationCounter);
		
		iterationCounter++;
	}while(true);
}



CAttThreadB::CAttThreadB()
{
}

void CAttThreadB::Spawn()
{
	threadSpawn((char*)"tAttThB", 1, 0, 10000, CAttThreadB::ThreadWrapper, (int)this);
}

int CAttThreadB::ThreadWrapper(int thisPointer)
{
	reinterpret_cast<CAttThreadB*>(&thisPointer)->Thread();
	return OK;
}
void CAttThreadB::Thread(void)
{
	unsigned int iterationCounter = 0U;
	do
	{
		//Data race
		testAttMD1Instance.DataRace(iterationCounter);
		testAttMD3Instance.DataRace(iterationCounter);
		testAttMD7Instance.DataRace(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.DataRace(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.DataRace(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.DataRace(iterationCounter);

		testAttCCViCCD1Lvl1Instance.DataRace(iterationCounter);
		testAttCCViCCD3Lvl3Instance.DataRace(iterationCounter);
		testAttCCViCCD7Lvl7Instance.DataRace(iterationCounter);


		//Deadlock
		testAttMD1Instance.Deadlock(iterationCounter);
		testAttMD3Instance.Deadlock(iterationCounter);
		testAttMD7Instance.Deadlock(iterationCounter);
		
		testAttCCVcCCD1Lvl1Instance.Deadlock(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.Deadlock(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.Deadlock(iterationCounter);

		testAttCCViCCD1Lvl1Instance.Deadlock(iterationCounter);
		testAttCCViCCD3Lvl3Instance.Deadlock(iterationCounter);
		testAttCCViCCD7Lvl7Instance.Deadlock(iterationCounter);

		//Livelock
		testAttMD1Instance.Livelock(iterationCounter);
		testAttMD3Instance.Livelock(iterationCounter);
		testAttMD7Instance.Livelock(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.Livelock(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.Livelock(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.Livelock(iterationCounter);

		testAttCCViCCD1Lvl1Instance.Livelock(iterationCounter);
		testAttCCViCCD3Lvl3Instance.Livelock(iterationCounter);
		testAttCCViCCD7Lvl7Instance.Livelock(iterationCounter);

		//Blocking suspension
		testAttMD1Instance.BlockingSuspension(iterationCounter);
		testAttMD3Instance.BlockingSuspension(iterationCounter);
		testAttMD7Instance.BlockingSuspension(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.BlockingSuspension(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.BlockingSuspension(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.BlockingSuspension(iterationCounter);

		testAttCCViCCD1Lvl1Instance.BlockingSuspension(iterationCounter);
		testAttCCViCCD3Lvl3Instance.BlockingSuspension(iterationCounter);
		testAttCCViCCD7Lvl7Instance.BlockingSuspension(iterationCounter);

		//Atomicity violation
		testAttMD1Instance.AtomicityViolation(iterationCounter);
		testAttMD3Instance.AtomicityViolation(iterationCounter);
		testAttMD7Instance.AtomicityViolation(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.AtomicityViolation(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.AtomicityViolation(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.AtomicityViolation(iterationCounter);

		testAttCCViCCD1Lvl1Instance.AtomicityViolation(iterationCounter);
		testAttCCViCCD3Lvl3Instance.AtomicityViolation(iterationCounter);
		testAttCCViCCD7Lvl7Instance.AtomicityViolation(iterationCounter);

		//Order violation
		//Dummy construction to get the two threads to use different methods that inturn exposes a order violation defect. 
		testAttMD1Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAttMD3Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAttMD7Instance.OrderViolationAssumedSecondExecution(iterationCounter);

		testAttCCVcCCD1Lvl1Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAttCCVcCCD3Lvl3Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAttCCVcCCD7Lvl7Instance.OrderViolationAssumedSecondExecution(iterationCounter);

		testAttCCViCCD1Lvl1Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAttCCViCCD3Lvl3Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAttCCViCCD7Lvl7Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		
		iterationCounter++;
			
	} while (true);
}



CActorThreadThread::CActorThreadThread() 
{
}

void CActorThreadThread::Spawn()
{
	threadSpawn((char*)"tDifFuncA", 1, 0, 10000, FunctionEntryThreadA, 1);
	threadSpawn((char*)"tDifFuncB", 1, 0, 10000, FunctionEntryThreadB, 2);

	threadSpawn((char*)"tSameFuncA", 1, 0, 10000, FunctionEntryThreadTwoSame, 3);
	threadSpawn((char*)"tSameFuncB", 1, 0, 10000, FunctionEntryThreadTwoSame, 4);

	m_threadA.Spawn();
	m_threadB.Spawn();
}





