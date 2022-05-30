#include <stdio.h>

int main()
{
    int a,i,prime=1;
    printf("enter the number: ");
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        if (a%i==0)
        {
            prime =0;
        }
    }
    if(prime==0)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
    return 0;
}
