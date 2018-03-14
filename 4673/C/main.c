#include <stdio.h>
#include <stdlib.h>

#define    MAX_DIGIT_LENGTH        6
#define    MAX_NUMBER_SIZE         10000
#define    MAX_NUMBER_SUM_SIZE     10035

void add( int num, int *ans_arr )
{
    char num_str[MAX_DIGIT_LENGTH] = { 0, };
    int digit_sum = 0;
    int result = 0;
    int i = 0;

    sprintf(num_str, "%d", num);

    for ( i = 0; num_str[i] != 0; i++ )
    {
        int digit = num_str[i] - 48;
        digit_sum += digit;
    }

    result = num + digit_sum;

    if ( result <= MAX_NUMBER_SIZE - 1 )
    {
        ans_arr[result] = result;
        add( result, ans_arr );
    }
    return;
}

int main( void )
{
    int ans[MAX_NUMBER_SUM_SIZE] = { 0, };
    int i = 0;

    for ( i = 1; i < MAX_NUMBER_SIZE; i++ )
    {
        add( i, ans );

        if ( ans[i] != 0 )
        {
            continue;
        }

        printf( "%d\n", i );
    }

    return 0;
}
