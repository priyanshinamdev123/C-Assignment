#include <stdio.h>
#define MAX_SIZE 100      
int main()
{
    int n,i,max;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i =1; i<n; i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    max++;
    int b[max] = 0;
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>0)
        {
            printf("%d = %d",i,b[i]);
        }
    }
    return 0;
}
