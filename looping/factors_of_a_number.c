#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The factors are: ");
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}
