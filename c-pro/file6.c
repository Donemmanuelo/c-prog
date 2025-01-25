// program to find the greatest and smallest interger within a range of number, and also to find the sum and average of those numbers
#include<stdio.h>
int main(){
int x1, x2, x3, x4; //declaring variables
float sum, avg;  //declaring variables
printf("please enter any interger \n"); 
scanf("%d", &x1);
printf("please enter another different interger \n");
scanf("%d", &x2);
printf("please enter another different interger \n");
scanf("%d", &x3);
printf("please enter another different interger \n");
scanf("%d", &x4);
sum = (x1 + x2 + x3 + x4);
avg = (sum/4);
int smallest = x1;
int greatest = x4;
if ( smallest > x2 || greatest < x1){
smallest = x2;
greatest = x1;
}
else if ( smallest > x3 ||  greatest < x2){
smallest = x3;
greatest = x2;
}
else if ( smallest > x4 || greatest < x3){
smallest = x4;
greatest = x3;
}
printf("the greatest interger is: %d\n", greatest);
printf("the smallest interger is: %d\n", smallest);
printf("the sum of the interger is: %f\n", sum);
printf("the average of the interger is: %f\n", avg);
return 0;
 }