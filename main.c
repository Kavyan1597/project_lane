#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

uint8_t es;//declaring engine state variable
int engine_state(uint8_t ES);
int wiper_state(float);
int main()
{
    float ws;
    while(1)
    {
        printf("\nEnter engine state:");
        scanf("%u",&es);
        engine_state(es);//function call to define state of engine
        if (es==1)
        {
            printf("\nEnter rain intensity:");
            scanf("%f",&ws);
            wiper_state(ws);//function call to decide speed of wiper motor
            break;
        }
        break;
    }
}
int wiper_state(float rain_int)//function definition
{
   if(rain_int<=100)
        printf("\nWiper OFF, PWM=0%%\n");//depending on rain intensity the speed of wiper through pwm is controlled
   else if(rain_int>100&&rain_int<=250)
        printf("\nLOW MODE, PWM=25%%\n");
   else if(rain_int>250&&rain_int<500)
        printf("\nMEDIUM MODE, PWM=50%%\n");
   else
        printf("\nHIGH MODE, PWM=75%%\n");
}
int engine_state(uint8_t ES)//function definition
{
    if(ES==1)
        {
            printf("\nEngine ON");//defining engine states whether engine is on or off
        }
        else
        {
            printf("ENGINE OFF\n");
        }
}
