//10. Accept any two numbers, if the first number is greater than second number then print the difference of these two numbers, otherwise print their sum. Write this program using ternary operator.
#include<stdio.h>

int main()
{
int num1,num2;

printf("Enter first number :");
scanf("%d",&num1);

printf("Enter second number :");
scanf("%d",&num2);

if(num1>num2)
	printf("First number is greater number : %d",num1);
else
	printf("Second number is greater number: %d",num2);
	
return 0;
}