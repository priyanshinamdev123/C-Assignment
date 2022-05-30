#include <stdio.h>

int main()
{
    char op;
    float a,b,total;
    printf("enter the two numbers: ");
    scanf("%f%c%f",&a,&op,&b);
    switch(op)
    {
        case '+':
            total = a+b;
            break;
        case '-':
            total = a-b;
            break;
        case '*':
            total = a*b;
            break;
        case '/':
            total = a/b;
            break;
        default:
            printf("choose the correct operation");
    }
    printf("%.2f %c %.2f = %.2f",a,op,b,total);
    return 0;
}
