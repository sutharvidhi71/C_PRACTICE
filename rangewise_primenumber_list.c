// find prime between to numbers
//list of prime number to given number

#include<stdio.h>
#include<math.h>

int isPrime(long long o){
    if (o==0){
        return 0;
    }
    if(o==2){
        return 1;
    }
    if(o%2==0){
        return 0;
    }
    long long limit= (long long )(sqrt((double)(o)));

    for (int i=3;i<=limit;i+=2){
        if(o%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
 long long n;
 long long m;

 printf("enter two number to find prime \n");
 scanf("%lld %lld",&m,&n);

 for (int i=m;i<=n;i++){
    if (isPrime(i)){
        printf("%d  ",i);
    }
 }
    return 0;
}