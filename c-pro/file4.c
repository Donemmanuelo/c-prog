#include<stdio.h>
int main()
{
int lower, upper;
printf("please enter any uppercase letter of your choice:"); 
scanf("%c", &upper);
lower=(upper + 32);
printf("your lowercase letter is: %c\n", lower);
return 0; 
}