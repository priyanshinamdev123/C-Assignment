#include <stdio.h>
int main()
{
    int i,max,min,n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n],brr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        brr[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d, ",brr[i]);
    }

    return 0;
}
