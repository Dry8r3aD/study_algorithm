#include <stdio.h>

int main( void )
{
	char str[100] = {0, };
	int i = 0;

	scanf( "%s", str );

	for ( i = 0; str[i] != '\0'; i++ )
	{
		if ( i % 10 == 0 && i != 0 )
		{
			printf("\n");
		}

		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
