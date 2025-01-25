// applying ohm's law
#include<stdio.h>
#include<math.h>
int main(){
    float v=23, r=10, i;
    // v= (i * r);  mathematicall implication of ohm's law
    i= (v/r); // formular to calculate the amount of current
printf("The amount of current is: %lf\n", i);
return 0;
}