#include <stdio.h>

int main() {
    int day, month, year;
    char s1, s2;  // to store the '/' characters

    // Input in format dd/mm/yyyy
    scanf("%d%c%d%c%d", &day, &s1, &month, &s2, &year);

    if (month == 4 && s1 == '/' && s2 == '/')
        printf("%02d-Apr-%d", day, year);
    else
        printf("Invalid month or format");

    return 0;
}
