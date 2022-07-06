#include "main.h"
#include "stdio.h"

/** main - print putchar
* Return: always 0
*/ 
int main(void)
{
    char *sh = "putchar";

    while (*sh)
     {
	     _putchar(*sh);
	     sh++;
     }
    _putchar('\n');

    return (0);
}
