/* Program(14)-> Write a program to generate the multiplication table of any number using while loop, do while loop and for loop.
 
Solution(1): Using While Loop */

#include<stdio.h>
int main()
{
  int num,i=1;
   
  printf("Enter number: ");
  scanf("%d",&num);

  printf("\n The multiplication Table of %d \n",num);
  
  while(i<=10)
  { 
   printf("%d x %d = %d \n",num,i,num*i);
   i++;
  }
  return 0;
}
 