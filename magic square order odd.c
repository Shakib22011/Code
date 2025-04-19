#include<stdio.h>
int main()
{

    int n;
    printf("Enter the order: ");
    scanf("%d",&n);
        int arr[n][n];
    if(n%2==0)
        printf("Number is even\n");
    else{
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            arr[i][j]=0;

        int row=0,col=n/2;
        arr[row][col]=1;

        for(int i=2;i<=n*n;i++)
        {
            if((row-1)==-1 && (col+1)==n)
                row++;
            else if(col+1==n)
               {
                   col=0;
                   row--;
               }
            else if(row-1==-1)
                {
                    row=n-1;
                     col++;
                }
            else if(arr[row-1][col+1]!=0)
                row++;
            else
            {
                row--;
                col++;
            }
            arr[row][col]=i;
        }
      printf("\nSquare matrix is :  \n\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            printf("%d  ",arr[i][j]);
          printf("\n\n");
        }
        printf("\n");
    }

}
