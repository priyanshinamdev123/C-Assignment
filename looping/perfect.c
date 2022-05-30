#include <stdio.h>
#include <math.h>

int main()
{
    int a,i,num,sum = 0;
    printf("enter the number: ");
    scanf("%d",&a);
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum = sum+i;
        }
    }
    if(sum==a)
    {
        printf("The number is perfect number");
    }
    else{
        printf("The number is not perfect number");
    }
    return 0;
}
