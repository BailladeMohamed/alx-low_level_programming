#include <stdio.h>

void before_main_function(void) __attribute__ ((constructor));

/**
 * before_main_function - Prints a message before main execution
 */
void before_main_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

