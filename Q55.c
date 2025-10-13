/* Write a program to print all the prime numbers from 1 to n.


*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    for (int i=2 ; i<=num ; i++) {
        int isPrime=1;
        for (int j=2 ; j<i ; j++) {
            if (i%j == 0) {
                isPrime=0;
                continue;
            } 
        } if (isPrime==1) {
            printf("%d ",i);
        }
    }
    return 0;
}