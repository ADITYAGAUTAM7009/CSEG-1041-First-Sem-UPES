/*Find and print the student with the highest marks.
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
Explanation 1:
Program compares marks of all students and prints the one with the highest.*/ 
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];
    int i, topIndex = 0;

    printf("Enter details of 3 students:\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\nTopper: %s (Marks: %.0f)\n", s[topIndex].name, s[topIndex].marks);

    return 0;
}
