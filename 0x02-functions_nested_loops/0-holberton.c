#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char phrase[] = "Holberton";
  int i;

  for (i = 0; i < 9; i++)
    {
      _putchar(phrase[i]);
    }
  _putchar('\n');
  return (0);
}
