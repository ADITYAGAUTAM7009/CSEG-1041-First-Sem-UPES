#include <stdio.h>

int main() {
    int p;

    printf("Enter your percentage: ");
    scanf("%d", &p);

    if (p >= 90 && p <= 100) {
        printf("Grade A\n");
    } 
    else if (p >= 80 && p <= 89) {
        printf("Grade B\n");
    } 
    else if (p >= 70 && p <= 79) {
        printf("Grade C\n");
    } 
    else if (p >= 60 && p <= 69) {
        printf("Grade D\n");
    } 
    else if (p >= 0 && p < 60) {
        printf("Grade F\n");
    } 
    else {
        printf("Invalid input\n");
    }

    return 0;
}