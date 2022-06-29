#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int No = 0,sum = 0,Cnt = 0;
    for(Cnt =1; Cnt <= 10; Cnt ++)

    printf("\n Enter  a Number %d ",Cnt);
    scanf("%d",&No);

    sum = sum + No;

    printf("\n Press Any Key to get summation of given Number= ");
    scanf("%d",&sum);   ///getche()

    system("cls");

    printf("\n\t summation of given Number = %d",sum);

    printf("\n Thanks");

    getch();
    return 0;
}
