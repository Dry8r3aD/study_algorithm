#include <stdio.h>

#define MAX_COMMAND_LENGTH	5

int main( void )
{
	int command_num = 0;
	char command[MAX_COMMAND_LENGTH + 2] = "";
	int i = 0;

	scanf( "%d", &command_num );

	for ( i = 0; i < command_num; i++ )
	{
		scanf( "%s", command );

		if ( strncmp( command, "push", 4 ) == 0 )
		{
				printf("push\n");
		}
		else if ( strncmp( command, "pop", 3 ) == 0 )
		{
				printf("pop\n");
		}
		else if ( strncmp( command, "size", 4 ) == 0 )
		{
				printf("size\n");
		}
		else if ( strncmp( command, "empty", 5 ) == 0 )
		{
			printf("empty\n");
		}
		else if ( strncmp( command, "top", 3 ) == 0 )
		{
				printf("top\n");
		}
		else
		{
			return -1;
		}
	}

	return 0;
}
