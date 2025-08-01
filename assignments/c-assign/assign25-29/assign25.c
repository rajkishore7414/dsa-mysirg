// #include<stdio.h>
// void printN(int);

// void printN(int n)
// {
//     if(n>0)
//     {
//         printN(n-1);
//         printf("%d ", n);
//     }
// }
// int main()
// {
//     printN(10);

//     return 0;
// }





//Qn- 2

// #include<stdio.h>
// void printN(int);

// void printN(int n)
// {
//     if(n>0)
//     {
//         printf("%d ", n);
//         printN(n-1);
//     }
// }
// int main()
// {
//     printN(10);

//     return 0;
// }








//Qn -3 
#include<stdio.h>
void Odd_N(int);

void Odd_N(int n)
{
    if(n > 0)
    {
        Odd_N(n * 2 - 1);
        printf("%d \n", n);
        Odd_N(n -2);
        printf("%d \n", n);
    }
}
int main()
{
    Odd_N(5);

    return 0;
}
