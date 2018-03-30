#include <stdio.h>

int main ( void )
{
	int stars = 0;

	scanf( "%d", &stars );

	for ( int i = 0; i < stars; i++ )
	{
		for ( int j = 0; j <= i; j++ )
		{
			printf("*");
		}
		printf("\n");
	}
}
