//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, per;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        per = ((sp - cp) / cp) * 100;
        printf("Profit percentage: %.2f%%\n", per);
    } else if (cp > sp) {
        per = ((cp - sp) / cp) * 100;
        printf("Loss percentage: %.2f%%\n", per);
    } else {
        printf("No profit no loss\n");
    }

    return 0;
}