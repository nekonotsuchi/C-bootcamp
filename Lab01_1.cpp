
#include "pch.h"
#define LOWER 0
#define UPPER 100
#define STEP  5

#include <stdio.h>

int main(int argc, char** argv)
{
	double fahr, celc;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		celc = (5.0 / 9.0) * (fahr - 32.0);
		printf ("%4.01f F = %6.11f C\n", fahr, celc);
	}
}

/*
The statements beginning with a # are processed by the preprocessor.
The program does not accept any input.
*/