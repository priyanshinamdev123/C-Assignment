#include <stdio.h>

int main()
{
    int var;
    printf("Enter the number: ");
    scanf("%d",&var);
    switch(var<0)
    {
        case 1:
            printf("The number is negative");
            break;
        case 0:
            switch(var>0)
            {
                case 1:
                    printf("The number is positive");
                    break;
                case 0:
                    printf("The number is zero");
                    break;
            }
    }
    return 0;
}
