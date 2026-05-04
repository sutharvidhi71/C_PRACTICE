// 1. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and
// width of 5 inches.
#include <stdio.h>
int main() {
    int inch_high=7;
    int inch_width=5;
    
    int perimeter=2*(inch_high+inch_width);
    int area=inch_high*inch_width;

    printf("perimeter=%d\n",perimeter);
    printf("area=%d\n",area);
    return 0;
}

----------output---------
perimeter=24
area=35