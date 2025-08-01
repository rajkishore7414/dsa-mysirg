#include<stdio.h>

            int checkPrime(int);



            int checkPrime(int numb)
            {
                
            for(int i=2; i<numb; i++)
            {
                if(numb % i == 0)
                {
                    
                    return printf("Not Prime");
                }

            }

            return printf("Prime Number");

            }


int main()
{
    
}