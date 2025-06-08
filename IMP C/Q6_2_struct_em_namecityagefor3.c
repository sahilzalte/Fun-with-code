#include<stdio.h>
struct student
{
    int class;
    char name[50];
    float percentage;
};
int main ()
{
    struct student std[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter class for student %d:",i+1);
        scanf("%d",&std[i].class);

        printf("Enter name for student %d:",i+1);
        scanf("%s",std[i].name);

        printf("Enter percentage for %d:",i+1);
        scanf("%f",&std[i].percentage);

        printf("\n");

    }
    printf("Student details :\n");

    for ( i = 0; i < 3; i++)
    {
        printf("Student %d :\n",i+1);
        printf("Student class : %d\n",std[i].class);
        printf("Student name :%s\n",std[i].name);
        printf("Student percentage : %.2f\n",std[i].percentage);

    }
    return 0;    
    
}


/*#include<stdio.h>
struct employee
{
    int age ;
    char name[50];
    char city [50];
};

int main ()
{
    int i;
    struct employee emp[3];
    for (i = 0; i < 3; i++)
    {
        printf("Enter age for Employee %d:",i+1);
        scanf("%d",&emp[i].age);

        printf("Enter name for Employee %d:",i+1);
        scanf("%s",emp[i].name);

        printf("Enter city for Employee %d :",i+1);
        scanf("%s",emp[i].city);

        printf("\n");
    }
    printf("details for Employee:\n");

    for ( i = 0; i <3; i++)
    {
        printf("Employee %d\n",i+1);
        printf("Employee age : %d\n",emp[i].age);
        printf("Employee name :%s\n",emp[i].name);
        printf("Employee city : %s\n",emp[i].city);

    }
    
    return 0;
}
*/













































/*#include <stdio.h>
 
struct Employee {
    int age;
    char name[50];
    char city[50];
};

int main() {
    
    struct Employee emp[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter Age for Employee %d: ", i + 1);
        scanf("%d", &emp[i].age);

        printf("Enter Name for Employee %d: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter City for Employee %d: ", i + 1);
        scanf("%s", emp[i].city);

        printf("\n");
    }

    printf("Employee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Age: %d\n", emp[i].age);
        printf("Name: %s\n", emp[i].name);
        printf("City: %s\n\n", empi].city);
    }

    return 0;
}
*/