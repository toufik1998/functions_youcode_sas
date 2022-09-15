#include <stdio.h>
#include <stdlib.h>

void echanger(int a, int b, int c){
    printf("A = %d \n", a);
    printf("A = %d \n", b);
    c = a;
    a = b;
    b = c;
    printf("Value of A & B after the exchange \n");
    printf("A = %d \n", a);
    printf("A = %d \n", b);

}

int main()
{
    int a, b, c;
    a = 4;
    b = 8;
    echanger(a, b, c);
    return 0;
}
