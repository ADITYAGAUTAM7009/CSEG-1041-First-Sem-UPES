//Write a program to calculate library fine based on late days: first 5 days late ₹2/day, next 5 days late ₹4/day, next 20 days late ₹6/day, more than 30 days membership cancelled

#include <stdio.h>

int main() {
    int days, fine = 0;
    scanf("%d", &days);

    if (days <= 5 && days > 0) {
        fine = days * 2;
        printf("%d\n", fine);
    } else if (days > 5 && days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("%d\n", fine);
    } else if (days > 10 && days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("%d\n", fine);
    } else if (days > 30) {
        printf("Membership Cancelled\n");
    } else {
        printf("0\n");
    }

    return 0;
}