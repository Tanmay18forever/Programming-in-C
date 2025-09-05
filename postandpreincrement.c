#include <stdio.h>
int main()
{
    int x=5;
    int result1 = x++;
    printf("Post increment = %d", result1);
    int result2 = ++x;
    printf("Pre increment = %d", result2);
}