#include<stdio.h>

int main()
{
int fir=22 , sec = 34;

printf("Number before swapping.\nFirst Number:%d , Second Number: %d\n",fir , sec);

fir = fir^sec;

sec = fir^sec;

fir = fir^sec;

printf("Number after swapping.\nFirst Number:%d , Second Number: %d",fir , sec);

return 0;
}