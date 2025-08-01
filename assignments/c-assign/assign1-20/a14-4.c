// LCM 

#include<stdio.h>
int main()
{
    // //Qn- 4
    // int num1 = 8, num2 = 20, lcm =1, firstN =2;
    // int j = 1, i;
    // // printf("Enter two numbers to calcualte LCM ");
    // // scanf("%d %d", &num1, &num2);

    // // for( i = 2; i<num1 || i<num2 ;i++)
    // {
    //     if(num1 % i == 0 && num2 % i ==0)
    //     {
    //         num1 = num1 / i;
    //         num2 = num2 / i;
        
    //         lcm = lcm * i; // lcm calculation is progress
    //         firstN = i;

            
    //         // j++;
    //     }
    //     j++;
    // }
    // // printf("LCM of %d and %d- %d", num1, num2, lcm);
    // printf ("LCM - %d \n", lcm);
    // printf("%d %d",j, i);






    // int num1 = 10, num2 = 20, lcm =1, firstN =2;
    // int j = 1, i;
    // // printf("Enter two numbers to calcualte LCM ");
    // // scanf("%d %d", &num1, &num2);

    // // for( i = 2; i<num1 || i<num2 ;i++)
    // for (i = 2; num1 != 1 || num2 != 1; i++)
    // {
    //     if(num1 % i == 0 || num2 % i == 0)
    //     {
    //         if(num1 % i == 0)
    //         {
    //             num1 = num1 / i;
    //         }
    //         if(num2 % i == 0)
    //         {
    //             num2 = num2 / i;
    //         }
        
    //         lcm = lcm * i; // lcm calculation progress
    //         // firstN = i;
    //         i = firstN;

            
    //         // j++;
    //     }
    //     // lcm = lcm * i;

    //     j++;
    // }
    // // printf("LCM of %d and %d- %d", num1, num2, lcm);
    // printf ("LCM - %d \n", lcm);
    // printf("%d %d",j, i);











// #include <stdio.h>

// int main() {
    int num1 = 81, num2 = 72;
    int a = num1, b = num2;
    int lcm = 1, i = 2;

    while (a != 1 || b != 1) {
        if (a % i == 0 || b % i == 0) {
            if (a % i == 0) a /= i;
            if (b % i == 0) b /= i;
            lcm *= i;
            i = 2;
        } else {
            i++;
        }
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    // return 0;
// }




    printf("\n");
    return 0;
}











// https://static.qumath.in/static/website/old-cdn-static/common-factor/lcm-of-21-and-30-by-division-method.png