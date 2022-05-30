#include <stdio.h>
int main()
{
    char a[100];
    printf("enter the string: ");
    gets(a);
    int i,c;
    for(i=0;a[i];i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            c = c+1;
        }
    }
printf("%d",c);
}
