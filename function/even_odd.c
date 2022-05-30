#include <stdio.h>

int even(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(even(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}
