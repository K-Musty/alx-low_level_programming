#include <stdio.h>


/**
* main - Prints the lowercase alphabets in reverse.
* followed by a new line
*
* Return Always 0 (Success)
*/
int main(void)
{
       char ch;

       for (ch = 'z', ch >= 'a', ch--)
       {
               printf(ch);
       }
       putchar('\n');
       return (0);
}


