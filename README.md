# ConcurrencySCATestSuite
A C/C++ test suite for evaluation of SCA tools on concurrency defects. 
Intended to be used for evaluation of SCA tools. 

**Below is a short description of the directory structure. **
The filenames and directory names match the complexity levels described in the paper Concurrency defect localization in embedded
systems using static code analysis: an evaluation.

```
\---SCA Test Bench									Root directory.
    +---Configurations								Configuration files for the evaluated tools. 
    |   +---Codesonar
    |   +---Klocwork
    |   +---Parasoft
    |   \---PolySpace
    \---SCA Test Bench								Root directory for the test bench. 
        +---ConcurrencyDefects
        |   +---InterruptInterrupt					One directory per actor combination. This is the interrupt - interrupt actor combination.
        |   |   \---Complexities					Each actor combination, contain the different complexities levels. 
        |   |       +---Composition					Composition based complexities. 
        |   |       |   +---CCVcCCD1				Composition based complexity. With concrete composition of level 1. 
        |   |       |   +---CCVcCCD3				Concrete composition of level 3. 
        |   |       |   +---CCVcCCD7				Concrete composition of level 7. 
        |   |       |   +---CCViCCD1				Interface composition of level 1. 
        |   |       |   +---CCViCCD3				Interface composition of level 3. 
        |   |       |   \---CCViCCD7				Interface composition of level 7.
        |   |       \---MethodDepth					Method depth complexities. 
        |   +---ThreadInterrupt
        |   |   \---Complexities
        |   |       +---Composition
        |   |       |   +---CCVcCCD1
        |   |       |   +---CCVcCCD3
        |   |       |   +---CCVcCCD7
        |   |       |   +---CCViCCD1
        |   |       |   +---CCViCCD3
        |   |       |   \---CCViCCD7
        |   |       \---MethodDepth
        |   \---ThreadThread
        |       \---Complexities
        |           +---Composition
        |           |   +---CCVcCCD1
        |           |   +---CCVcCCD3
        |           |   +---CCVcCCD7
        |           |   +---CCViCCD1
        |           |   +---CCViCCD3
        |           |   \---CCViCCD7
        |           \---MethodDepth
        +---Helpers
        +---RTOS
        \---SharedData
```