#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char name[35];
    int noStudents;

    printf("Enter the number of students: ");  
    scanf("%d", &noStudents);
    getchar();
  
    for(int i = 1; i <= noStudents; i++){
        printf("Enter name of student %d: ", i);
        fgets(name, 35, stdin);
        // name[strlen(name) - 1]= '\0';
        
    }
    return 0;
}
