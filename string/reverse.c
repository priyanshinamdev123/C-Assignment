#include <stdio.h>
int main()
{
    int i,len,j=0;
    char a[100];
    printf("Enter the string: ");
    gets(a);
    char b[100];
    len = strlen(a);
    for(i=len-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("Reversed string: %s",b);
    return 0;
}
