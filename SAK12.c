// Program(12)-> Write a program to determine whether a given number is positive \, negative or zero.

#include<stdio.h>
int main()
{ 
  int num;
  
  printf("Enter a number: ");
  scanf("%d",&num); 
  
  if (num>0)
     printf("Number is positive");
  
  else if (num<0)
      printf("Number is negative");
   
  else 
      printf("Number is zero");
 
  return 0;
}
   