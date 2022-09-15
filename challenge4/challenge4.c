#include <stdio.h>
#include <stdlib.h>

void divideby(int number, int a){
    int result, i;
    result = number / a;
    printf("The result of %d / %d = %d \n", number, a, result);
    if(result % 2 == 0){
        printf("The number %d is non premier \n", result);
    }else{
        printf("The number %d is premier \n", result);
    }
}

int main()
{
    int number, a;
    while(number < 2 && a < 2){
        printf("Please enter a number \n");
        scanf("%d", &number);
        printf("Please enter a number \n");
        scanf("%d", &a);
    }

    divideby(number, a);
    return 0;
}
