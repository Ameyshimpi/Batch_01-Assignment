//12. Develop a C program to perform operations (+,*,-, / and %) on two whole numbers. Identify
//suitable data types to represent the numbers and resultant values

#include<stdio.h>

int main()
{

int a,b;
float c,d,e,f;

printf("Enter number1 number2 : ");
scanf("%d %d",&a,&b);

c = a + b;
d = a*b;
e = (float)(a/b);
f = (float)(a%b);

printf(" sum of number is %.2f \n",c);
printf(" multiply of number is %.2f \n",d);
printf(" divide of number is %.2f \n",e);
printf(" quat of number is %.2f \n",f);

return 0;
}
