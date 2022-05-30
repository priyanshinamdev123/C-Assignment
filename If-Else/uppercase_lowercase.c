#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        printf("Character is of lower case");
    }
    else if(a>='A' && a<='Z')
    {
        printf("Character is of upper case");
    }
    else{
        printf("enter the valid character");
    }
    return 0;
}
