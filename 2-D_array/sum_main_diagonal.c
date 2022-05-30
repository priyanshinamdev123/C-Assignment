#include <stdio.h>
int main()
{
    int i,n,j,sum = 0;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum = sum+a[i][j];
            }
        }
    }
    
    printf("\nSum of main diagonal elements = %d", sum);

    return 0;
}
