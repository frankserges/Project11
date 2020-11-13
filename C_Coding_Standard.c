#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include <complex.h>
#include <math.h>


/******************************************************************************
PRE31-C. Avoid side effects in arguments to unsafe macros
******************************************************************************/

/******************************************************************************
Noncompliant Code Example
******************************************************************************/
//#define abs(x) (((x) < 0) ? -(x) : (x))
//
//int main(int n) {
//	/* validate that n is within the desired range */
//	int m = abs(++n);
//	printf("m=%d \n", m);
//
//	return EXIT_SUCCESS;
//}

/******************************************************************************
compliant Code Example
******************************************************************************/
//#define ABS(x) (((x) < 0) ? -(x) : (x)) /* UNSAFE */
//
//int main(int n) {
//	/* Validate that n is within the desired range */
//	++n;
//	int m = ABS(n);
//	printf("m=%d \n", m);
//	return EXIT_SUCCESS;
//}

/******************************************************************************
compliant Code Example
******************************************************************************/
static inline int iabs(int x) {
	
	return (((x) < 0) ? -(x) : (x));
}

int main(int n) {
	/* Validate that n is within the desired range */
	
	int m = iabs(++n);
	printf("m=%d \n", m);

	return EXIT_SUCCESS;
}