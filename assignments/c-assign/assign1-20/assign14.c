#include<stdio.h>


int main()
{

    // //Qn- 4
    int num1 = 8, num2 = 20, lcm =1, firstN =2;
    int j = 1, i;
    // printf("Enter two numbers to calcualte LCM ");
    // scanf("%d %d", &num1, &num2);

    // for( i = 2; i<num1 || i<num2 ;i++)
    for (i = 2; num1 == 1 && num2 == 1; i++)
    {
        if(num1 % i == 0 && num2 % i ==0)
        {
            num1 = num1 / i;
            num2 = num2 / i;
        
            lcm = lcm * i; // lcm calculation is progress
            firstN = i;

            
            // j++;
        }
        j++;
    }
    // printf("LCM of %d and %d- %d", num1, num2, lcm);
    printf ("LCM - %d \n", lcm);
    printf("%d %d",j, i);





    //Qn- 3
    // int N, i, check_prime = 1;
    // printf("Enter Number to check the number is prime or not ");
    // scanf("%d",&N);

    // for(i=2; i<N; i++)
    // {
    //     if(N % i == 0)
    //     {
    //         check_prime++;
    //     }
    // }
    // if(check_prime >=2)
    // {
    //     printf("is not prime number");
    // }
    // else
    // {
    //     printf("prime number");
    // }







    // int N, i, check_prime = 1;
    // printf("Enter Number to check the number is prime or not ");
    // scanf("%d",&N);

    // for(i=2; i<N; i++)
    // {
    //     if(N % i == 0)
    //     {
    //         // check_prime++;
    //         printf("Not Prime Number");
    //         break;
    //     }

    // }





// checkPrime(19);










    return 0;
    printf("\n");

}