#include<stdlib.h>
#include<stdio.h>


#define assign(uc1, uc2, val) uc1##uc2 = val

int main(void) {
	int \u0401;
	/* ... */
	assign(\u04, 01, 4);
	printf("hello");
	return EXIT_SUCCESS;
}