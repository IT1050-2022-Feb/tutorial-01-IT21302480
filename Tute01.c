/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int subject_1,subject_2;
  float average;

  printf("Enter your subject 1 mark:");
  scanf("%d",&subject_1);

  printf("Enter your subject 2 mark:");
  scanf("%d",&subject_2);

  average=(subject_1+subject_2)/2;

  printf("The average is %.2f .",average);

  return 0;
}

