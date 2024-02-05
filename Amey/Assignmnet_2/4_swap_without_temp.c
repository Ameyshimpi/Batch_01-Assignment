#include<stdio.h>

int main()
{
int fir = 12, sec = 25;
printf("Numbers before swapping.\nFirst number : %d , Second number : %d \n", fir , sec);

sec = fir + sec ; //30

fir = sec - fir ; //20

sec = sec - fir; //10
printf("Numbers after swapping.\nFirst number : %d , Second number : %d ", fir , sec);

return 0;
}