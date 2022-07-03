#include<stdio.h>
#include<conio.h>
int main()
{
    float Budget = 0.0;
    printf("\n Enter your Budget = ");
    scanf("%f",&Budget);

    if(Budget < 0)
    {
        printf("\a\n Welcome to Showroom !!!");
        getch();
    }
    printf("\n Thanks for visiting ");
    getch();
    return 0;
}
