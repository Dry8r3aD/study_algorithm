#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANDOM_NUM	10000

int main ( void )
{
	int rand_num = 0;

	srand( time( NULL ) );

	rand_num = rand() % MAX_RANDOM_NUM + 1;

	printf( "%d\n", rand_num );

	return 0;
}
