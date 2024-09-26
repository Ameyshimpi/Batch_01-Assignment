//6. Implement a C program to find out biggest of 3 no.s using conditional operator.

#include<stdio.h>

int main()
{
int num1, num2, num3;

printf("Enter num1 , num2, num3\n");
scanf("%d %d %d",&num1,&num2,&num3);
printf("num1 = %d\n num2 = %d\n num3 = %d\n",num1,num2,num3);

if((num1>num2) && (num1>num3))
	printf("num1 %d is greater than num2 %d and num3 %d",num1,num2,num3);

if((num2>num1) && (num2>num3))
	printf("num2 %d is greater than num1 %d and num3 %d",num2,num1,num3);	

if((num3>num1) && (num3>num2))
	printf("num3 %d is greater than num1 %d and num2 %d",num3,num1,num2);

return 0;
}
