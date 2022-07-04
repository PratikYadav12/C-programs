#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0;
    printf("\n Enter An integer number = ");
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("\n Given number is Natural. ");
    }
    else if(Num %2 == 0)
    {
        printf("\n Given number is Even.");
    }
    else
    {
        printf("\n Given number is Odd.");
    }
    getch();
    return 0;
}
