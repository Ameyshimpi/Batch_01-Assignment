//11.Write a program that accepts marks in five subjects and calcuates the total percentage marks.

#include<stdio.h>

int main()
{
int sub1,sub2,sub3,sub4,sub5;
float perc;

printf("Enter marks of subject1 subject2 subject3 subject4 subject5 \n");
scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
printf("Marks %d %d %d %d %d \n",sub1,sub2,sub3,sub4,sub5);

perc = (float)(((sub1 + sub2 + sub3 + sub4 + sub5)*100/500));

printf("percentage is : %.2f",perc);

return 0;

}