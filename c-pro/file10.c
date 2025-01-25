#include<stdio.h>
int main(){
    char fruit;
    printf("please enter the first letter corresponding to the fruit of your chose \"orange=0, mangousan=1, apple=2\" \n");
    scanf("%c", &fruit);
    switch(fruit)
    {
        case 'O':
        printf("your fruit name is Orange \n");
        break;

        case 'M':
        printf("your fruit name is Mangousan \n");
        break;

        case 'A':
        printf("your fruit name is Apple \n");
        break;

        default:
        printf("you are free to select any fruit from the option above \n");
        break;
    }
    return 0;
}

