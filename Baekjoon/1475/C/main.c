#include <stdio.h>
#include <stdbool.h>

#define	MAX_NUMBER_LENGTH	7
#define	MAX_DIGIT_COUNT		10
#define ASCII_CONVERTOR		48

int main ( void )
{
	char room_number[ MAX_NUMBER_LENGTH + 1] = { 0, };	// MAX = 1,000,000
	bool digit_use_checker[ MAX_DIGIT_COUNT ] = { false, };
	int use_6_or_9 = false;
	int number_set_cnt = 0;

	scanf( "%s",room_number );

	for ( int i = 0; i < MAX_NUMBER_LENGTH; i++ )
	{
		int room_number_int = room_number[i] - ASCII_CONVERTOR;

		if ( room_number[i] == '\0' )
		{
			break;
		}

		if ( i == 0 )
		{
			digit_use_checker[ room_number_int] = true;
			number_set_cnt++;

			continue;
		}

		// Starts with i == 1
		if ( room_number_int == 6 || room_number_int == 9 )
		{

		}
		else	// Other then 6 or 9
		{
			if ( digit_use_checker[ room_number_int ] != false )
			{
				number_set_cnt++;
				memset( digit_use_checker, 0x00, sizeof(bool) * MAX_DIGIT_COUNT );
				continue;
			}

			digit_use_checker[ room_number_int ] == true;
		}

#if 0
		if ( i == 0 )
		{
			if ( room_number_int == 6 || room_number_int == 9 )
			{
				use_6_or_9++;
			}

			digit_use_checker[ room_number_int ] = true;
			number_set_cnt++;
			continue;
		}

		if ( room_number_int != 6 && room_number_int != 9 )
		{
			if ( digit_use_checker[ room_number_int ] == true )
			{
				number_set_cnt++;
				use_6_or_9 = 0;
				continue;
			}

			digit_use_checker[ room_number_int ] = true;

			continue;
		}

		if ( use_6_or_9 >= 2 )
		{
			number_set_cnt++;
			use_6_or_9 = 0;
			continue;
		}

		// From here, 6 or 9, and can use one more digit
		use_6_or_9++;
		continue;
#endif
	}

	printf( "%d\n", number_set_cnt );

	return 0;
}
