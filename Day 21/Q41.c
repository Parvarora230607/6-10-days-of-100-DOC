//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = (int)log10(num) + 1;

    first = num / (int)pow(10, digits - 1);

    last = num % 10;

    middle = (num % (int)pow(10, digits - 1)) / 10;

    result = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("Number after swapping: %d\n", result);

    return 0;
}