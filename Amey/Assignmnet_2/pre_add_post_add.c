#include<stdio.h>

int main()
{

int num , num1;

printf("Enter number: ");
scanf("%d",&num);

printf("++number is %d\n",++num);
printf("number++ is %d\n",num++);
printf("number is %d\n",num);
//y=x++10, y=++x10
//printf("number++10 is %d\n",(num++10));
//printf("++number10 is %d\n",(++num10));

//c) q=p--/3, q=—p/3
printf("Enter number1: ");
scanf("%d",&num1);
printf("--number is %d\n",((--num1)));
printf("number-- is %d\n",((num1--)));
printf("number is %d\n",((num1)));

return 0;
}