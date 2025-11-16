/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Input 1:
FAILURE
Output 1:
Operation failed
Explanation 1:
FAILURE corresponds to a failed operation message.*/

#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

int main() {
    char input[20];
    scanf("%s", input);

    Status s;

    if (strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        s = TIMEOUT;
    else {
        printf("Invalid input!");
        return 0;
    }

    switch (s) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
