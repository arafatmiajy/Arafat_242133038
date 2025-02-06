#include<stdio.h>
int main() {
    int x,y;
    printf("Give me your tow number: ");
    scanf("%d %d",&x,&y);
    if (x>y) {
        printf("%d is greater than %d",x,y);
    }
    else if (x<y) {
        printf("%d is greater than %d",y,x);
    }
    else
    {   printf("%d is equal to %d",x,y);
    }
    return 0;
}