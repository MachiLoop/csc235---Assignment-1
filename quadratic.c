#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    //declare and receive the coeffecients
    float a;
    float b;
    float c;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    float discriminant = pow(b, 2) - (4 * a * c);

    //check if the roots are real
    if(discriminant > 0){

    float root_discriminant = sqrt(discriminant);
    // printf("%f \n", root_discriminant);

    int denominator = 2 * a;
    
    float root1 = (-b + root_discriminant)/denominator;
    float root2 = (-b - root_discriminant)/denominator;

    printf("The roots of the equation are: x equals to %.2f and x equals to %.2f",root1, root2);
    } else {
        printf("ERROR: The equation has no real roots");
    }


    return 0; 
}

