#include<stdio.h>
int main(){
int cir, r;
//double area;
const int pi = 3.14;
printf("please enter the value for your radius \n");
scanf("%d", &r);
cir = 2 * pi *r;
//area = ((double)(pi * r * r));
printf("the circumference of a circle is: %d\n", cir);
//printf("the area of a circle is: %lf\n", &area);
#define FS "%f"
//printf("[%d] "FS, area, n->data);
return 0;
}