#include<stdio.h>
int main()
{
    // Qn- 4
    int N, div;

    printf("Enter number to check odd and even ");
    scanf("%d",N);
    div =N/2;
    
    if(div == N)
    {
        printf("%d numb is even", N);
    }

    else
    {
        printf("%d numb is odd", N);
    }
        
}