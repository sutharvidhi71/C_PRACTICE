//find largest of three numbers using nested if else
#include<stdio.h>

int main(){
    int a,b,c;
        printf("enter three number:\n");
        scanf("%d %d %d",&a,&b,&c);

        if(a>b && a>c){
            printf("%d is largest",a);

        }
        else if(b>a && b>c){
            printf("%d id largest",b);
        }
        else{
            printf("%d is largest",c);
        }
    return 0;
}