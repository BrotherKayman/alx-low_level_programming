#include <stdio.h>
void first(void)__attribute__ ((constructor));
/**
 * first - Prints text before main function
 *
 */
void first()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}