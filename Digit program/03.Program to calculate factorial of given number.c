#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,fact = 1,temp = 0;
    printf("Enter a number to calculate its factorial = ");
    scanf("%d",&No);

    temp = No;
    while(temp > 1)
    {
        fact = fact * temp;
        temp --;
    }
    printf("\n factorial of number %d is = %d ",No,fact);
    printf("\n\n Thanks...");

    getch();
    return 0;
}
