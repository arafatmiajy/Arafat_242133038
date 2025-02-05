#include<stdio.h>
int main() {
    int a,b,c,x,y;
    printf("Give me your three angle (angle value should be such that, 0 < value < 180): ");
    scanf("%d %d %d",&a,&b,&c);
    x=a+b+c;
    y=a*b*c;
    if((x == 180)&&(y != 0)) {
        printf("This is a triangle");
    }
    else {
        printf("This is not a triangle");
    }
    return 0;
}