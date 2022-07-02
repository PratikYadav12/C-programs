#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int No = 0,sum = 0,Cnt = 0;
    printf("\n Enter number to calculate their sum \n (will stop summition after 0/-ve input) =>");
    for(Cnt = 1;;Cnt++)
    {
        printf("\n\n Enter Number %d = Cnt");
        scanf("%d",&No);

        if(No <= 0)
        {
            break;
        }
        sum = sum + No;
    }
    printf("\n press Any Key to get summation of given Number => ");
    scanf("%d",&Cnt);     ///getche();
    system("cls");

    printf("\n summation of given Number = %d",sum);

    printf("\n\n Thanks");

    getch();
    return 0;
}
