#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <type.h>

/**
 * main - A program that prints alphabets(LowerCase) followed by a new line
 *
 * Return : 0 (True)
 */
int main(void)
{
	char cha = 'a';

       for (cha = 'a'; cha <= 'z'; cha++)
       {
	       putchar(cha);
       }
       putchar('\n');

       return (0);
}
