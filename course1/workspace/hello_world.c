#include <stdio.h>

int a1 = 21312321;

extern void print(const char *String_)
{
  printf("%s", String_);
}

int main()
{
  print("a");
  return 0;
}

