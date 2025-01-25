//program to print any input with first upper case letter in lower case letter 
#include<stdio.h>
int main()
{
    char text, upper, lower;
    printf("please a enter a text of exactly 7 character and start with a capital letter \n");
    scanf("%c", &text);
    printf("please enter the first character of the string you just entered \n");
    scanf("%c", &upper);
    lower = (upper + 32);
    printf("the text in lowercase letter is: %c\n", lower);
    return 0;
}