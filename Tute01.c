/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int a;
  int b;
  float average;

  printf("enter  mark a");
  scanf("%d",&a);
   printf("enter  mark b");
  scanf("%d",&b);

average=(a+b)/2;
printf("average is%f",average);

  
  return 0;
}

