#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter any string: ");
    gets(a);
    int i,c=0;
    for(i=0;a[i];i++)
    {
        c++;
    }
    printf("The length is: %d",c);
}
