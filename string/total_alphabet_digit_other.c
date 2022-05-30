#include <stdio.h>
int main()
{
    char a[100];
    int alp=0,dig=0,others=0, i;
    printf("Enter any string : ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            alp++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            dig++;
        }
        else
        {
            others++;
        }    }

    printf("Alphabets = %d\n", alp);
    printf("Digits = %d\n", dig);
    printf("Special characters = %d", others);

    return 0;
}
