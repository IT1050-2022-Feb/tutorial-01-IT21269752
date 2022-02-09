/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int x;
  int total=0;
  printf("-1 to stop\n");
  printf("enter number");
  scanf("%d",&x);
  while(x!=-1)
  {
    total=total+x;
    printf("enter number");
    scanf("%d",&x);
  }
  printf("total is%d",total);
  
  
  return 0;
}

