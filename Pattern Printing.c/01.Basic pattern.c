#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,j = 0;

    for(i = 1;i <= 2;i++)
    {
        for(j = 1;j <= 3;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}
