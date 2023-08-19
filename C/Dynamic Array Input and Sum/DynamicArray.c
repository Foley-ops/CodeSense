#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;
    int askInput;

    printf("Enter number of elements: ");
    scanf("%d", &askInput);

    ptr = (int*)malloc(askInput * sizeof (int));

    printf("%d", *ptr);

    return 0;
}