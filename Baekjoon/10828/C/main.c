#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH	5

#define CMD_SUCCESS			0
#define CMD_FAIL			1

struct node
{
	int value;
	int *next;
};

typedef struct STACK
{
	int top;
	int cnt;
	struct node *head;
}STACK;

static inline int process_push_command( STACK *stack_ptr, int push_value )
{
	if ( stack_ptr->head == NULL )
	{
		stack_ptr->head = malloc( sizeof(struct node) );

		if ( stack_ptr->head == NULL )
		{
			printf( "Memory allocation failed\n" );
			return CMD_FAIL;
		}

		stack_ptr->head->value = push_value;
		stack_ptr->head->next = NULL;

		stack_ptr->top = push_value;
		stack_ptr->cnt++;
	}
	else
	{
		struct node *new_node = malloc( sizeof(struct node) );

		if ( new_node == NULL )
		{
			printf( "Memory allocation failed\n" );
			return CMD_FAIL;
		}

		new_node->next = stack_ptr->head;
		new_node->value = push_value;

		stack_ptr->head = new_node;
		stack_ptr->top = push_value;
		stack_ptr->cnt++;
	}

	return CMD_SUCCESS;
}

static inline int process_pop_command( STACK *stack_ptr )
{
	struct node *cpy_node = malloc( sizeof(struct node) );

	if ( cpy_node == NULL )
	{
		printf( "Memory allocation failed\n" );
		return CMD_FAIL;
	}

	if ( stack_ptr->head == NULL && stack_ptr->cnt == 0 )
	{
		printf("-1\n");
		return CMD_SUCCESS;
	}

	printf("%d\n", stack_ptr->top );

	free( stack_ptr->head );

	stack_ptr->head = stack_ptr->head->next;

	if ( stack_ptr->head == NULL )
	{
		stack_ptr->top = 0;
		stack_ptr->cnt = 0;

		return CMD_SUCCESS;
	}

	stack_ptr->top = stack_ptr->head->value;
	stack_ptr->cnt--;

	return CMD_SUCCESS;
}

int main( void )
{
	int command_num = 0;
	char command[MAX_COMMAND_LENGTH + 2] = "";
	int i = 0;
	STACK *stack_ptr = NULL;

	stack_ptr = malloc( sizeof(STACK) );
	memset( stack_ptr, 0x00, sizeof(STACK) );

	scanf( "%d", &command_num );

	for ( i = 0; i < command_num; i++ )
	{
		scanf( "%s", command );

		if ( strncmp( command, "push", 4 ) == 0 )
		{
			int push_value = 0;

			scanf( "%d", &push_value );

			process_push_command( stack_ptr, push_value );
		}
		else if ( strncmp( command, "pop", 3 ) == 0 )
		{
			process_pop_command( stack_ptr );
		}
		else if ( strncmp( command, "size", 4 ) == 0 )
		{
			printf( "%d\n", stack_ptr->cnt );
		}
		else if ( strncmp( command, "empty", 5 ) == 0 )
		{
			printf( "%d\n", (stack_ptr->head == NULL) ? 1 : 0 );
		}
		else if ( strncmp( command, "top", 3 ) == 0 )
		{
			printf( "%d\n", (stack_ptr->head == NULL) ? -1 : stack_ptr->top );
		}
		else
		{
			printf( "Invalud command!\n" );
			return -1;
		}
	}

	free( stack_ptr );

	return 0;
}
