#include <stdio.h>

int main ( void )
{
	int input_type = 0;

	scanf( "%d", &input_type );

	if ( input_type == 0 )
	{
		printf( "YONSEI\n");
	}
	else
	{
		printf( "Leading the Way to the Future\n" );
	}

	return 0;
}
