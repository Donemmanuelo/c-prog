//program to calculate the number of odd numbers
#include<stdio.h>
int main()
{
   int d1 = 0;
   int arr1[10];

   for(int i = 0;i < 10; i++)
   {
      printf("please enter ten interger \n");
      scanf("%d", &arr1[i]);
      //arr1[i] = d2;
      if (arr1[i]%2 == 1)
      {
         d1++;
      printf(" %d is odd interger \n", arr1[i]);

      }
      else 
      {
        printf(" %d is even interger \n", arr1[i]);
         
      }
   }   

   printf(" the numbers of odd intergers are %d\n", d1);
   return 0;
}