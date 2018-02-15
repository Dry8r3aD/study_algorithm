#include <stdio.h>
#include <string.h>

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

int check_and_update( int old, int new )
{
	printf( "old : %d | new : %d \n", old, new );
	if ( old == 0 )
	{
		return new;
	}

	return MIN( old, new );
}

int main ( int argc, char* argv[] )
{
	int req_kg = 0;
	int bag_cnt = 0;

	//scanf( "%d", &req_kg );
	req_kg = atoi(argv[1]);

//	printf("%d\n", req_kg);

	if ( req_kg % 3 == 0 )
	{
		printf("#1 \n");
		bag_cnt = check_and_update( bag_cnt, (req_kg / 3) );
	}
	else if ( req_kg % 3 == 2 )
	{
		printf("#2 \n");
		bag_cnt = check_and_update( bag_cnt, ((req_kg / 3) - 1) + ((req_kg+3%3) / 5) );
	}

	if ( req_kg % 5 == 0 )
	{
		printf("#3 \n");
		bag_cnt = check_and_update( bag_cnt, (req_kg / 5) );
	}
	else if ( req_kg % 5 == 3 )
	{
		printf("#4 \n");
		bag_cnt = check_and_update( bag_cnt, ((req_kg / 5) + ((req_kg % 5) / 3)) );
		printf( "Cnt : %d \n", bag_cnt );
	}
	else if ( req_kg > 10)
	{
		printf("#5 \n");
		bag_cnt = check_and_update( bag_cnt, ((req_kg / 5) - 1) + ((req_kg+5 % 5) / 3) );
		printf( "Cnt : %d \n", bag_cnt );
	}

	if ( bag_cnt > 0 )
	{
		printf( "Cnt : %d \n", bag_cnt );
		return bag_cnt;
	}

	printf("-1 \n");
	return -1;
}
