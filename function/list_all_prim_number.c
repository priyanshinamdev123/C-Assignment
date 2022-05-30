#include <stdio.h>

int isPrime(int var);
void prime(int start, int end);
int main()
{
    int start, end;
    printf("Enter the start and end to list primes: ");
    scanf("%d%d", &start, &end);
    prime(start,end);
    
    return 0;
}
void prime(int start, int end)
{
    printf("All prime number between %d to %d are: ", start,end);
    
    while(start <= end)
    {
        if(isPrime(end))
        {
            printf("%d, ", end);
        }
        
        end++;
    }
}
int isPrime(int num)   
{  
    int i;  
    for(i=2; i<=num/2; i++)    
    {     
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}
