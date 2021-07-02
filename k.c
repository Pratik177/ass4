#include<stdio.h>
int main()
{
    int i,j,space,k;
    for(i=0;i<=5;i++)
    {
        for(space=1;space<=5-i;space++)
        {
            printf(" ");
        }
         for(j=1;j<=i;j++)
         {printf("%d",j);}
         for(j=i-1;j>=1;j--)
         {
             printf("%d",j);
         }
    
        printf("\n");
    }
    return 0;
}