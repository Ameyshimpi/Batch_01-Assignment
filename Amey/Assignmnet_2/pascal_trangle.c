#include<stdio.h>

int main()
{
int i , j ,k=3,l=5;


for(i=0; i < 5 ; i++)
{
	k++;
	
	for(j=0; j<k ; j++)
	{
		printf(" * ");
	}
	printf("\n");
}

return 0;
}