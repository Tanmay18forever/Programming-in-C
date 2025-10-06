#include <stdio.h>
int main()
 {
    int num, i;
    int c=0;
    scanf("%d", &num);
    for(i=1; i<= num ; i++)
    if (num%i==0) 
    {
        c++;
    }
     if(c==2)
     {
        printf("%d is a prime number.\n", num);
    } 
    else
     {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}