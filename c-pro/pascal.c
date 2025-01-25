#include<stdio.h>
int main() 
{
    int row, i, j;
    printf("please enter the number the row you want \n");
    scanf("%d", &row);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf(" ");
        }
        
        if(j == 0 || i == 0)
        {
             printf("   *"); 
        }
        else
        {
            for(int j = 0; j <= i; j++)
            {
                printf("  ");

                printf("%d", i * j);
                
            }
        }
        printf("\n");

           
    }
    return 0;
}