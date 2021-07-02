#include<stdio.h>
int main()
{
    int row,col,value=0,diff;
    for(row=1;row<=5;row++)
    {
        diff=4;
        value=row;
        for(col=1;col<=row;col++)
        {
            printf(" %d",value);
            value +=diff;
            diff--;
        }
           printf("\n");
    }
    return 0;

}
