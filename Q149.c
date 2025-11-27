/*Use malloc() to allocate structure memory dynamically and print details.
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
Explanation 1:
Memory for structure is dynamically allocated on heap using malloc(). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int roll_no;
    int marks;
} Student;

int main() {
    Student *s;
    s = (Student*) malloc(sizeof(Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Student Name: ");
    fgets(s->name, sizeof(s->name), stdin);

    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    printf("\nName: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}
