
#include "ConcurrencyDefects/ThreadThread/CActorThreadThread.h"
#include "ConcurrencyDefects/ThreadInterrupt/CActorThreadInterrupt.h"
#include "ConcurrencyDefects/InterruptInterrupt/CActorInterruptInterrupt.h"
#include "DummyRTOS.h"

CActorThreadThread actorThreadThread;
CActorThreadInterrupt actorThreadInterrupt;
CActorInterruptInterrupt actorInterruptInterrupt;
int main()
{
	//Spawns the thread. The thread, thread actor threads (Att)
	actorThreadThread.Spawn();

	//Spawns the thread and connect and enable interrupt. The thread interrupt actor thread and interrupt (Ati). 
	actorThreadInterrupt.SpawnThreadConnectInterrupt();
	
	//Connects and enables interrupt. The interrupt, interrupt actor interrupts (Aii)
	actorInterruptInterrupt.ConnectInterrupts();
}

