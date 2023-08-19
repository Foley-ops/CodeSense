#include <stdio.h>
#include <string.h>

int main(){
    int i;

    char userInput[20];
    char *pInput = userInput;

    printf("Enter a word less than 20 characters: ");
    scanf("%19s", pInput);

    int length = strlen(pInput);
    printf("The length of the String is: %d\n", length);

    for (i = (length - 1); i >= 0; i--){
        printf("%c", userInput[i]);
    }

    return 0;
}
