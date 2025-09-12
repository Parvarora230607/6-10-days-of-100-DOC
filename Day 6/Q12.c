//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main(){

    int x;

    printf("Enter a num: ");
    scanf("%d",&x);

    if(x<0){
        printf("num is negative");
    }
    if(x>0){
        printf("num is positive");
    }
    if(x==0){
        printf("num is 0");
    }

    return 0;
}