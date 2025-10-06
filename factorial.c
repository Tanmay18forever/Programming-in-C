#include <stdio.h>
int main()
 {
    int num;
    int factorial = 1; 
    int i = 1;
    scanf("%d", &num);
    if (num < 0)
     {
        printf("Factorial is not defined for negative numbers.\n");
     }
     else if (num == 0) 
     {
        printf("The factorial of 0 is 1.\n");
     }
     else
      {
        while (i <= num) {
            factorial = factorial * i; 
            i++;            
        }
        printf("The factorial of %d is %lld.\n", num, factorial);
    }

    return 0;
}