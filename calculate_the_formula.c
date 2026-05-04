// Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
#include<stdio.h>
 int main()
{
    float s = 1.0f;
    float numerator = 3.0f;
    float denominator = 2.0f;
    for(int i=1;i<4;i++){
        s += numerator/denominator;
        numerator += 2.0f;
        denominator *= 2.0f;
    }
    printf("Value of S is: %f\n",s);
    return 0;
}






