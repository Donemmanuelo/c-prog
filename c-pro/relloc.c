#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char *str1;
//char *str2;
str1 = (char*)malloc(16);
strcpy(str1, "0123456789AB");

str1 = realloc (str1, 8);

//str1=NULL;
printf("str1 value: %p [%s]\n", str1, str1);
//printf("str2 value: %p [%s]\n", str2, str2);
free(str1);
return 0;
}