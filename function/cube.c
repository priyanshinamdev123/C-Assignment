#include <stdio.h>
double cube(double var);

int main()
{
    int var;
    double c;
    printf("Enter any number: ");
    scanf("%d", &var);
    
    c = cube(var);

    printf("Cube of %d is %.2f", var, c); 
    
    return 0;
}
double cube(double var)
{
    return (var*var*var);
}
