#include<stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}

void calculate(int (*op)(int,int),int a, int b){
    printf("result is %d",op(a,b));//fuction pointer call
}

int main() {
int a,b;
char choise;
 int (*op)(int , int ); //declaration

printf("enter two numbers:-");
scanf("%d %d",&a,&b);

printf("enter the operation you want to perform (+,-,*,/):-");
scanf(" %c",&choise);

switch(choise){

    case '+':
        op=add;//assignment
        break;
    case '-':
        op=sub;    
        break;
    case '*':
        op=mul;    
        break;
    case '/':
        op=div;    
        break;      
    default:
        printf("invalid operation");    
        break;
}
calculate(op,a,b);

    return 0;
}