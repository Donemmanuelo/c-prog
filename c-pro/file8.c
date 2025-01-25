//program to that can print many cases 
#include<stdio.h>
int main(){
    int day; 
    printf("please enter interger of your choice \n");
    scanf("%d", &day);
    switch(day){
        case 1:
        printf("Today is monday \n");
        break;
            case 2:
        printf("Today is tuesday \n");
        break;
            case 3:
        printf("Today is wednesday\n");
        break;
            case 4:
        printf("Today is thursday \n");
        break;
            case 5:
        printf("Today is friday \n");
        break;
            case 6:
        printf("Today is saturday \n");
        break;
            case 7:
        printf("Today is sunday \n");
        break;
        default:
        printf("Looking forward to the weekend \n");
        break;
    }
    return 0;
}