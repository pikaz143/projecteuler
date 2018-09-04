#include <stdio.h>

static int palindrome(unsigned int n);

int main(void)
{
  unsigned int i, j, zmax = 0;
  for (i = 100; i <= 999; i++)
    {
    for (j = 100; j <= 999; j++)
    {
      unsigned int p = i*j;
      if (palindrome(p) && p > zmax)
      {
        zmax = p;
      }
    }
  }
  printf("%u\n", zmax);
  return 0;
}

int palindrome(unsigned int n)
{
  unsigned int rev = 0, t = n;

  while (t)
    {
    rev = 10*rev + (t % 10);
    t /= 10;
    }
  return rev == n;
}
