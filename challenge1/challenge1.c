#include <stdio.h>
#include <stdlib.h>

void add(int num1, int num2){
    printf("%d + %d = %d", num1, num2, num1 + num2);
}

int main()
{
    int num1, num2;
    printf("Please enter number One \n");
    scanf("%d", &num1);
    printf("Please enter number Two \n");
    scanf("%d", &num2);
    add(num1, num2);
    return 0;
}
