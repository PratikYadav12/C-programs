#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\n Enter a 2 integer number = ");
    scanf("%d%d",&Num1,&Num2);

    if (Num1 == Num2)
    {
        printf("\n Both Number are equal ");
    }
    else(Num1 > Num2);
    {
        printf("\n Number %d is maximum.",Num1);
        printf("\n Number %d is maximum.",Num2);
    }

    getch();
    return 0;
}
