#include<stdio.h>
#include<conio.h>
int main()
{
    char  ch = '\0';
    printf("\n To check given Character is \n\n( upper case or lower case or digit or special symbol =) = ");
    scanf("%c",&ch);    ///  getche();

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n Given Character is upper case = ");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n Given Character is lower case = ");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n Given Character is digit = ");
    }
    else
    {
        printf("\n Given Character is special symbol = ");
    }

    getch();
    return 0;
}
