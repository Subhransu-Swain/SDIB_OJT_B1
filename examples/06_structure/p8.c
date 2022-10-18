#include <stdio.h>
struct employee 
{
    char name[50];
    int id;
    float salary;
    char designation[60];
} e[2];

int main() 
{
    int i;
    printf("-------------------------------------\n");
    for(i=0;i<2;i++)
    {
        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter id: ");
        scanf("%d", &e[i].id);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);

        printf("Enter designation: ");
        scanf("%s", e[i].designation);


    }
    printf("-------------------------------------\n");
    printf("information of the employees are: \n\n\n");
    for(i=0;i<2;i++)
    {
       printf("employee name: %s\n",e[i].name); 
       printf("employee id: %d\n",e[i].id);
       printf("employee salary: %f\n",e[i].salary);
       printf("employee designation: %s\n",e[i].designation);
    }
}