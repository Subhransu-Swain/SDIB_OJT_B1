#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float height;
struct marks
{
    int physics;
    int chemistry;
    int math;
}m[2];
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
    for(i=0;i<2;++i)
    {
        printf("Enter marks: ");
        scanf("%d", s[i].m[i].physics);

        printf("Enter marks: ");
        scanf("%d", s[i].m[i].chemistry);

        printf("Enter marks: ");
        scanf("%d",  s[i].m[i].math);
    }
    
    return 0;
}
