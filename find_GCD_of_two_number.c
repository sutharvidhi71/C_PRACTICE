
#include <stdio.h>

int gcd(int a, int b){
    if(b==0)
        return a;
    else
        return gcd(b,(a%b));
}
int main() {
    // Write C code here
    
    int a, b, result ;
    
    printf("Enter two number to find greatest common devider :\n ");
    scanf("%d%d",&a,&b);
    
    result=gcd(a,b);
    
    printf("the GCD od %d and %d is %d ",a,b,result);
    
    return 0;
}