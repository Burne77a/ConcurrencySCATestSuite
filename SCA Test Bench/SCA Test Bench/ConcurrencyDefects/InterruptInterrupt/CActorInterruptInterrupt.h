#pragma once

class CAiiInterruptA
{
public:
	CAiiInterruptA();

	void Connect();
private:
	static void InterruptWrapper(int thisPointer);
	void ISR(void);
};

class CAiiInterruptB
{
public:
	CAiiInterruptB();

	void Connect();
private:
	static void InterruptWrapper(int thisPointer);
	void ISR(void);
};

class CActorInterruptInterrupt
{
public:
	CActorInterruptInterrupt();
	void ConnectInterrupts();

private:
	CAiiInterruptA m_interruptA;
	CAiiInterruptA m_interruptB;
};