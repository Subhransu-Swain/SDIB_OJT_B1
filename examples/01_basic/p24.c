#include<stdio.h>
int main()
{    

    int ram, shyam, ajay;
    printf("Enter the age of Ram, Shyam and Ajay :\n");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if(ram <= shyam && ram <= ajay)
    {
        printf("Ram is the youngest\n");
    }
    if(shyam <= ram && shyam <= ajay)
    {
        printf("Shyam is the youngest\n");
    }
    if(ajay <= ram && ajay <= shyam)
    {  

        printf("Ajay is the youngest\n");
    }
    return 0;  

}  