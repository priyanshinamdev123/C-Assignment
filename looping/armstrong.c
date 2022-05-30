#include <stdio.h>
#include <math.h>

int main()
{
    int a,i,num,sum = 0,dg,ld;
    printf("enter the number: ");
    scanf("%d",&a);
    num = a;
    dg = (int) log10(num) + 1;
    while(a>0)
    {
        ld = a%10;
        sum = sum + pow(ld,dg);
        a = a/10;
    }
    if(num == sum)
    {
        printf("Number is armstrong");
    }
    else{
        printf("Number is not armstrong");
    }
    return 0;
}
