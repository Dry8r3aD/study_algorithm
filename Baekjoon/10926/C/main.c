#include <stdio.h>

#define MAX_ID_LENGTH	50

int main ( void )
{
	char id[MAX_ID_LENGTH + 1];

	scanf( "%s", id );
	printf( "%s\?\?!\n", id );

	return 0;
}
