// program for simple calculator that can carry out the four operation known as #include<stdio.h>
#include<stdio.h>
#include<math.h>

int main(){
   
    double n, x, fact = 1;
    
    printf("please indicate which operation you want to carry out \"addition=1, subtraction=2, division=3, multiplication=4, square_root=5, factorial=6, fibonacci=7\" \n");
    scanf("%lf", &x);
    
    int result = x;
    if(result == 1){
    printf("please enter the number of your choice \n");
    scanf("%lf", &n);

    for (double j=1; j<n +1; j++){
        printf("\n");
    for (double i=1;i<13;i++){
        printf("%.0lf + %.0lf = %.1lf\n", i, j , i+j);
    }
    }
    }
    else if(result == 2){
    printf("please enter the number of your choice \n");
    scanf("%lf", &n);

    for (double j=1; j<n +1;j++)
    {
        printf("\n");
        for (double i=1;i<13;i++)
        {
            printf("%.0lf - %.0lf = %.1lf\n", i, j , i-j);
        }
    }
    }
    else if(result == 3)
    {
    printf("please enter the number of your choice \n");
    scanf("%lf", &n);

    for (double  j=1; j<n +1;j++)
        {
        printf("\n");
        for (double  i=1;i<13;i++)
        {
            printf("%.0lf / %.0lf = %.1lf\n", i, j , i/j);
        }
    }
    }
    else if(result == 4){
    printf("please enter the number of your choice \n");
    scanf("%lf", &n);

    for (double j=1; j<n +1;j++)
    {
        printf("\n");
        for (double  i=1;i<13;i++)
        {
            printf("%.0lf * %.0lf= %.1lf\n", i, j , i*j);
        }
    }
    }
    else if(x == 5)
    {
        printf("please enter the number of your choice \n");
        scanf("%lf", &n);

        printf("the square root of %.2lf is sqrt(%.2lf) \n", n, sqrt(n));
    }
     else if(x == 6)
    {
        printf("please enter the number of your choice \n");
        scanf("%lf", &n);

        for(double i = 1; i <=n; i++)
        {  
             fact *= i;
        }
        printf(" fact is %lf\n", fact);
    }
    else if(x == 7)
    {
        printf("please enter the position");
        scanf("%lf", &n);
        for(int i = 0; i <=n; i++)
        {  
           
            int numb[]={0,1};
            numb[i + 2] = (numb[i] + numb[i + 1]);
            printf(" fibonacci number at position %d is [%d]\n", i, numb[i]);
        }
    }

    return 0;
    }
