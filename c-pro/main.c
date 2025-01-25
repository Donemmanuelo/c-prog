#include<stdio.h>
#include "electro.h"
int main()
{
    float r1=5.7,  r11=5, r12=10, vol=15;
    float res = get_req_resistance(r1, r11, r12 );
    float pw = get_power(vol);
    printf("the equivalence resistance is %.2lf ohm's \n", res);
    printf("the output power is %.2lf watts \n", pw);
    return 0;
}
