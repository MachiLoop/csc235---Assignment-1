#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char name[100];

    printf("Enter the name of your lecturer: ");
    fgets(name, 100, stdin);
    printf("Hello world, %s \n", name);
    return 0; 
}
