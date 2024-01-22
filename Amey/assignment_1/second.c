//code to take print numbers in different formats
#include <stdio.h>

int num;

int main()
{
printf("enter the number\n");
scanf("%d",&num);
printf("number in octal : %o\n",num);
printf("number in Hex : %x\n",num);
printf("number in decimal : %d\n",num);
return 0;
}
