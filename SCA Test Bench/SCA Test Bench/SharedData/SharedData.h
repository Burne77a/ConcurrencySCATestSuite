#pragma once
typedef struct
{
	unsigned int x1;
}DATA_STRUCTURE_X1;
typedef struct
{
	unsigned int x1;
	unsigned int x2;
	unsigned int x3;
}DATA_STRUCTURE_X3;

extern DATA_STRUCTURE_X1 globalDataDataRaceAttMd1ACgInstance;
extern DATA_STRUCTURE_X1 globalDataDataRaceProtectedAttMd1ACgInstance;

extern DATA_STRUCTURE_X3 globalDataX3Instance;

extern const DATA_STRUCTURE_X1 emptyX1;
extern const DATA_STRUCTURE_X3 emptyX3;