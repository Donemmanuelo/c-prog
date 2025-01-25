// program to add a specific number of element in an array and print in character format 
#include<stdio.h>
int main()
{
    int arr0[10];
    int arr1[36];
    int left_corner0=48, right_corner0=57, left_corner1=65, right_corner1=90;
    int temp0 = (right_corner0 - left_corner0);
    int temp1 = (right_corner1 - left_corner1);

    for(int i = 0; i < temp0; i++)
    {
        arr0[i] = left_corner0;
        left_corner0 += 1;
    }
      
    for(int j = 0; j < temp1; j++)
    {
        arr1[j] = left_corner1;
        left_corner1 += 1;
    }
    
    for(int i = 0; i < sizeof(arr0)/sizeof(arr0[0]); i++)
    {
         printf("%c", arr0[i]); 
    }
    for(int j = 0; j < sizeof(arr1)/sizeof(arr1[0]); j++)
    {
         printf("%c", arr1[j]);
    }
    printf("\n");
    return 0;
}