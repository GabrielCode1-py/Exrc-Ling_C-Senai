#include <stdio.h>

int main(){
    int num1, num2,soma;
    printf("Hello, World!\n");
    printf("This project uses the C++17 language standard version.\n");

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered: %d + %d\n=%d\n", num1, num2, num1 + num2);
    return 0;   
}