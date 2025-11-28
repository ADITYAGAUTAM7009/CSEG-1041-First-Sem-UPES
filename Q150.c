/* Use pointer to struct to modify and display data using -> operator.
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
Explanation 1:
Pointer to structure accesses and modifies data using the arrow (->) operator.*/ 

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    Student *s;

    s = (Student*) malloc(sizeof(Student));

    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter Student Name: ");
    scanf("%s", s->name);

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    printf("\n Name: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll, s->marks);

    free(s);
    return 0;
}
