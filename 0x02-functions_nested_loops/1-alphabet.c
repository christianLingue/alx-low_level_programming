#include "main.h"
/**
 * print alphabet - Print the alphabet in miniscule
 */

void print_alphabet(void)
{
  char letter = 'a';
  
  while (letter <= 'z')
    {
      _putchar(letter);
      letter++;
    }
  _putchar('\n');
  
}
