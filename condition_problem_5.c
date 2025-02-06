#include<stdio.h>
int main() {
    int num,num1;
    printf("Give me your positive non zero number: ");
    scanf("%d",&num);
    if((num > 0) && ((num & (num-1)) == 0 )) {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}