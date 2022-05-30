#include <stdio.h>
int main()
{
    int i,a,num,ld,sum=0;
    long fact;
    printf("Enter the number: ");
    scanf("%d", &a);
    num = a;
    while(a > 0)
    {
        ld = a%10;
        fact = 1;
        for(i=1; i<=ld; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        a = a/10;  
    }
    if(sum == num)
    {
        printf("The number is strong number");
    }
    else
    {
        printf("The number is not strong number");
    }
    return 0;
}
