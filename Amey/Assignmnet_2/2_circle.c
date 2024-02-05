#include<stdio.h>


int main()
{
float rad,peri,area;

printf("Enter a Radius of circle in cm:\n");
scanf("%f",&rad);

printf("Radius is %.2f cm\n",rad);

peri=(2*3.14*rad);
area = (3.14 * rad * rad);

printf("Area of circle is %.2f cm^2\n",area);
printf("Perimeter of circle is %.2f cm",peri);

return 0;

}






