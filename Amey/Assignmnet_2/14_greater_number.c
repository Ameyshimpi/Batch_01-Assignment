//14. Write a C program to find the maximum of 2 numbers using Conditional operator.

#include<stdio.h>

int main()
{
int a,b;
printf("Enter the number1 number2");
scanf("%d %d",&a,&b);

if(a>b)
	printf("Greater number is : %d",a);
else
	printf("Greater number is : %d",b);
	

return 0;
}
