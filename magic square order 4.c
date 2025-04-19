#include<stdio.h>
int main()
{
    printf("Magic square for order 4:\n");
    int a[5][5];
    int x=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i!=j && (i+j)!=5)
                a[i][j]=x;
                    x++;
        }
    }
    int y=1;
    for(int i=4;i>=1;i--)
    {
        for(int j=4;j>=1;j--)
        {
            if(i==j || (i+j)==5)
             a[i][j]=y;
             y++;
        }
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n\n");
    }

}
