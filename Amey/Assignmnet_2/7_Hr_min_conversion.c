//hh:mm:ss format and total no.of seconds

#include<stdio.h>

int main()
{
int input1,Hr ,sec ,min , time1=3600;

printf("Input seconds: \n");
scanf("%d",&input1);

Hr = (input1/time1);

min = ((input1 - (Hr*3600))/60);

sec = input1- (Hr*3600)-(min*60);

printf("Time in HH:MM:SS format is %d:%d:%d",Hr,min,sec);



return 0;
}








