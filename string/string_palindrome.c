#include <stdio.h>
int main()
{
    char a[100];
    int len,start,end;
    printf("Enter any string: ");
    gets(a);
    len = 0;
    while(a[len] != '\0') len++;
    start = 0;
    end = len-1;
    

    while(start<=end)
    {
        if(a[start] != a[end])
            break;

        start++;
        end--;
    }

    if(start>=end)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}
