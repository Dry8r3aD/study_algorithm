#include <stdio.h>

#define LOOP_CNT	3
#define NUMBER_CNT	4

int main ( void )
{

	for ( int i = 0; i < LOOP_CNT; i++ )
	{
		int count = 0;

		for ( int j = 0; j < NUMBER_CNT; j++ )
		{
			int input_num = -1;

			scanf( "%d", &input_num );

			if ( input_num != 0 )
			{
				continue;
			}

			count++;
		}

		switch ( count )
		{
			case 1 :
				printf( "A\n" );
				break;
			case 2 :
				printf( "B\n" );
				break;
			case 3 :
				printf( "C\n" );
				break;
			case 4 :
				printf( "D\n");
				break;
			case 0 :
				printf( "E\n");
				break;
		}
	}

	return 0;
}
