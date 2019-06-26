#include "DummyRTOS.h"
#include "SharedData.h"
#include "CActorThreadInterrupt.h"
#include "Complexities/MethodDepth/CComplexityAtiMD1.h"
#include "Complexities/MethodDepth/CComplexityAtiMD3.h"
#include "Complexities/MethodDepth/CComplexityAtiMD7.h"
#include "Complexities/Composition/CCVcCCD1/CComplexityAtiCCVcCCD1Lvl1.h"
#include "Complexities/Composition/CCVcCCD3/CComplexityAtiCCVcCCD3Lvl3.h"
#include "Complexities/Composition/CCVcCCD7/CComplexityAtiCCVcCCD7Lvl7.h"

#include "Complexities/Composition/CCViCCD1/CComplexityAtiCCViCCD1Lvl0.h"
#include "Complexities/Composition/CCViCCD1/CComplexityAtiCCViCCD1Lvl1.h"

#include "Complexities/Composition/CCViCCD3/CComplexityAtiCCViCCD3Lvl0.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAtiCCViCCD3Lvl1.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAtiCCViCCD3Lvl2.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAtiCCViCCD3Lvl3.h"

#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl0.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl1.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl2.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl3.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl4.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl5.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl6.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAtiCCViCCD7Lvl7.h"

DATA_STRUCTURE_X1 globalDataRaceAtiVarForDifferentFunctionTest = emptyX1;

DATA_STRUCTURE_X1 gVarDataRaceAtiMD1ACr;					//Shared data structure, passed to CComplexityAtiMD1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiMD1ACr;		//Shared data structure, passed to CComplexityAtiMD1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiMD1ACr;	//Shared data structure, passed to CComplexityAtiMD1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiMD1ACr;		    //Shared data structure, passed to CComplexityAtiMD1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAtiMD3ACr;					//Shared data structure, passed to CComplexityAtiMD3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiMD3ACr;		//Shared data structure, passed to CComplexityAtiMD3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiMD3ACr;	//Shared data structure, passed to CComplexityAtiMD3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiMD3ACr;		    //Shared data structure, passed to CComplexityAtiMD3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAtiMD7ACr;					//Shared data structure, passed to CComplexityAtiMD7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiMD7ACr;		//Shared data structure, passed to CComplexityAtiMD7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiMD7ACr;	//Shared data structure, passed to CComplexityAtiMD7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiMD7ACr;		    //Shared data structure, passed to CComplexityAtiMD7 instance as a reference. For reference complexity test. 

CComplexityAtiMD1 testAtiMD1Instance(gVarDataRaceAtiMD1ACr,gVarDataRaceSemProtectedAtiMD1ACr,gVarDataRaceSemGuardProtectedAtiMD1ACr, gVarAtomicityViolationAtiMD1ACr);
CComplexityAtiMD3 testAtiMD3Instance(gVarDataRaceAtiMD3ACr,gVarDataRaceSemProtectedAtiMD3ACr,gVarDataRaceSemGuardProtectedAtiMD3ACr,gVarAtomicityViolationAtiMD3ACr);
CComplexityAtiMD7 testAtiMD7Instance(gVarDataRaceAtiMD7ACr,gVarDataRaceSemProtectedAtiMD7ACr,gVarDataRaceSemGuardProtectedAtiMD7ACr,gVarAtomicityViolationAtiMD7ACr);

DATA_STRUCTURE_X1 gVarDataRaceAtiVcCCD1ACr;					//Shared data structure, passed to CComplexityAtiCCVcCCD1Lvl1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiVcCCD1ACr;		//Shared data structure, passed to CComplexityAtiCCVcCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiVcCCD1ACr;	//Shared data structure, passed to CComplexityAtiCCVcCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiVcCCD1ACr;		    //Shared data structure, passed to CComplexityAtiCCVcCCD1Lvl1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAtiVcCCD3ACr;					//Shared data structure, passed to CComplexityAtiCCVcCCD3Lvl3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiVcCCD3ACr;		//Shared data structure, passed to CComplexityAtiCCVcCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiVcCCD3ACr;	//Shared data structure, passed to CComplexityAtiCCVcCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiVcCCD3ACr;		    //Shared data structure, passed to CComplexityAtiCCVcCCD3Lvl3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAtiVcCCD7ACr;					//Shared data structure, passed to CComplexityAtiCCVcCCD7Lvl7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiVcCCD7ACr;		//Shared data structure, passed to CComplexityAtiCCVcCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiVcCCD7ACr;	//Shared data structure, passed to CComplexityAtiCCVcCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiVcCCD7Cr;		    //Shared data structure, passed to CComplexityAtiCCVcCCD7Lvl7 instance as a reference. For reference complexity test. 

CComplexityAtiCCVcCCD1Lvl1 testAtiCCVcCCD1Lvl1Instance(gVarDataRaceAtiVcCCD1ACr,gVarDataRaceSemProtectedAtiVcCCD1ACr,gVarDataRaceSemGuardProtectedAtiVcCCD1ACr,gVarAtomicityViolationAtiVcCCD1ACr);
CComplexityAtiCCVcCCD3Lvl3 testAtiCCVcCCD3Lvl3Instance(gVarDataRaceAtiVcCCD3ACr,gVarDataRaceSemProtectedAtiVcCCD3ACr,gVarDataRaceSemGuardProtectedAtiVcCCD3ACr,gVarAtomicityViolationAtiVcCCD3ACr);
CComplexityAtiCCVcCCD7Lvl7 testAtiCCVcCCD7Lvl7Instance(gVarDataRaceAtiVcCCD7ACr,gVarDataRaceSemProtectedAtiVcCCD7ACr,gVarDataRaceSemGuardProtectedAtiVcCCD7ACr,gVarAtomicityViolationAtiVcCCD7Cr);

DATA_STRUCTURE_X1 gVarDataRaceAtiViCCD1ACr;					//Shared data structure, passed to CComplexityAtiCCViCCD1Lvl1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiViCCD1ACr;		//Shared data structure, passed to CComplexityAtiCCViCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiViCCD1ACr;	//Shared data structure, passed to CComplexityAtiCCViCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiViCCD1ACr;		    //Shared data structure, passed to CComplexityAtiCCViCCD1Lvl1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAtiViCCD3ACr;					//Shared data structure, passed to CComplexityAtiCCViCCD3Lvl3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiViCCD3ACr;		//Shared data structure, passed to CComplexityAtiCCViCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiViCCD3ACr;	//Shared data structure, passed to CComplexityAtiCCViCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiViCCD3ACr;		    //Shared data structure, passed to CComplexityAtiCCViCCD3Lvl3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAtiViCCD7ACr;					//Shared data structure, passed to CComplexityAtiCCViCCD7Lvl7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAtiViCCD7ACr;		//Shared data structure, passed to CComplexityAtiCCViCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAtiViCCD7ACr;	//Shared data structure, passed to CComplexityAtiCCViCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAtiViCCD7ACr;		    //Shared data structure, passed to CComplexityAtiCCViCCD7Lvl7 instance as a reference. For reference complexity test. 
CComplexityAtiCCViCCD1Lvl0 testAtiCCViCCD1Lvl0Instance(gVarDataRaceAtiViCCD1ACr,gVarDataRaceSemProtectedAtiViCCD1ACr,gVarDataRaceSemGuardProtectedAtiViCCD1ACr,gVarAtomicityViolationAtiViCCD1ACr);
CComplexityAtiCCViCCD1Lvl1 testAtiCCViCCD1Lvl1Instance(testAtiCCViCCD1Lvl0Instance);
CComplexityAtiCCViCCD3Lvl0 testAtiCCViCCD3Lvl0Instance(gVarDataRaceAtiViCCD3ACr,gVarDataRaceSemProtectedAtiViCCD3ACr,gVarDataRaceSemGuardProtectedAtiViCCD3ACr,gVarAtomicityViolationAtiViCCD3ACr);
CComplexityAtiCCViCCD3Lvl1 testAtiCCViCCD3Lvl1Instance(testAtiCCViCCD3Lvl0Instance);
CComplexityAtiCCViCCD3Lvl2 testAtiCCViCCD3Lvl2Instance(testAtiCCViCCD3Lvl1Instance);
CComplexityAtiCCViCCD3Lvl3 testAtiCCViCCD3Lvl3Instance(testAtiCCViCCD3Lvl2Instance);
CComplexityAtiCCViCCD7Lvl0 testAtiCCViCCD7Lvl0Instance(gVarDataRaceAtiViCCD7ACr,gVarDataRaceSemProtectedAtiViCCD7ACr,gVarDataRaceSemGuardProtectedAtiViCCD7ACr,gVarAtomicityViolationAtiViCCD7ACr);
CComplexityAtiCCViCCD7Lvl1 testAtiCCViCCD7Lvl1Instance(testAtiCCViCCD7Lvl0Instance);
CComplexityAtiCCViCCD7Lvl2 testAtiCCViCCD7Lvl2Instance(testAtiCCViCCD7Lvl1Instance);
CComplexityAtiCCViCCD7Lvl3 testAtiCCViCCD7Lvl3Instance(testAtiCCViCCD7Lvl2Instance);
CComplexityAtiCCViCCD7Lvl4 testAtiCCViCCD7Lvl4Instance(testAtiCCViCCD7Lvl3Instance);
CComplexityAtiCCViCCD7Lvl5 testAtiCCViCCD7Lvl5Instance(testAtiCCViCCD7Lvl4Instance);
CComplexityAtiCCViCCD7Lvl6 testAtiCCViCCD7Lvl6Instance(testAtiCCViCCD7Lvl5Instance);
CComplexityAtiCCViCCD7Lvl7 testAtiCCViCCD7Lvl7Instance(testAtiCCViCCD7Lvl6Instance);


void FunctionEntryInterrupt(int dummyValue)
{
	globalDataRaceAtiVarForDifferentFunctionTest.x1 = globalDataRaceAtiVarForDifferentFunctionTest.x1 + dummyValue;			//Violation - data race
}

int FunctionEntryThread(int dummyValue)
{
	do
	{
		globalDataRaceAtiVarForDifferentFunctionTest.x1 = globalDataRaceAtiVarForDifferentFunctionTest.x1 + dummyValue;			//Violation - data race
	}while(true);
}



CAtiInterrupt::CAtiInterrupt()
{
}

void CAtiInterrupt::Connect()
{
	const unsigned int dummyVectorAddr = 1;
	interruptConnect((void*)dummyVectorAddr, CAtiInterrupt::InterruptWrapper, (int)this);
	interruptEnable(dummyVectorAddr);
}

void CAtiInterrupt::InterruptWrapper(int thisPointer)
{
	reinterpret_cast<CAtiInterrupt*>(&thisPointer)->ISR();
}
void CAtiInterrupt::ISR(void)
{
	static unsigned int callCnt = 0U;

	//Data race
	testAtiMD1Instance.DataRace(callCnt);
	testAtiMD3Instance.DataRace(callCnt);
	testAtiMD7Instance.DataRace(callCnt);


	testAtiCCVcCCD1Lvl1Instance.DataRace(callCnt);
	testAtiCCVcCCD3Lvl3Instance.DataRace(callCnt);
	testAtiCCVcCCD7Lvl7Instance.DataRace(callCnt);

	testAtiCCViCCD1Lvl1Instance.DataRace(callCnt);
	testAtiCCViCCD3Lvl3Instance.DataRace(callCnt);
	testAtiCCViCCD7Lvl7Instance.DataRace(callCnt);


	//Deadlock
	testAtiMD1Instance.Deadlock(callCnt);
	testAtiMD3Instance.Deadlock(callCnt);
	testAtiMD7Instance.Deadlock(callCnt);

	testAtiCCVcCCD1Lvl1Instance.Deadlock(callCnt);
	testAtiCCVcCCD3Lvl3Instance.Deadlock(callCnt);
	testAtiCCVcCCD7Lvl7Instance.Deadlock(callCnt);

	testAtiCCViCCD1Lvl1Instance.Deadlock(callCnt);
	testAtiCCViCCD3Lvl3Instance.Deadlock(callCnt);
	testAtiCCViCCD7Lvl7Instance.Deadlock(callCnt);

	//Livelock
	testAtiMD1Instance.Livelock(callCnt);
	testAtiMD3Instance.Livelock(callCnt);
	testAtiMD7Instance.Livelock(callCnt);

	testAtiCCVcCCD1Lvl1Instance.Livelock(callCnt);
	testAtiCCVcCCD3Lvl3Instance.Livelock(callCnt);
	testAtiCCVcCCD7Lvl7Instance.Livelock(callCnt);

	testAtiCCViCCD1Lvl1Instance.Livelock(callCnt);
	testAtiCCViCCD3Lvl3Instance.Livelock(callCnt);
	testAtiCCViCCD7Lvl7Instance.Livelock(callCnt);

	//Blocking suspension
	testAtiMD1Instance.BlockingSuspension(callCnt);
	testAtiMD3Instance.BlockingSuspension(callCnt);
	testAtiMD7Instance.BlockingSuspension(callCnt);

	testAtiCCVcCCD1Lvl1Instance.BlockingSuspension(callCnt);
	testAtiCCVcCCD3Lvl3Instance.BlockingSuspension(callCnt);
	testAtiCCVcCCD7Lvl7Instance.BlockingSuspension(callCnt);

	testAtiCCViCCD1Lvl1Instance.BlockingSuspension(callCnt);
	testAtiCCViCCD3Lvl3Instance.BlockingSuspension(callCnt);
	testAtiCCViCCD7Lvl7Instance.BlockingSuspension(callCnt);

	//Atomicity violation
	testAtiMD1Instance.AtomicityViolation(callCnt);
	testAtiMD3Instance.AtomicityViolation(callCnt);
	testAtiMD7Instance.AtomicityViolation(callCnt);

	testAtiCCVcCCD1Lvl1Instance.AtomicityViolation(callCnt);
	testAtiCCVcCCD3Lvl3Instance.AtomicityViolation(callCnt);
	testAtiCCVcCCD7Lvl7Instance.AtomicityViolation(callCnt);

	testAtiCCViCCD1Lvl1Instance.AtomicityViolation(callCnt);
	testAtiCCViCCD3Lvl3Instance.AtomicityViolation(callCnt);
	testAtiCCViCCD7Lvl7Instance.AtomicityViolation(callCnt);

	//Order violation
	//Dummy construction to get the two threads to use different methods that inturn exposes a order violation defect. 
	testAtiMD1Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAtiMD3Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAtiMD7Instance.OrderViolationAssumedFirstExecution(callCnt);

	testAtiCCVcCCD1Lvl1Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAtiCCVcCCD3Lvl3Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAtiCCVcCCD7Lvl7Instance.OrderViolationAssumedFirstExecution(callCnt);

	testAtiCCViCCD1Lvl1Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAtiCCViCCD3Lvl3Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAtiCCViCCD7Lvl7Instance.OrderViolationAssumedFirstExecution(callCnt);
		
	callCnt++;
}



CAtiThread::CAtiThread()
{
}

void CAtiThread::Spawn()
{
	threadSpawn((char*)"tAtiThA", 1, 0, 10000, CAtiThread::ThreadWrapper, (int)this);
}

int CAtiThread::ThreadWrapper(int thisPointer)
{
	reinterpret_cast<CAtiThread*>(&thisPointer)->Thread();
	return OK;
}
void CAtiThread::Thread(void)
{
	unsigned int iterationCounter = 0U;
	do
	{
		//Data race
		testAtiMD1Instance.DataRace(iterationCounter);
		testAtiMD3Instance.DataRace(iterationCounter);
		testAtiMD7Instance.DataRace(iterationCounter);

		testAtiCCVcCCD1Lvl1Instance.DataRace(iterationCounter);
		testAtiCCVcCCD3Lvl3Instance.DataRace(iterationCounter);
		testAtiCCVcCCD7Lvl7Instance.DataRace(iterationCounter);

		testAtiCCViCCD1Lvl1Instance.DataRace(iterationCounter);
		testAtiCCViCCD3Lvl3Instance.DataRace(iterationCounter);
		testAtiCCViCCD7Lvl7Instance.DataRace(iterationCounter);


		//Deadlock
		testAtiMD1Instance.Deadlock(iterationCounter);
		testAtiMD3Instance.Deadlock(iterationCounter);
		testAtiMD7Instance.Deadlock(iterationCounter);
		
		testAtiCCVcCCD1Lvl1Instance.Deadlock(iterationCounter);
		testAtiCCVcCCD3Lvl3Instance.Deadlock(iterationCounter);
		testAtiCCVcCCD7Lvl7Instance.Deadlock(iterationCounter);

		testAtiCCViCCD1Lvl1Instance.Deadlock(iterationCounter);
		testAtiCCViCCD3Lvl3Instance.Deadlock(iterationCounter);
		testAtiCCViCCD7Lvl7Instance.Deadlock(iterationCounter);

		//Livelock
		testAtiMD1Instance.Livelock(iterationCounter);
		testAtiMD3Instance.Livelock(iterationCounter);
		testAtiMD7Instance.Livelock(iterationCounter);

		testAtiCCVcCCD1Lvl1Instance.Livelock(iterationCounter);
		testAtiCCVcCCD3Lvl3Instance.Livelock(iterationCounter);
		testAtiCCVcCCD7Lvl7Instance.Livelock(iterationCounter);

		testAtiCCViCCD1Lvl1Instance.Livelock(iterationCounter);
		testAtiCCViCCD3Lvl3Instance.Livelock(iterationCounter);
		testAtiCCViCCD7Lvl7Instance.Livelock(iterationCounter);

		//Blocking suspension
		testAtiMD1Instance.BlockingSuspension(iterationCounter);
		testAtiMD3Instance.BlockingSuspension(iterationCounter);
		testAtiMD7Instance.BlockingSuspension(iterationCounter);

		testAtiCCVcCCD1Lvl1Instance.BlockingSuspension(iterationCounter);
		testAtiCCVcCCD3Lvl3Instance.BlockingSuspension(iterationCounter);
		testAtiCCVcCCD7Lvl7Instance.BlockingSuspension(iterationCounter);

		testAtiCCViCCD1Lvl1Instance.BlockingSuspension(iterationCounter);
		testAtiCCViCCD3Lvl3Instance.BlockingSuspension(iterationCounter);
		testAtiCCViCCD7Lvl7Instance.BlockingSuspension(iterationCounter);

		//Atomicity violation
		testAtiMD1Instance.AtomicityViolation(iterationCounter);
		testAtiMD3Instance.AtomicityViolation(iterationCounter);
		testAtiMD7Instance.AtomicityViolation(iterationCounter);

		testAtiCCVcCCD1Lvl1Instance.AtomicityViolation(iterationCounter);
		testAtiCCVcCCD3Lvl3Instance.AtomicityViolation(iterationCounter);
		testAtiCCVcCCD7Lvl7Instance.AtomicityViolation(iterationCounter);

		testAtiCCViCCD1Lvl1Instance.AtomicityViolation(iterationCounter);
		testAtiCCViCCD3Lvl3Instance.AtomicityViolation(iterationCounter);
		testAtiCCViCCD7Lvl7Instance.AtomicityViolation(iterationCounter);

		//Order violation
		//Dummy construction to get the two threads to use different methods that inturn exposes a order violation defect. 
		testAtiMD1Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAtiMD3Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAtiMD7Instance.OrderViolationAssumedSecondExecution(iterationCounter);

		testAtiCCVcCCD1Lvl1Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAtiCCVcCCD3Lvl3Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAtiCCVcCCD7Lvl7Instance.OrderViolationAssumedSecondExecution(iterationCounter);

		testAtiCCViCCD1Lvl1Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAtiCCViCCD3Lvl3Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		testAtiCCViCCD7Lvl7Instance.OrderViolationAssumedSecondExecution(iterationCounter);
		
		iterationCounter++;
			
	} while (true);
}



CActorThreadInterrupt::CActorThreadInterrupt() 
{
}

void CActorThreadInterrupt::SpawnThreadConnectInterrupt()
{
	const int dummyVectorAddr = 2;
	
	interruptConnect((void*)dummyVectorAddr, FunctionEntryInterrupt, 1);
	interruptEnable(dummyVectorAddr);
	
	threadSpawn((char*)"tDifFuncB", 1, 0, 10000, FunctionEntryThread, 2);

	m_interrupt.Connect();
	m_thread.Spawn();
}





