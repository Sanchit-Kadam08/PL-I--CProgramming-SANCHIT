/* Program(16)-> Write a program to generate the multiplication table of any number using while loop, do while loop and for loop.
 
Solution(3): Using for Loop */
#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);

    printf("\n Multiplication Table of %d \n",num);

    for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d \n",num,i,num*i);
        }
    return 0;
} 