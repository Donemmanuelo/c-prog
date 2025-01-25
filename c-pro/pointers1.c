#include<stdio.h>
#include<ctype.h>
 char (const char *text)
 {
    int count = 0;
    while(*text)
    {

    
        if (isspace((unsigned char)*text))
        {
            count ++;
        } 
    text++;
    }
    return count;
 }

int main()
{
    const char *input ="this code has whitespace";
    int Number_of_whitespace_count = getchar(input);
   printf("the number of whitespaces are %d", Number_of_whitespace_count);
   return 0;
}