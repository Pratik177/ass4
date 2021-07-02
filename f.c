#include<stdio.h>
int main()
{
    int i,j,k,x,l,y=1;
    for(i=0;i<=7;i++)
    {
        x='A';
        for(j=1;j<=7-i;j++)
        {
            printf(" %c",x++);
        }
        for(k=1;k<=((2*i)-1);k++)
        {
            printf("  ");
        } 
           if(i==0)
          {
              y=1;
              x-=2;
          }
          else{
              x--;
              y=0;
          }
           for(k=7-i-y;k>=1;k--)
         {  printf(" %c",x--);}

        printf("\n");
    }
      
}