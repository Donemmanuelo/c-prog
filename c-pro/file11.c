//multiplication table
#include<stdio.h>
int main()
{
    int number;
    printf("please any of which you will like to get the multiple \n");
    scanf("%d", &number);
    int i=0;
    while(i <= 10)
    {
        printf("%d * %d = %d\n", i, number, number*i);
        i++;
    }
    return 0;
}