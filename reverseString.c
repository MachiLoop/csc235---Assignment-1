#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char sentence[1024];
    printf("Enter a sentence(Limit of 1024 characters): ");
    fgets(sentence, 1024, stdin);

    sentence[strlen(sentence) - 1]= '\0';

    printf("The reversed string is: ");
    // loop the string backwards
    for(int i = strlen(sentence) - 1; i >= 0; i--){ 
   
         printf("%c", sentence[i], i);
         
    };
    return 0; 
}
