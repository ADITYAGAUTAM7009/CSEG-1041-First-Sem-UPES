//Write a program to calculate electricity bill based on units consumed: first 100 units at ₹5/unit, next 100 units at ₹7/unit, next 100 units at ₹10/unit, units above 300 at ₹12/unit
#include <stdio.h>

int main() {
    int units;
    int bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = 100*5 + (units - 100)*7;
    }
    else if (units <= 300) {
        bill = 100*5 + 100*7 +(units - 200)*10;
    }
    else {
        bill = 100*5 + 100*7 + 100*10 + (units - 300)*12;
    }

    printf("Electricity bill: Rs %d\n", bill);

    return 0;
}

