#include <stdio.h>
int main()
 {
    int num, i;
    int c=0;
    scanf("%d", &num);
    while(num!=0)
    {
        c++;
        num=num/10;
    }
        printf("%d number of digits in a number is.\n", c);

    return 0;
}