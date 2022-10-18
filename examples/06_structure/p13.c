#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[20];
};
void structfun(struct student *obj);
void structfun(struct student *obj)
{
    printf("\nname is : %s",obj[0].name);
    printf("\nRoll No. is : %d",obj[0].roll);
    
    printf("\n");

    printf("\nname is : %s",obj[1].name);
    printf("\nRoll No. is : %d",obj[1].roll);
}
struct student obj[2];


int main()
{
    obj[0].roll = 10;
    strcpy(obj[0].name,"subhransu");

	
    obj[1].roll = 11;
    strcpy(obj[1].name,"anujraj");
    
    structfun(obj);
	
    return 0;
}
