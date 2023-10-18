#include <stdio.h>

int main(void)
{
	int number;
	int array[5];
	int *pointer;

	array[2] = 1024;
	pointer = &number;

	/*
	* Replace the line below to assign 98 to array[2]
	* using only one statement.
	* Remember:
	* - You are not allowed to use "array".
	* - You are not allowed to modify "pointer".
	* - You are not allowed to code anything else than this line of code.
	*/
	*(pointer + 5) = 98;

	/* ...so that this prints 98\n */
	printf("array[2] = %d\n", array[2]);

	return (0);
}
