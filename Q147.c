/*Store employee data in a binary file using fwrite() and read using fread().
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
Explanation 1:
Demonstrates writing and reading structures using binary file handling functions.*/

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
    struct Employee emp, readEmp;
    FILE *fp;
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year);
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee details entered and stored in file.\n");
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\n--- Employee Data Read From File ---\n");
    printf("Name: %s\n", readEmp.name);
    printf("ID: %d\n", readEmp.id);
    printf("Joining Date: %02d/%02d/%04d\n",
           readEmp.joinDate.day,
           readEmp.joinDate.month,
           readEmp.joinDate.year);
    return 0;
}
