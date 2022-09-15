#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("The new value of A = %d \n", a);
    printf("The new value of B = %d \n", b);
}

int main()
{
    int a, b;
    a = 4;
    b = 8;
    printf("Current value of A = %d \n", a);
    printf("current value of B = %d \n", b);
    swap(a, b);
    return 0;
}
