#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i, len, v, c;
    printf("Enter any string: ");
    gets(a);
    v = 0;
    c = 0;
    len = strlen(a);

    for(i=0; i<len; i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            if(a[i] =='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || 
               a[i] =='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'  )
                v++;
            else
                c++;
        }
    }

    printf("Total number of vowel = %d\n", v);
    printf("Total number of consonant = %d\n", c);

    return 0;
}
