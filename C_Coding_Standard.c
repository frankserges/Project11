#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>


/******************************************************************************
PRE31-C. Avoid side effects in arguments to unsafe macros
******************************************************************************/

/******************************************************************************
Noncompliant Code Example
******************************************************************************/


#define abs(x) (((x) < 0) ? -(x) : (x))

int main(int n) {
	/* validate that n is within the desired range */
	int m = abs(++n);
	printf("m=%d \n", m);

	return EXIT_SUCCESS;
}
