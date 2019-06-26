#include "CSemaphoreGuard.h"

CSemaphoreGuard::CSemaphoreGuard(
		const SEMAPHORE_ID theSempahore) :
		m_semaphoreId(theSempahore)
{
	semaphoreTake(m_semaphoreId, OS_WAIT_FOREVER);
}
CSemaphoreGuard::~CSemaphoreGuard(
	void)
{
	semaphoreGive(m_semaphoreId);
}