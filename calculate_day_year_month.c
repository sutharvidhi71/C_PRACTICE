// 2. Write a C program to convert specified number of days into years, weeks and days.
#include<stdio.h>
int main()
{
 int days=1000;

 int years=days/360;
 
 int weeks=(days%360)/7;
 
 int rem_days=((days%360)%7)%7;
 
 printf("years=%d\n",years);
 printf("weeks=%d\n",weeks);
 printf("days=%d\n",rem_days);
 
 return 0;
}

-----------output------------
years=2
weeks=40
days=0