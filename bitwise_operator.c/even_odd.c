#include <stdio.h>

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if (a&1)
    {
        printf("The number is odd");
    }
    else{
        printf("The number is even");
    }
    return 0;
}
