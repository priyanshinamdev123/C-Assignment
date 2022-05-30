#include <stdio.h>

int main()
{
    int var1,var2;
    printf("Enter the two numbers: ");
    scanf("%d%d",&var1,&var2);
    switch(var1>var2)
    {
        case 1:
            printf("%d is greater",var1);
            break;
        case 2:
            printf("%d is greater",var2);
            break;
    }

    return 0;
}
