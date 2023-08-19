#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 5;

    int *pNum1 = &num1;
    int *pNum2 = &num2;

    printf("num1 before change: %d\n", num1);
    printf("num2 before change: %d\n\n", num2);

    printf("pNum1 value: %d\n", *pNum1);
    printf("pNum2 value: %d\n", *pNum2);

    printf("pNum1 address: %p\n", pNum1);
    printf("pNum2 address: %p\n\n", pNum2);

    int temp;
    temp = *pNum1;
    num1 = *pNum2;
    num2 = temp;

    printf("num1 after change: %d\n", num1);
    printf("num2 after change: %d\n", num2);

    return 0;
}