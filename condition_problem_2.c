#include<stdio.h>

int main(){
int number;
printf("Give your number: ");
scanf("%d",&number);
if(number % 2 ==0){
printf("The number is evan");}
else {
printf("The number is odd");}
return 0;
}