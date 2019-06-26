#include "DummyRTOS.h"
#include "SharedData.h"
#include "CActorInterruptInterrupt.h"
#include "Complexities/MethodDepth/CComplexityAiiMD1.h"
#include "Complexities/MethodDepth/CComplexityAiiMD3.h"
#include "Complexities/MethodDepth/CComplexityAiiMD7.h"
#include "Complexities/Composition/CCVcCCD1/CComplexityAiiCCVcCCD1Lvl1.h"
#include "Complexities/Composition/CCVcCCD3/CComplexityAiiCCVcCCD3Lvl3.h"
#include "Complexities/Composition/CCVcCCD7/CComplexityAiiCCVcCCD7Lvl7.h"

#include "Complexities/Composition/CCViCCD1/CComplexityAiiCCViCCD1Lvl0.h"
#include "Complexities/Composition/CCViCCD1/CComplexityAiiCCViCCD1Lvl1.h"

#include "Complexities/Composition/CCViCCD3/CComplexityAiiCCViCCD3Lvl0.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAiiCCViCCD3Lvl1.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAiiCCViCCD3Lvl2.h"
#include "Complexities/Composition/CCViCCD3/CComplexityAiiCCViCCD3Lvl3.h"

#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl0.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl1.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl2.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl3.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl4.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl5.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl6.h"
#include "Complexities/Composition/CCViCCD7/CComplexityAiiCCViCCD7Lvl7.h"

DATA_STRUCTURE_X1 globalDataRaceAiiVarForDifferentFunctionTest = emptyX1;
DATA_STRUCTURE_X1 globalDataRaceAiiVarForSameFunctionTest = emptyX1;

DATA_STRUCTURE_X1 gVarDataRaceAiiMD1ACr;					//Shared data structure, passed to CComplexityAiiMD1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiMD1ACr;		//Shared data structure, passed to CComplexityAiiMD1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiMD1ACr;	//Shared data structure, passed to CComplexityAiiMD1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiMD1ACr;		    //Shared data structure, passed to CComplexityAiiMD1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAiiMD3ACr;					//Shared data structure, passed to CComplexityAiiMD3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiMD3ACr;		//Shared data structure, passed to CComplexityAiiMD3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiMD3ACr;	//Shared data structure, passed to CComplexityAiiMD3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiMD3ACr;		    //Shared data structure, passed to CComplexityAiiMD3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAiiMD7ACr;					//Shared data structure, passed to CComplexityAiiMD7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiMD7ACr;		//Shared data structure, passed to CComplexityAiiMD7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiMD7ACr;	//Shared data structure, passed to CComplexityAiiMD7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiMD7ACr;		    //Shared data structure, passed to CComplexityAiiMD7 instance as a reference. For reference complexity test. 

CComplexityAiiMD1 testAiiMD1Instance(gVarDataRaceAiiMD1ACr,gVarDataRaceSemProtectedAiiMD1ACr,gVarDataRaceSemGuardProtectedAiiMD1ACr, gVarAtomicityViolationAiiMD1ACr);
CComplexityAiiMD3 testAiiMD3Instance(gVarDataRaceAiiMD3ACr,gVarDataRaceSemProtectedAiiMD3ACr,gVarDataRaceSemGuardProtectedAiiMD3ACr,gVarAtomicityViolationAiiMD3ACr);
CComplexityAiiMD7 testAiiMD7Instance(gVarDataRaceAiiMD7ACr,gVarDataRaceSemProtectedAiiMD7ACr,gVarDataRaceSemGuardProtectedAiiMD7ACr,gVarAtomicityViolationAiiMD7ACr);

DATA_STRUCTURE_X1 gVarDataRaceAiiVcCCD1ACr;					//Shared data structure, passed to CComplexityAiiCCVcCCD1Lvl1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiVcCCD1ACr;		//Shared data structure, passed to CComplexityAiiCCVcCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiVcCCD1ACr;	//Shared data structure, passed to CComplexityAiiCCVcCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiVcCCD1ACr;		    //Shared data structure, passed to CComplexityAiiCCVcCCD1Lvl1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAiiVcCCD3ACr;					//Shared data structure, passed to CComplexityAiiCCVcCCD3Lvl3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiVcCCD3ACr;		//Shared data structure, passed to CComplexityAiiCCVcCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiVcCCD3ACr;	//Shared data structure, passed to CComplexityAiiCCVcCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiVcCCD3ACr;		    //Shared data structure, passed to CComplexityAiiCCVcCCD3Lvl3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAiiVcCCD7ACr;					//Shared data structure, passed to CComplexityAiiCCVcCCD7Lvl7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiVcCCD7ACr;		//Shared data structure, passed to CComplexityAiiCCVcCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiVcCCD7ACr;	//Shared data structure, passed to CComplexityAiiCCVcCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiVcCCD7Cr;		    //Shared data structure, passed to CComplexityAiiCCVcCCD7Lvl7 instance as a reference. For reference complexity test. 

CComplexityAiiCCVcCCD1Lvl1 testAiiCCVcCCD1Lvl1Instance(gVarDataRaceAiiVcCCD1ACr,gVarDataRaceSemProtectedAiiVcCCD1ACr,gVarDataRaceSemGuardProtectedAiiVcCCD1ACr,gVarAtomicityViolationAiiVcCCD1ACr);
CComplexityAiiCCVcCCD3Lvl3 testAiiCCVcCCD3Lvl3Instance(gVarDataRaceAiiVcCCD3ACr,gVarDataRaceSemProtectedAiiVcCCD3ACr,gVarDataRaceSemGuardProtectedAiiVcCCD3ACr,gVarAtomicityViolationAiiVcCCD3ACr);
CComplexityAiiCCVcCCD7Lvl7 testAiiCCVcCCD7Lvl7Instance(gVarDataRaceAiiVcCCD7ACr,gVarDataRaceSemProtectedAiiVcCCD7ACr,gVarDataRaceSemGuardProtectedAiiVcCCD7ACr,gVarAtomicityViolationAiiVcCCD7Cr);

DATA_STRUCTURE_X1 gVarDataRaceAiiViCCD1ACr;					//Shared data structure, passed to CComplexityAiiCCViCCD1Lvl1 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiViCCD1ACr;		//Shared data structure, passed to CComplexityAiiCCViCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiViCCD1ACr;	//Shared data structure, passed to CComplexityAiiCCViCCD1Lvl1 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiViCCD1ACr;		    //Shared data structure, passed to CComplexityAiiCCViCCD1Lvl1 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAiiViCCD3ACr;					//Shared data structure, passed to CComplexityAiiCCViCCD3Lvl3 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiViCCD3ACr;		//Shared data structure, passed to CComplexityAiiCCViCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiViCCD3ACr;	//Shared data structure, passed to CComplexityAiiCCViCCD3Lvl3 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiViCCD3ACr;		    //Shared data structure, passed to CComplexityAiiCCViCCD3Lvl3 instance as a reference. For reference complexity test. 

DATA_STRUCTURE_X1 gVarDataRaceAiiViCCD7ACr;					//Shared data structure, passed to CComplexityAiiCCViCCD7Lvl7 instance as a reference. For reference complexity test. 
DATA_STRUCTURE_X1 gVarDataRaceSemProtectedAiiViCCD7ACr;		//Shared data structure, passed to CComplexityAiiCCViCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarDataRaceSemGuardProtectedAiiViCCD7ACr;	//Shared data structure, passed to CComplexityAiiCCViCCD7Lvl7 instance as a reference. For reference complexity test.
DATA_STRUCTURE_X1 gVarAtomicityViolationAiiViCCD7ACr;		    //Shared data structure, passed to CComplexityAiiCCViCCD7Lvl7 instance as a reference. For reference complexity test. 
CComplexityAiiCCViCCD1Lvl0 testAiiCCViCCD1Lvl0Instance(gVarDataRaceAiiViCCD1ACr,gVarDataRaceSemProtectedAiiViCCD1ACr,gVarDataRaceSemGuardProtectedAiiViCCD1ACr,gVarAtomicityViolationAiiViCCD1ACr);
CComplexityAiiCCViCCD1Lvl1 testAiiCCViCCD1Lvl1Instance(testAiiCCViCCD1Lvl0Instance);
CComplexityAiiCCViCCD3Lvl0 testAiiCCViCCD3Lvl0Instance(gVarDataRaceAiiViCCD3ACr,gVarDataRaceSemProtectedAiiViCCD3ACr,gVarDataRaceSemGuardProtectedAiiViCCD3ACr,gVarAtomicityViolationAiiViCCD3ACr);
CComplexityAiiCCViCCD3Lvl1 testAiiCCViCCD3Lvl1Instance(testAiiCCViCCD3Lvl0Instance);
CComplexityAiiCCViCCD3Lvl2 testAiiCCViCCD3Lvl2Instance(testAiiCCViCCD3Lvl1Instance);
CComplexityAiiCCViCCD3Lvl3 testAiiCCViCCD3Lvl3Instance(testAiiCCViCCD3Lvl2Instance);
CComplexityAiiCCViCCD7Lvl0 testAiiCCViCCD7Lvl0Instance(gVarDataRaceAiiViCCD7ACr,gVarDataRaceSemProtectedAiiViCCD7ACr,gVarDataRaceSemGuardProtectedAiiViCCD7ACr,gVarAtomicityViolationAiiViCCD7ACr);
CComplexityAiiCCViCCD7Lvl1 testAiiCCViCCD7Lvl1Instance(testAiiCCViCCD7Lvl0Instance);
CComplexityAiiCCViCCD7Lvl2 testAiiCCViCCD7Lvl2Instance(testAiiCCViCCD7Lvl1Instance);
CComplexityAiiCCViCCD7Lvl3 testAiiCCViCCD7Lvl3Instance(testAiiCCViCCD7Lvl2Instance);
CComplexityAiiCCViCCD7Lvl4 testAiiCCViCCD7Lvl4Instance(testAiiCCViCCD7Lvl3Instance);
CComplexityAiiCCViCCD7Lvl5 testAiiCCViCCD7Lvl5Instance(testAiiCCViCCD7Lvl4Instance);
CComplexityAiiCCViCCD7Lvl6 testAiiCCViCCD7Lvl6Instance(testAiiCCViCCD7Lvl5Instance);
CComplexityAiiCCViCCD7Lvl7 testAiiCCViCCD7Lvl7Instance(testAiiCCViCCD7Lvl6Instance);


void FunctionEntryInterruptTwoSame(int dummyValue)
{
	globalDataRaceAiiVarForSameFunctionTest.x1 = globalDataRaceAiiVarForSameFunctionTest.x1 + dummyValue;			//Violation - data race
}

void FunctionEntryInterruptA(int dummyValue)
{
	globalDataRaceAiiVarForDifferentFunctionTest.x1 = globalDataRaceAiiVarForDifferentFunctionTest.x1 + dummyValue;			//Violation - data race
}

void FunctionEntryInterruptB(int dummyValue)
{
	globalDataRaceAiiVarForDifferentFunctionTest.x1 = globalDataRaceAiiVarForDifferentFunctionTest.x1 + dummyValue;			//Violation - data race
}



CAiiInterruptA::CAiiInterruptA()
{
}

void CAiiInterruptA::Connect()
{
	const unsigned int dummyVectorAddr = 1;
	interruptConnect((void*)dummyVectorAddr, CAiiInterruptA::InterruptWrapper, (int)this);
	interruptEnable(dummyVectorAddr);
}

void CAiiInterruptA::InterruptWrapper(int thisPointer)
{
	reinterpret_cast<CAiiInterruptA*>(&thisPointer)->ISR();
}
void CAiiInterruptA::ISR(void)
{
	static unsigned int callCnt = 0U;

	//Data race
	testAiiMD1Instance.DataRace(callCnt);
	testAiiMD3Instance.DataRace(callCnt);
	testAiiMD7Instance.DataRace(callCnt);


	testAiiCCVcCCD1Lvl1Instance.DataRace(callCnt);
	testAiiCCVcCCD3Lvl3Instance.DataRace(callCnt);
	testAiiCCVcCCD7Lvl7Instance.DataRace(callCnt);

	testAiiCCViCCD1Lvl1Instance.DataRace(callCnt);
	testAiiCCViCCD3Lvl3Instance.DataRace(callCnt);
	testAiiCCViCCD7Lvl7Instance.DataRace(callCnt);


	//Deadlock
	testAiiMD1Instance.Deadlock(callCnt);
	testAiiMD3Instance.Deadlock(callCnt);
	testAiiMD7Instance.Deadlock(callCnt);

	testAiiCCVcCCD1Lvl1Instance.Deadlock(callCnt);
	testAiiCCVcCCD3Lvl3Instance.Deadlock(callCnt);
	testAiiCCVcCCD7Lvl7Instance.Deadlock(callCnt);

	testAiiCCViCCD1Lvl1Instance.Deadlock(callCnt);
	testAiiCCViCCD3Lvl3Instance.Deadlock(callCnt);
	testAiiCCViCCD7Lvl7Instance.Deadlock(callCnt);

	//Livelock
	testAiiMD1Instance.Livelock(callCnt);
	testAiiMD3Instance.Livelock(callCnt);
	testAiiMD7Instance.Livelock(callCnt);

	testAiiCCVcCCD1Lvl1Instance.Livelock(callCnt);
	testAiiCCVcCCD3Lvl3Instance.Livelock(callCnt);
	testAiiCCVcCCD7Lvl7Instance.Livelock(callCnt);

	testAiiCCViCCD1Lvl1Instance.Livelock(callCnt);
	testAiiCCViCCD3Lvl3Instance.Livelock(callCnt);
	testAiiCCViCCD7Lvl7Instance.Livelock(callCnt);

	//Blocking suspension
	testAiiMD1Instance.BlockingSuspension(callCnt);
	testAiiMD3Instance.BlockingSuspension(callCnt);
	testAiiMD7Instance.BlockingSuspension(callCnt);

	testAiiCCVcCCD1Lvl1Instance.BlockingSuspension(callCnt);
	testAiiCCVcCCD3Lvl3Instance.BlockingSuspension(callCnt);
	testAiiCCVcCCD7Lvl7Instance.BlockingSuspension(callCnt);

	testAiiCCViCCD1Lvl1Instance.BlockingSuspension(callCnt);
	testAiiCCViCCD3Lvl3Instance.BlockingSuspension(callCnt);
	testAiiCCViCCD7Lvl7Instance.BlockingSuspension(callCnt);

	//Atomicity violation
	testAiiMD1Instance.AtomicityViolation(callCnt);
	testAiiMD3Instance.AtomicityViolation(callCnt);
	testAiiMD7Instance.AtomicityViolation(callCnt);

	testAiiCCVcCCD1Lvl1Instance.AtomicityViolation(callCnt);
	testAiiCCVcCCD3Lvl3Instance.AtomicityViolation(callCnt);
	testAiiCCVcCCD7Lvl7Instance.AtomicityViolation(callCnt);

	testAiiCCViCCD1Lvl1Instance.AtomicityViolation(callCnt);
	testAiiCCViCCD3Lvl3Instance.AtomicityViolation(callCnt);
	testAiiCCViCCD7Lvl7Instance.AtomicityViolation(callCnt);

	//Order violation
	//Dummy construction to get the two threads to use different methods that inturn exposes a order violation defect. 
	testAiiMD1Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAiiMD3Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAiiMD7Instance.OrderViolationAssumedFirstExecution(callCnt);

	testAiiCCVcCCD1Lvl1Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAiiCCVcCCD3Lvl3Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAiiCCVcCCD7Lvl7Instance.OrderViolationAssumedFirstExecution(callCnt);

	testAiiCCViCCD1Lvl1Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAiiCCViCCD3Lvl3Instance.OrderViolationAssumedFirstExecution(callCnt);
	testAiiCCViCCD7Lvl7Instance.OrderViolationAssumedFirstExecution(callCnt);
		
	callCnt++;
}

CAiiInterruptB::CAiiInterruptB()
{
}

void CAiiInterruptB::Connect()
{
	const unsigned int dummyVectorAddr = 1;
	interruptConnect((void*)dummyVectorAddr, CAiiInterruptB::InterruptWrapper, (int)this);
	interruptEnable(dummyVectorAddr);
}

void CAiiInterruptB::InterruptWrapper(int thisPointer)
{
	reinterpret_cast<CAiiInterruptB*>(&thisPointer)->ISR();
}


void CAiiInterruptB::ISR(void)
{
	static unsigned int callCnt = 0U;
	//Data race
	testAiiMD1Instance.DataRace(callCnt);
	testAiiMD3Instance.DataRace(callCnt);
	testAiiMD7Instance.DataRace(callCnt);

	testAiiCCVcCCD1Lvl1Instance.DataRace(callCnt);
	testAiiCCVcCCD3Lvl3Instance.DataRace(callCnt);
	testAiiCCVcCCD7Lvl7Instance.DataRace(callCnt);

	testAiiCCViCCD1Lvl1Instance.DataRace(callCnt);
	testAiiCCViCCD3Lvl3Instance.DataRace(callCnt);
	testAiiCCViCCD7Lvl7Instance.DataRace(callCnt);


	//Deadlock
	testAiiMD1Instance.Deadlock(callCnt);
	testAiiMD3Instance.Deadlock(callCnt);
	testAiiMD7Instance.Deadlock(callCnt);
		
	testAiiCCVcCCD1Lvl1Instance.Deadlock(callCnt);
	testAiiCCVcCCD3Lvl3Instance.Deadlock(callCnt);
	testAiiCCVcCCD7Lvl7Instance.Deadlock(callCnt);

	testAiiCCViCCD1Lvl1Instance.Deadlock(callCnt);
	testAiiCCViCCD3Lvl3Instance.Deadlock(callCnt);
	testAiiCCViCCD7Lvl7Instance.Deadlock(callCnt);

	//Livelock
	testAiiMD1Instance.Livelock(callCnt);
	testAiiMD3Instance.Livelock(callCnt);
	testAiiMD7Instance.Livelock(callCnt);

	testAiiCCVcCCD1Lvl1Instance.Livelock(callCnt);
	testAiiCCVcCCD3Lvl3Instance.Livelock(callCnt);
	testAiiCCVcCCD7Lvl7Instance.Livelock(callCnt);

	testAiiCCViCCD1Lvl1Instance.Livelock(callCnt);
	testAiiCCViCCD3Lvl3Instance.Livelock(callCnt);
	testAiiCCViCCD7Lvl7Instance.Livelock(callCnt);

	//Blocking suspension
	testAiiMD1Instance.BlockingSuspension(callCnt);
	testAiiMD3Instance.BlockingSuspension(callCnt);
	testAiiMD7Instance.BlockingSuspension(callCnt);

	testAiiCCVcCCD1Lvl1Instance.BlockingSuspension(callCnt);
	testAiiCCVcCCD3Lvl3Instance.BlockingSuspension(callCnt);
	testAiiCCVcCCD7Lvl7Instance.BlockingSuspension(callCnt);

	testAiiCCViCCD1Lvl1Instance.BlockingSuspension(callCnt);
	testAiiCCViCCD3Lvl3Instance.BlockingSuspension(callCnt);
	testAiiCCViCCD7Lvl7Instance.BlockingSuspension(callCnt);

	//Atomicity violation
	testAiiMD1Instance.AtomicityViolation(callCnt);
	testAiiMD3Instance.AtomicityViolation(callCnt);
	testAiiMD7Instance.AtomicityViolation(callCnt);

	testAiiCCVcCCD1Lvl1Instance.AtomicityViolation(callCnt);
	testAiiCCVcCCD3Lvl3Instance.AtomicityViolation(callCnt);
	testAiiCCVcCCD7Lvl7Instance.AtomicityViolation(callCnt);

	testAiiCCViCCD1Lvl1Instance.AtomicityViolation(callCnt);
	testAiiCCViCCD3Lvl3Instance.AtomicityViolation(callCnt);
	testAiiCCViCCD7Lvl7Instance.AtomicityViolation(callCnt);

	//Order violation
	//Dummy construction to get the two threads to use different methods that inturn exposes a order violation defect. 
	testAiiMD1Instance.OrderViolationAssumedSecondExecution(callCnt);
	testAiiMD3Instance.OrderViolationAssumedSecondExecution(callCnt);
	testAiiMD7Instance.OrderViolationAssumedSecondExecution(callCnt);

	testAiiCCVcCCD1Lvl1Instance.OrderViolationAssumedSecondExecution(callCnt);
	testAiiCCVcCCD3Lvl3Instance.OrderViolationAssumedSecondExecution(callCnt);
	testAiiCCVcCCD7Lvl7Instance.OrderViolationAssumedSecondExecution(callCnt);

	testAiiCCViCCD1Lvl1Instance.OrderViolationAssumedSecondExecution(callCnt);
	testAiiCCViCCD3Lvl3Instance.OrderViolationAssumedSecondExecution(callCnt);
	testAiiCCViCCD7Lvl7Instance.OrderViolationAssumedSecondExecution(callCnt);
		
	callCnt++;
			
}



CActorInterruptInterrupt::CActorInterruptInterrupt() 
{
}

void CActorInterruptInterrupt::ConnectInterrupts()
{
	const int dummyVectorAddr = 2;
	
	interruptConnect((void*)dummyVectorAddr, FunctionEntryInterruptTwoSame, 1);
	interruptEnable(dummyVectorAddr);

	interruptConnect((void*)dummyVectorAddr, FunctionEntryInterruptTwoSame, 2);
	interruptEnable(dummyVectorAddr);

	interruptConnect((void*)dummyVectorAddr, FunctionEntryInterruptA, 3);
	interruptEnable(dummyVectorAddr);
	
	interruptConnect((void*)dummyVectorAddr, FunctionEntryInterruptB, 4);
	interruptEnable(dummyVectorAddr);

	m_interruptA.Connect();
	m_interruptB.Connect();
}





