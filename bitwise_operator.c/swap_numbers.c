#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    a = a^b;
    b = b^a;
    a = a^b;
    printf("The two numbers after swaping are: %d and %d",a,b);
    return 0;
}
