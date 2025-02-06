#include<stdio.h>
int main() {
    int num,num1;
    printf("Give me your positive non zero number: ");
    scanf("%d",&num);
    if((num > 0) && ((num & (num-1)) == 0 )) {
        printf("Yes");
    }
    else if(num == 0) {
        printf("Zero is not a valid input");
    }
    else if(num < 0) {
        printf("Negative input is not valid");
    }
    else {
        printf("No");
    }
    return 0;
}