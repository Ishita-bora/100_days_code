#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            spaces++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            continue;  
        else
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}