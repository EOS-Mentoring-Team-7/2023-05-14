#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];
    
    printf("Enter your name: ");
    scanf("%s", name); 

    printf("Enter your age: ");
    scanf("%d", &age); 

    printf("Enter your hobby: ");
    scanf("%s", hobby);
    
    printf("\nHello! My name is %s.\n", name);
    printf("I am %d years old and my hobby is %s.\n", age, hobby);

    return 0;
}
