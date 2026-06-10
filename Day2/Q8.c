/*Write a program to Check whether a number is palindrome*/
#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversed)
        printf("%d is a Palindrome Number.\n", originalNum);
    else
        printf("%d is Not a Palindrome Number.\n", originalNum);

    return 0;
}
