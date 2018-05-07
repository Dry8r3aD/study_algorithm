#include <stdio.h>

#define MAX_NUMBER_DIGIT 6
#define ASCII_CORRECTION 48

int main( void )
{
    int max_num = 0;
    int freq_counting = 0;
    int freq_number = 0;
    char num_ch[MAX_NUMBER_DIGIT + 1] = { 0, };

    scanf( "%d %d", &max_num, &freq_number );

    for ( int i = 1; i <= max_num; i++ )
    {
        sprintf( num_ch, "%d", i );

        for ( int j = 0; j <= MAX_NUMBER_DIGIT; j++ )
        {
            if ( num_ch[j] == '\0' )
            {
                break;
            }

            if ( num_ch[j] == freq_number + ASCII_CORRECTION )
            {
                freq_counting++;
            }
        }
    }

    printf( "%d\n", freq_counting );

    return 0;
}
