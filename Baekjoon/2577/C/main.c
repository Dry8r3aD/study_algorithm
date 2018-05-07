#include <stdio.h>

#define MAX_CHAR_NUM    9

int main( void )
{
    int i = 0;
    int input_num = 0;
    int product = 0;
    char product_char[MAX_CHAR_NUM + 2] = "";
    int print_arr[10] = { 0, };

    for ( i = 0; i < 3; i++ )
    {
        scanf( "%d", &input_num );

        if ( i == 0 )
        {
            product = input_num;
            continue;
        }
        product *= input_num;
    }

    sprintf( product_char, "%d", product);
    printf( "Text : %s\n", product_char );
    i = 0;

    while ( i < MAX_CHAR_NUM + 2 )
    {
        if ( product_char[i] == 0 )
        {
            break;
        }
        printf( "loop : %d || %c(%d)\n", i, product_char[i], product_char[i] );
        switch( product_char[i] )
        {
            case '0' :
                print_arr[0]++;
                break;
            case '1' :
                print_arr[1]++;
                break;
            case '2' :
                print_arr[2]++;
                break;
            case '3' :
                print_arr[3]++;
                break;
            case '4' :
                print_arr[4]++;
                break;
            case '5' :
                print_arr[5]++;
                break;
            case '6' :
                print_arr[6]++;
                break;
            case '7' :
                print_arr[7]++;
                break;
            case '8' :
                print_arr[8]++;
                break;
            case '9' :
                print_arr[9]++;
                break;
            case '\0' :
                printf("done \n");
                break;
        }
        i++;
    }

    for ( i = 0; i < 10; i++ )
    {
        printf( "%d\n", print_arr[i] );
    }

    return 0;
}
