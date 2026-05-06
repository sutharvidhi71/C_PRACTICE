#include<stdio.h>

int recursion(int n){
    if(n<=0)
        return 1;
    else
        return n * (recursion(n-1)); 
}
int main(){
    int n=recursion(5);
    printf("%d",n);
    return 0;
}
