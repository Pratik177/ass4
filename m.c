#include<stdio.h>
int main()
{
    int row,col,diff,count=0,value;
    for(row=1;row<=5;row++)
    {
        diff=2; 
        value= row +count;
         count++;
        for(col=5;col>=row;col--)
        {
            printf(" %d",value);
            value += diff;
        }
        printf("\n");
    }
    return 0;
}