#pragma once
#include "DummyRTOS.h"
class CSemaphoreGuard
{
public:
	explicit CSemaphoreGuard(
		const SEMAPHORE_ID theSempahore);
	~CSemaphoreGuard(
		void);
	const SEMAPHORE_ID m_semaphoreId;
};