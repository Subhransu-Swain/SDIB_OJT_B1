#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float height;
} s[2];

int main() 
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll: ");
        scanf("%f", &s[i].roll);

        printf("Enter height: ");
        scanf("%f", &s[i].height);
    }
    
    return 0;
}
