#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("Alphabet")
        : printf("Not alphabet");

    return 0;
}
