//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main(){

    char x;

    printf("enter a letter: ");
    scanf("%c",&x);

    if((x>='A')&&(x<='Z') || (x>='a')&&(x<'z')){
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||
           x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){

            printf("vowel");
        }
        else{
            printf("consonant");
        }
        
    }
    else{
        printf("inavlide input");
    }
    return 0;
}