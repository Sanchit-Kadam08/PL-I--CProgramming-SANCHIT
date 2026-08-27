//Program(2)- Write a program to make use of I/O function using diffrent data types.

//User-Defined Value.

#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter Student Roll Number: ");
    scanf("%d", &rollnum);
    printf("\n Enter Student Percentage: ");
    scanf("%f", &per);
    printf("\n Enter Student Grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Information -----\n");
    printf("\n Roll Number is: %d", rollnum);
    printf("\n Percentage is: %f", per);
    printf("\n Grade     : %c", grade);

    return 0;
}