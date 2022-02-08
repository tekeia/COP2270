#include<stdio.h>

int integerPower (int base, int exponent);

int main () {
printf("pow(3, 4) = %d\n", integerPower(3, 4));

return 0;
}

int integerPower (int base, int exponent) {
int i;
int result = 1;
for (i = 1; i <= exponent; i++)
    result *= base;

return result;
}
