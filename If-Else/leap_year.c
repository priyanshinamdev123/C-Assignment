#include <stdio.h>

int main()
{
    int var;
    printf("Enter the year: ");
    scanf("%d",&var);
    if(((var % 4 == 0) && (var % 100 !=0)) || (var % 400==0))
    {
        printf("It is leap year");
    }
    else{
        printf("It is not leap year");
    }
    return 0;
}
