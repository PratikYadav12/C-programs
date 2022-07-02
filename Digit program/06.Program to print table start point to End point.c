#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0,C = 0,SP = 0,EP = 0;
    printf("\n Enter start point for table = ");
    scanf("%d",&SP);

    printf("\n Enter End point for table = ");
    scanf("%d",&EP);

     for(R=1;R<=10;R++)
     {
         for(C=SP;C<=EP;C++)
         {
             printf(" %2d ",R*C);
         }
         printf("\n");
     }
     printf("\n***************=========*****************\n");

     getch();
     return 0;
}
