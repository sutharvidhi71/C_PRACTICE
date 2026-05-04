
//write a program to find area and perimeter of rectangle

#include<stdio.h>

int main (){
float h,w;

printf("enter hight and width of rectangle to find perameter and area:-");
scanf("%f%f",&h,&w);

int area=h*w;//logic to find area
printf("area of rectangle is:-%d",area);

int perameter=2*(h+w);//logic to find perameter
printf("\nperameter of rectangle is:-%d",perameter);

return 0;
}