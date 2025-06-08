#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;

};
int main ()
{
    struct employee emp;
    printf("Enter employee id:");
    scanf("%d",&emp.id);

    printf("Enter employee name:");
    scanf("%s",emp.name);

    printf("Enter employee salary");
    scanf("%f",&emp.salary);

    printf("Employee details:\n");
    printf("Employee id : %d\n",emp.id);
    printf("Employee name : %s\n",emp.name);
    printf("Employee salary: %.2f\n",emp.salary);

    return 0;
}































/*#include <stdio.h>
struct Employee {
    int Id;
    char Name[50];
    float Salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.Id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.Name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.Salary);

    printf("\nEmployee Details:");
    printf("\nEmployee ID: %d", emp.Id);
    printf("\nEmployee Name: %s", emp.Name);
    printf("\nEmployee Salary: %.2f\n", emp.Salary);

    return 0;
}
*/