#include<stdio.h>
int main()
{
    //Qn- 1
    int i, N = 2, check_prime = 1;

    for(i = 2; N <= 100; i++)
    {
        if(N % i == 0)
        {
            check_prime++;
        }
            if(N==i)
            {
                if(check_prime ==3)
                {
                    N++;
                    i = 2;
                }
                if(check_prime == 2)
                {
                    printf("%d ", N);
                    check_prime = 1;
                    N++;
                    i =2;
                }

            }
    }
    
}