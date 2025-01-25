#include "electro.h" //declaring our preprocessor
float resistance, power;
float get_req_resistance(float r1, float r11, float r12)
{
    resistance = (((r11*r12)/(r11 + r12)) + r1);
    return resistance; 
}
float get_power(float vol)
{
    power = ((vol/resistance)*vol);
    return power;
}
