#include<stdio.h>
int main(){
    unsigned long long  rng1,rng2;
    unsigned long long sum = 0;
    printf("enter a range start to end: ");
    scanf("%llu%llu",&rng1,&rng2);
    printf("Perfect numbers between %llu and %llu are:\n", rng1, rng2);
    for(unsigned long long i=rng1;i<=rng2;i++){
        for(unsigned long long j=1;j<i;j++){
            if( i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%llu\n",i);
            sum=0;
        } else {
            sum=0;
        }
    }
    return 0;
}