/* Return a structure containing top student's details from a function.
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
Explanation 1:
The function returns the structure containing the highest scoring student's details.*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that returns topper structure
struct Student getTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];
}

int main() {
    struct Student s[3];
    int i;

    printf("Enter details of 3 students:\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name : ");
        scanf("%s", s[i].name);

        printf("Roll : ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopper(s, 3);

    printf("\nTop Student: %s | Roll: %d | Marks: %.0f",
           top.name, top.roll, top.marks);

    return 0;
}
