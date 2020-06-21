#include "holberton.h"
<<<<<<< HEAD

/**
 * main - printing the alphabet with _putchar
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
=======
/**
 * main - prints alphabet
 *
 *Return: 0
 */
 int main(void)
 {
   char c;
  
   c = 'a';
  while (c <= 'z')
  {
    _putchar(c);
    c++;
    }
    _putchar('\n');
    return (0);
   }
>>>>>>> 50ec5e35d639594b3ab880e3131a9f83e4c0f8ed
