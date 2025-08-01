#include<stdio.h>
int main()
{
    //Qn- 1
    /*
    int a=0, b=1, i=1, N, fib;
    printf("Enter number to get Nth fib num ");
    scanf("%d", &N);
    for(i=1; i<=N;i++)
    {
        fib = a + b;
        a = b;
        b = fib;

    }

    printf("%dth fib numb - %d", N, fib);
    */



    //Qn- 2
    /*
        int a=0, b=1, i=1, N, fib;
    printf("Enter number to print all Nth fib num ");
    scanf("%d", &N);
    for(i=1; i<=N-2;i++)
    {
        if(a==0 && b==1)
            printf("%d %d ",a,b);
        fib = a + b;
        a = b;
        b = fib;

    printf("%d \n", fib);
    }
    */




    //Qn- 3
    /*
    int a=0, b=1, i=1, N, fib;
    printf("Enter number to that the numb is fib or not/ ");
    scanf("%d", &N);
    for(i=1; i<=N-2;i++)
    {
        if( N==b)
        {
            printf("%d is fib number",N);
            break;
        }

        fib = a + b;
        a = b;
        b = fib;

        if(N==fib)
        {
            printf("%d is fib number", N);
            break;
        }
            
    }
    if(N!=fib)
        printf("%d is not fib number", N);
    */






    //Qn- 4


    return 0;
}