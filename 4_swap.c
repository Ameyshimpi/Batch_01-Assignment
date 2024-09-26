#include<stdio.h>

int main()
{
	
int fir=12 ,sec=33 ,swap ;
//with temperary variable
printf("first number: %d , second number : %d \n", fir ,sec);
//fir = 12;
swap = fir;
fir = sec;
sec = swap;
printf("Number after swapping\nfirst number = %d , second nummber = %d", fir , sec);



return 0;
}


