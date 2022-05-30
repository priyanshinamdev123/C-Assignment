#include <stdio.h>
int main()
{
    char a[100];
    int i,words=1;
    printf("Enter any string: ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
        {
            words++;
        }
    }
    printf("Total number of words = %d", words);

    return 0;
}
