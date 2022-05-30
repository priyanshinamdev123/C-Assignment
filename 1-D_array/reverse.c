#include <stdio.h>
#define MAX_SIZE 100      
int main()
{
    int n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray in reverse order: ");
    for(i =n-1; i>=0; i--)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}
