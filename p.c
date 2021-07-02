#include<stdio.h>
int main()
{
    int i,j,k,x=1;
    for(i=1;i<=5;i++)
    { 
         
        for(j=1;j<=5;j++,x++)
        {
          if(x%2==0)
          {
              printf("0");
          }
          else {
              printf("1");
          }

        }
        printf("\n");
    }
    return 0;
}