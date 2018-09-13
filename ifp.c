#include <stdio.h>
int main(void)
{
  int score;
  printf("Input the score: ");
  scanf("%d", &score);
  if (score > 100) {
    printf("The score will change\n");
    score = 100;
  }
  printf("The score is %d. \n",score);
  /*printf("JPY\n");*/
  return 0;
}
