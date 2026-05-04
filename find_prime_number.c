
//prime number check

#include<stdio.h>
#include<math.h>

int isPrime(long long n){

    if(n<=1){
        
        return 0;
    }
    if(n==2){

        return 1;
    }
    if(n%2==0){
        return 0;
    }
    long long limit = (long long)(sqrt((double)(n)));
     for (int i=3;i<=limit;i+=2){
        if(n%i==0){
            return 0;
        }
     }
     return 1;
   
}

int main(){
 long long n;

 printf("enter a number:\n");
 scanf("%lld",&n);
    if(isPrime(n)){
        printf("%lld isprime\n",n);
    }
    else{
        printf("%lld is not prime\n",n);
    }
    return 0;
}