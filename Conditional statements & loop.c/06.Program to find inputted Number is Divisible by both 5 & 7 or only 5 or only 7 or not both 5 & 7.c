#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&Num);
    if ((Num %5 == 0) && (Num %7 == 0))
    {
        printf("\n Number is Divisible by both 5 & 7 = ");
    }
    else if(Num %5 == 0)
    {
        printf("\n Number is Divisible by 5 = ");
    }
    else if (Num %7 == 0)
    {
        printf("\n Number is Divisible by 7 = ");
    }
    else
    {
        printf("\n both number is not Divisible = ");
    }

    getch();
    return 0;
}
