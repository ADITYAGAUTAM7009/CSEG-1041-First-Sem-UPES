/*Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Input 1:
ADD 10 20
Output 1:
30
Explanation 1:
The enum ADD triggers addition of 10 and 20.
*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY
} Operation;

int main() {
    char opInput[20];
    int a, b;

    scanf("%s %d %d", opInput, &a, &b);

    Operation op;

    if (strcmp(opInput, "ADD") == 0)
        op = ADD;
    else if (strcmp(opInput, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(opInput, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid operation");
        return 0;
    }

    switch (op) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
