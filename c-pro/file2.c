#include<stdio.h>
int main(){
int x1 = 4, x2 = 5;
int temp, var;
temp = x1;
var = x2;
printf("please enter the new value of x1:");
scanf("%d", &x1);
printf("please enter the new value of x2:");
scanf("%d", &x2);
printf("the old value of the variable x1 is: %d\n", temp);
printf("the old value of the variable x2 is: %d\n", var);
printf("the new value of the variable x1 is: %d\n", x1);
printf("the new value of the variable x2 is: %d\n", x2);
return 0;
}