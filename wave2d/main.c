

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <memory.h>
#include "timer.h"

typedef double REAL;
typedef int INT; 


int main(int argc, char** argv)
{
	//------------timing-----------//
	 double start, finish, elapsed;
	 GET_TIME(start);
	 
	//------------Initialize Dimensions----------------//
	 
	 
	if(argc < 4)
	{
		printf("Size of Mesh and Total time should be given as : M(size of x) N(size of y) T(Total running time)\n"); 
		exit(0);
	}
	else
	{
		const INT M = atoi(argv[1]);
		const INT N = atoi(argv[2]);
		REAL T = atof(argv[3]);
	}
	 // Square dimensions
	REAL Lx = 4.0;
	REAL Ly = 2.0;


	REAL dx = Lx/(REAL)M;
	REAL dy = Ly/(REAL)N;
	REAL h = dx;
	REAL c = sqrt(5.0);
	REAL dt = 0.89*h/c;
	INT tlength = 150; // T/dt
	
	
	
	return 0;
}
