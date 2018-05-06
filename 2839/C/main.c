#include <stdio.h>
#include <stdbool.h>

//int main ( int argc, char* argv[] )
int main ( void )
{
	int req_kg = 0;
	int bag_cnt = 0;

	scanf( "%d", &req_kg );
	//req_kg = atoi(argv[1]);

	while ( true )
	{
		if ( req_kg < 0 )
		{
			printf("#1\n");
			bag_cnt = -1;
			break;
		}

		if ( req_kg == 0 )
		{
			printf("#2\n");
			break;
		}

		if ( req_kg % 5 == 0 )
		{
			printf("#3\n");
			bag_cnt += (req_kg / 5);
			break;
		}

		printf("#4\n");
		req_kg -= 3;
		bag_cnt++;
	}

	printf( "%d\n", bag_cnt );

	return 0;
}
