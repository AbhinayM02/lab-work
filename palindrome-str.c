#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str); 

    length = strlen(str);

    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; 
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is not a Palindrome.\n");

    return 0;
}

