#include<stdio.h>

int main()
{
float temp , fehr_temp;

printf("Enter temperature in celcius");

scanf("%f",&temp);

fehr_temp = (temp * 1.8 + 32);
printf("Tempereture in celcius is %f and temperature in Fahrenheit is %f",temp,fehr_temp);

return 0;

}