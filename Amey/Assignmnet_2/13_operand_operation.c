//13. Develop a C program to add two operands and store the result in one of the operand using
//addition assignment operator.

#include<stdio.h>

int main()
{
int a,b;
printf("Enter the number1 number2");
scanf("%d %d",&a,&b);

a+=b;
b*=a;

printf(" number1 a+=b is : %d \n number2 b*=a is : %d",a,b);

return 0;
}

