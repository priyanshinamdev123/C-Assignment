#include <stdio.h>
int main()
{
    int i,max,min,n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
