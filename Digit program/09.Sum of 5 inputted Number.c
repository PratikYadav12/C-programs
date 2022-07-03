#include<stdio.h>
#include<conio.h>
int main()
{
    int Cnt = 1,No = 0,Sum = 0;
    printf("\n Enter a 5 integer Number for addition = ");

    while(Cnt <= 5)
    {
        printf("\n Enter a Number %d = ",Cnt);
        scanf("%d",&No);

        Sum = Sum + No;
        Cnt++;
    }
    printf("\n Sumation of given Number = %d",Sum);

    getch();
    return 0;

}
