#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main() 
{
    int numb, temp;
    srand(time(NULL));
    int num1 = rand() % 101;
    int num2 = rand() % 101;
    int middle = (num1 +num2)/2;
    printf("please guess any digit of your choice \n");
    do 
    { 
        scanf("%d", &numb);    
        if (num1 < num2)
        { 
            if ( middle == numb)
            {
                printf(" you guess it correctly, the middle is: %d\n", middle);

            }
            else if ( (middle -3) < numb || numb < middle)
            {
                printf("your number too little bit small %d\n",  (middle +3));
                
            }
            else if ( middle < numb || numb < (middle +3))
            {
                printf("your number is a little bit too big %d\n", (middle + 3));
                
            }
            else if ( numb  < num1)
            { 
                printf("your number is smaller than %d\n", num1);
                
            }
            else if ( numb > num2)
            {
                printf("your number is bigger than %d\n", num2);
            
            }
            
        } 
        else 
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
            if ( (middle -3) < numb || numb < middle)
            {
                printf("your number too little bit bigger %d\n",  (middle -3));
                
            }
            else if ( middle == numb)
            {
                printf(" you guess it correctly, the middle is: %d\n", middle);

            }
            else if ( middle < numb || numb < (middle +3))
            {
                printf("your number is a little bit too big %d\n", (middle +3));
                
            }
            else if ( numb  < num1)
            { 
            printf("your number is  smaller than %d\n", num1);
            }
            else if ( numb > num2)
            {
                printf("your number is  bigger than %d\n", num2);
            
            }

        } 
        

    }while(numb != middle);
    return 0;
}