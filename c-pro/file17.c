//program to calculate the number of zero in a matrix 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 
    int  r;
    int max1;
    int max2;
    printf(" please enter the number of row and column you want \n");
    scanf("%d%d", &max1, &max2);
    int back[max1][max2];
      srand(time(NULL));
    for(int i = 0; i < max1; i++)
    {

        for(int j = 0; j < max2; j++)
        {
            
            back[i][0]=rand()%101;
            
            if( back[i][j] < 101 ||  back[i][j] >= 0)
            { 
                printf("%d\t", back[i][j]);
                if(back[i][j] == 0 )
                {
                    r += 1;
                }
            }
            
        }
        printf("\n");
       
    }
    printf("the number of zero is : %d\n", r);
    return 0;
}

   