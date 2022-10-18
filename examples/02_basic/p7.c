#include<stdio.h>
int main()
{
    float Math, C, Physics,ENVS, average,percentage,a;
    int total=400;

    printf("Enter marks obtained in Math :");
    scanf("%f", &Math);
    printf("Enter marks obtained in C :");
    scanf("%f", &C);
    printf("Enter marks obtained in Physics :");
    scanf("%f", &Physics);
    printf("Enter marks obtained in ENVS :");
    scanf("%f", &ENVS);

    average = (Math + C + Physics + ENVS) / 4;
    printf("Average : %0.2f\n", average);
    a=(Math + C + Physics + ENVS)/total;
    percentage=a*100;
    printf("percentage : %0.2f\n", percentage);
    if(Math>=30&&C>=30&&Physics>=30&&ENVS>=40)
    {


        if (percentage >= 70)
        {
            printf("distingtion");
        }
        else if (percentage >= 60)
        {
            printf("first class");
        }
        else if (percentage >= 50)
        {
            printf("second class");
        }
        else if (percentage >= 40)
        {
            printf("third class");
        }
    }
    else
    {
        printf("You are failed");
    }

    return 0;
}
