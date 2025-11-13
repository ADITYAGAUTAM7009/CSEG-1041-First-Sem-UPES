//Write a C program to add two numbers, take number from user
#include<stdio.h>
int main()
{

    float num1,num2,sum=0;

    printf("Enter any two numbers: \n");
    scanf("%f %f", &num1, &num2);

    sum=num1 + num2;

    printf("Sum of the two numbers is: %f", sum);

        return 0;
}