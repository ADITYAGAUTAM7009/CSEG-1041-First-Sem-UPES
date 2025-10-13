// Write a program to calculate the factorial of a number

#include <stdio.h>
int main()
{
    int n,i;
    long long factorial=1;   
    printf("enter your no.\n");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
      factorial=factorial*i;   
    }
    printf("the factorial of given no is %lld",factorial);
    return 0;
}