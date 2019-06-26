#pragma once

class CAttThreadA
{
public:
	CAttThreadA();

	void Spawn();
private:
	static int ThreadWrapper(int thisPointer);
	void Thread(void);
};

class CAttThreadB
{
public:
	CAttThreadB();

	void Spawn();
private:
	static int ThreadWrapper(int thisPointer);
	void Thread(void);
};

class CActorThreadThread
{
public:
	CActorThreadThread();
	void Spawn();

private:
	CAttThreadA m_threadA;
	CAttThreadB m_threadB;
};