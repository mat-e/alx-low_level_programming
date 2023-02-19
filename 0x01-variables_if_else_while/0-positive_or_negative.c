#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 *lets do this, C
 * */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
		printf("%u is positive\n,",n);
	}
	if(n == 0){
		printf("is zero\n");
	}
	if(n < 0){
		printf("is negative\n");
	}
	return (0);
}
