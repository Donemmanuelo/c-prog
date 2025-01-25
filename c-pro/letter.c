#include<stdio.h>
int main()
{   int x;
    char *text[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("enter any interger between 0-9 \n");
    scanf("%d", &x);
    printf("%s\n", *(text+x)); 
    return 0;
   
}