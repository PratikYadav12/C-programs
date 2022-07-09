#include<stdio.h>
#include<conio.h>
int main()
{
    int Cnt = 0,No = 0;
    printf("\n Enter a number = ");
    scanf("%d",&No);
    for(Cnt = 1;Cnt <= 10; Cnt++)
    {
        printf("%d",Cnt * No);
        printf("\n");
    }

    getch();
    return 0;
}
