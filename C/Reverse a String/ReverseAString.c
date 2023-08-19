#include <stdio.h>
#include <string.h>

int main(){
    int i;

    char userInput[16];
    char *Pinput = userInput;

    printf("Enter a word less than 20 characters: ");
    scanf("%99s", Pinput);

    int length = strlen(Pinput);
    printf("The length of the String is: %d\n", length);

    for (i = (length - 1); 0 <= i; i--){
        printf("%c", userInput[i]);
    }

    return 0;
}