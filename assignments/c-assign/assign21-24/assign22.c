//Qn -1
//In the factorial for loop - the loop condition - i == fa //I can't write like this
// #include<stdio.h>
// int factorial(int );

// int factorial(int fa)
// {
//     int fact = 1;
//     for(int i = 1; i <= fa; fa--)
//     {
//         fact = fact * fa;
//     }
//     return fact;
// }
// int main()
// {
//     int f = 5;
//     int ans;
//     ans = factorial(f);
//     printf("%d", ans);

//     return 0;
// }



//Qn -5
// a value of type "void" cannot be assigned to an entity of type "int"C/C++(513)

#include<stdio.h>
void print_prime_factors(int );

void print_prime_factors( int N)
{
    int a = 2;
    for(int i =2; N>=1; i++)
    {
        if(N % i == 0)
        {
            printf("%d ", i);
            N = N / i;
            i = a;
        }
    }
}

int main()
{
    int num = 36;
    print_prime_factors(num);

    return 0;
}



