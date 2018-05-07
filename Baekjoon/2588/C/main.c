#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct input_number {
	uint16_t	num;			// 입력받은 세 자리 수
	uint8_t		first_digit;	// 입력받은 수의 첫번째 숫자
	uint8_t		second_digit;	// 입력받은 수의 두번째 숫자
	uint8_t		third_digit;	// 입력받은 수의 세번째 숫자
}nunmber;

void calculate_number_digits( nunmber* input )
{
	uint16_t tmp_num = input->num;

	input->first_digit = (tmp_num) % 10;
	//printf( "first : %u \n", input->first_digit );

	tmp_num = tmp_num / 10;

	input->second_digit = (tmp_num) % 10;
	//printf( "second : %u \n", input->second_digit );

	tmp_num = tmp_num / 10;

	input->third_digit = (tmp_num) % 10;
	//printf( "third: %u \n", input->third_digit );
}

int main ( void )
{
	nunmber input1;
	nunmber input2;

	memset( &input1, 0, sizeof( nunmber ) );
	memset( &input2, 0, sizeof( nunmber ) );

	uint32_t		first_line = 0;
	uint32_t		second_line= 0;
	uint32_t		third_line = 0;
	uint32_t		product = 0;

	// 곱셈을 할 정수를 입력받음
	scanf( "%u %u", &input1.num, &input2.num );

	calculate_number_digits( &input1 );
	calculate_number_digits( &input2 );

	first_line = (input2.first_digit) * input1.num;
	second_line = (input2.second_digit) * input1.num;
	third_line = (input2.third_digit) * input1.num;
	product = (input2.num) * (input1.num);

	printf( "%u\n%u\n%u\n%u\n", first_line, second_line, third_line, product );

#if 0
	printf( "%u %u \n", input1.first_digit, input2.first_digit );
	printf( "%u %u \n", input1.second_digit, input2.second_digit );
	printf( "%u %u \n", input1.third_digit, input2.third_digit);
#endif

	return 0;
}
