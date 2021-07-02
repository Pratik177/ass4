#include<stdio.h>
int main()
{
    int i,j,diff=1,value=1;
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            printf(" %d",value);
            value +=diff;
            

        }
        printf("\n");

    }
    return 0;
}