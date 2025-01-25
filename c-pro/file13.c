//program to print element of an array in reverse order and in character format
#include<stdio.h>
int main(){
    char text[14] ={'d', 'a', 'r', 'r', 'h', 'a', 'f', 'o', 'r', 't', 'k', 'e', 'l', 'E'};
    size_t j = sizeof(text)/sizeof(text[0]);
    for(int i=0; i<j;i++)
    {
    printf("%c\n", text[j-1-i]);
    }
    return 0;
    }
