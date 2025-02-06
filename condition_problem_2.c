#include<stdio.h>

int main() {
    int number;
    printf("Give your number: ");
    scanf("%d",&number);
    if(number % 2 ==0) {
        printf("Evan");
    }
    else {
        printf("Odd");
    }
    return 0;
}
