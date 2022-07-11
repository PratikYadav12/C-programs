#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Fact = 1;
    printf("\n Enter a Number = ");
    scanf("%d",&No);

    while(No != 0)
    {
        Fact = Fact * No;
        No--;
    }
       printf("\n Factorial Number = %d",Fact);
    getch();
    return 0;
}
