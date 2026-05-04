#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x=5,y = 10;
    swap(&x, &y);
    printf("%d %d", x, y); // Output: 10 5 }
}