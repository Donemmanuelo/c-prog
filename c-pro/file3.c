//program to check whether a number is even or odd
#include<stdio.h>
int main(){
int x;
printf("please enter any interger \n");
scanf("%d", &x);
if ( x%2 == 0 ){
printf("The number entered is even \n"); 
}
else{
    printf("The number entered is odd \n");
}
return 0;
}