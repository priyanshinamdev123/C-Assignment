#include <stdio.h>

int main()
{
    int a1,a2,a3,total;
    printf("Enter the all three angles of the triangle: ");
    scanf("%d%d%d",&a1,&a2,&a3);
    total = a1+a2+a3;
    if(total==180)
    {
        printf("Triangle is valid");
    }
    else{
        printf("triangle is not valid");
    }
    return 0;
}
