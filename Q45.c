/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    float numerator = 2;
    float denominator = 3;
    float sum = numerator / denominator;
    for (int i=2 ; i<=num ; i++) {
        numerator = numerator + 2;
        denominator = denominator + 4;
        sum = sum + (numerator / denominator);
    } printf("Approximate sum: %.2f",sum);
    return 0;
}
