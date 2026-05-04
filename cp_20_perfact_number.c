

#include<stdio.h>
int main(){
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num ; i++){
        sum += (num % i == 0) ? i : 0;
    }
    if(sum == num){
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}