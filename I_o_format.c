//8.Implement a C program using formatted I/O using printf (%5d, %05d,%-5d,%8.2f, %.2f etc.)

#include<stdio.h>

int main()
{
int input1;
float input2;

printf("Enter the decimal :\n");
scanf("%d",&input1);

printf("Enter the float :\n");
scanf("%f",&input2);

printf("format decimal 5d : %5d , 05d : %0.5d , -5d : %-5d\n",input1,input1,input1);
printf("format float 2.2f : %2.2f , .2f : %.2f",input2,input2,input2);

return 0;

}
