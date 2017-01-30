#include <stdio.h>

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

int check_and_update( int old, int new )
{
	int val = 0;

	if ( old == 0 )
	{
		val = new;
		return val;
	}

	val = MIN( old, new );
	return val;

}

int main ( int argc, char* argv[] )
{
	int req_kg = 0;
	int div_by_3 = 0;
	int div_by_5 = 0;
	int div_by_6 = 0;
	int div_by_10 = 0;
	int res = 0;

	scanf( "%d", &req_kg );
	//req_kg = *argv[2];

	printf ( "%d \n", req_kg );

	if ( req_kg%3 == 0 )
	{
		res = req_kg/3;
		printf ( "res 1 : %d \n", res );
	}
	if ( req_kg%5 == 0 )
	{
		res = check_and_update( res, req_kg/5 );
		printf ( "res 2 : %d \n", res );
	}

	div_by_3 = req_kg%3;
	div_by_5 = req_kg%5;
	div_by_6 = req_kg%6;
	div_by_10 = req_kg%10;

	if ( div_by_3%5 == 0 )
	{
		res = check_and_update( res, ((req_kg - div_by_3)/3 + div_by_3/5) );
		printf ( "res 3 : %d \n", res );
	}
	if ( div_by_5%3 == 0 )
	{
		res = check_and_update( res, ((req_kg - div_by_5)/5 + div_by_5/3) );
		printf ( "res 4 : %d \n", res );
	}
	if ( div_by_6 != 1 && div_by_3 != 0 && req_kg > 6 )
	{
		printf ( "omg %d \n", div_by_6 );
		if ( div_by_6%5 == 0)
		{
			res = (check_and_update( res, ((req_kg - div_by_6)/6 + div_by_6/5) )) + 1;
			printf ( "res 5 : %d \n", res );
		}
	}


	if ( res == 0 )
	{
		printf ( "-1 \n" );
		return 0;
	}

	printf ( "%d \n", res );
	return 0;
}
