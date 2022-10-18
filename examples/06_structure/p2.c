#include <stdio.h>
struct employee 
{
    char name[50];
    int id;
    float salary;
    char designation;
} e[2];

int main() 
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter id: ");
        scanf("%d", &e[i].id);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);

        printf("Enter designation: ");
        scanf("%s", &e[i].designation);

        printf("size of structure is : %d\n",sizeof(e));


    }
    
    return 0;
}