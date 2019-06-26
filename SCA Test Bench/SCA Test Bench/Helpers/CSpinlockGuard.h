#pragma once
#include "DummyRTOS.h"
class CSpinlockGuard
{
public:
	explicit CSpinlockGuard(
		SPINLOCK_ISR_ID theSpinlock) :
		m_spinlockId(theSpinlock)
	{
		spinLockIsrTake(&m_spinlockId);
	}
	~CSpinlockGuard(
		void)
	{
		spinLockIsrGive(&m_spinlockId);
	}

	SPINLOCK_ISR_ID m_spinlockId;
};