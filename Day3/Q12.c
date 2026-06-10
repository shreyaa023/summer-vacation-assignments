/*Write a program to Find LCM of two numbers*/
#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp1, temp2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp1 = a;
    temp2 = b;

    while (temp2 != 0) {
        int rem = temp1 % temp2;
        temp1 = temp2;
        temp2 = rem;
    }

    gcd = temp1;
    lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}
