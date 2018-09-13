#include <stdio.h>
int main(void)
{
  int c = 198, m = 138;
  double tax = 1.05;

  printf("Exchange is %d JPY\n",(1000 - (int)(tax*(2*m+c))));
  /*printf("JPY\n");*/
  return 0;
}
