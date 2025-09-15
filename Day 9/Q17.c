//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main(){

    int x, y, z;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter 3 nums: ");
    scanf("%d %d %d", &x, &y, &z);

    discriminant = y * y - 4 * x * z;

    if (discriminant > 0){
        root1 = (-y + sqrt(discriminant)) / (2 * x);
        root2 = (-y - sqrt(discriminant)) / (2 * x);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (discriminant == 0){
        root1 = -y / (2.0 * x);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}