#ifndef __DUMMY_RTOS_H_
#define __DUMMY_RTOS_H_
typedef	int	STATUS;
static const STATUS OK = 0;
static const STATUS ERROR = -1;
typedef int(*OS_INT_FUNCPTR_INT) (int);
typedef void(*OS_VOID_FUNCPTR_INT) (int);
typedef OS_INT_FUNCPTR_INT 	INT_FUNCPTR_INT;
typedef OS_VOID_FUNCPTR_INT VOID_FUNCPTR_INT;
typedef int OS_ticks_t;
typedef int OS_size_t;
typedef int	 TASK_ID;
typedef int OS_usr_arg_t;

static const OS_ticks_t OS_WAIT_FOREVER = 0xFFFFFFFFU;
static const OS_ticks_t OS_NO_WAIT = 0U;

//Task related
extern TASK_ID	threadSpawn(char * name, int priority, int options,	OS_size_t stackSize, INT_FUNCPTR_INT entryPt, OS_usr_arg_t arg1);

//Interrupt related
extern STATUS interruptConnect(void * vectorAddr, VOID_FUNCPTR_INT routine, OS_usr_arg_t parameter);
extern STATUS interruptEnable(int vector);

typedef enum		
{
	SEMAPHORE_STATE_EMPTY,			
	SEMAPHORE_STATE_FULL			
} SEMAPHORE_BINARY_STATE;

typedef int * SEMAPHORE_ID;

extern SEMAPHORE_ID semaphoreCreateBinary(SEMAPHORE_BINARY_STATE initialState);

extern STATUS semaphoreGive(SEMAPHORE_ID semId);
extern STATUS semaphoreTake(SEMAPHORE_ID semId, OS_ticks_t timeout);

typedef int SPINLOCK_ISR_ID;

extern SPINLOCK_ISR_ID spinLockIsrCreate();
extern void spinLockIsrGive(SPINLOCK_ISR_ID * lock);
extern void spinLockIsrTake(SPINLOCK_ISR_ID * lock);
#endif