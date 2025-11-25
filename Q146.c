/*Create Employee structure with nested Date structure for joining date and print details.
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
Explanation 1:
Nested structure Date is used inside Employee structure to represent joining date.*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", 
          &emp.joinDate.day, 
          &emp.joinDate.month, 
          &emp.joinDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           emp.name,
           emp.id,
           emp.joinDate.day,
           emp.joinDate.month,
           emp.joinDate.year);

    return 0;
}
