#include <stdio.h>
#include <stdint.h>

int main ( void )
{
	uint8_t todayNum = 0;
	uint8_t carPlateNum[5] = {0};
	uint8_t badCar = 0;
	int i = 0;

	scanf( "%u", &todayNum );

	for ( i = 0; i < 5; i++ )
	{
		scanf( "%u", &carPlateNum[i] );

		if ( todayNum == carPlateNum[i] )
		{
			badCar++;
		}
	}

	printf( "%d \n", badCar );

	return 0;
}
