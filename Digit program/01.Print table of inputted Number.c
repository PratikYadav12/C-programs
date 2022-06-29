#include<stdio.h>
#include<conio.h>
int main()
{
    int Cnt = 0,No = 0;

    printf("\n Enter a Number to print its table ");
    scanf("%d",&No);

    printf("\n Table of %d is \n",No);
    while(Cnt => No)
    {
        printf("\n %d",(Cnt * No));
        Cnt++;
    }
    getch();
    return 0;


}
