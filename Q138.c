/*Q138 (Enum)
Print all enum names and integer values using a loop.
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
Explanation 1:
Iterating through enum values prints each constant with its assigned integer.*/

#include <stdio.h>

enum Colors {
    RED,
    YELLOW,
    GREEN
};

int main() {
    int input;
    printf ("input any number for the command :");
    
    scanf("%d", &input);

    switch (input) {
        case RED:
            printf("RED");
            break;
        case YELLOW:
            printf("YELLOW");
            break;
        case GREEN:
            printf("GREEN");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
