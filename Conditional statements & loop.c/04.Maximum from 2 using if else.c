#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0;
    printf("\n Enter a two Number = ");
    scanf("%d%d",&No1,&No2);

    if(No1 == No2)
    {
        printf("\n The given Numbers are equal = ");
    }
     else if(No1 > No2)
    {
        printf("\n %d is a maximum number = ");
    }
    else
    {
        printf("\n %d is minimum number = ");
    }

    getch();
    return 0;
}
