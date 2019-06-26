#pragma once

class CAtiInterrupt
{
public:
	CAtiInterrupt();

	void Connect();
private:
	static void InterruptWrapper(int thisPointer);
	void ISR(void);
};

class CAtiThread
{
public:
	CAtiThread();

	void Spawn();
private:
	static int ThreadWrapper(int thisPointer);
	void Thread(void);
};

class CActorThreadInterrupt
{
public:
	CActorThreadInterrupt();
	void SpawnThreadConnectInterrupt();

private:
	CAtiInterrupt m_interrupt;
	CAtiThread m_thread;
};