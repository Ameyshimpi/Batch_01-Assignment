//( for eg:- 1:2:30 ==> 3750 8000 ==> 2:13:20 )

#include<stdio.h>

int main()
{

int hr , min, sec, sec1;

printf(" Enter Hour:");
scanf("%d",&hr);

printf("\n Enter minutes:");
scanf(" %d",&min);

printf("\n Enter seconds:");
scanf(" %d",&sec);

printf("Time converting to seconds is %d:%d:%d \n",hr,min,sec);
sec1 = (3600*hr) + (60*min) + sec ;

printf("Time in second : %d",sec1);

return 0;
}