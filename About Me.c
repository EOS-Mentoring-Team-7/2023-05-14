#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];
    
    printf("Enter your name: 김현수");
    scanf("%s", name); 

    printf("Enter your age: 21");
    scanf("%d", &age); 

    printf("Enter your hobby: 게임");
    scanf("%s", hobby);
    
    printf("\nHello! My name is %s.\n", name);
    printf("I am %d years old and my hobby is %s.\n", age, hobby);

    return 0;
}
