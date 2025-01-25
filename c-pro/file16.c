// program to ask the user to enter certain number of input to be able to escape out of the loop or break when a specific number is input in other to break out of the loop and print them at the end
#include<stdio.h>
int main()
{  
    int x;
    int y = 0;
    int N[99];
    for(int i=0; i < sizeof(N) / sizeof(N[0]); i++)
    {
       printf("please enter any interger \n");
        scanf("%d", &x);
        if(x == -1)
        {
         break;
        }
        else 
        {  
            N[i] = x;
            y +=1;
        }
    
    }
    for(int i=0; i < y; i++)
    {
        
        printf("%d\n", N[i]);
    }
    return 0;
}