
//reverse the given number 

#include<stdio.h>
int main(){
     int n;
     long long reverse=0;

     printf("enter number:\n");

     if(scanf("%d",&n)!=1)//cheks if input is not invalid
     {
        printf("invelid input:\n");
        return 1;
     }

     int sigh=(n<0)?-1:1;//to store sign of number
     long long temp=(n<0)?-(long long )n:(long long )n;

     while(temp>0){
        int digit=temp%10;//to extract last digit
        reverse=reverse*10+digit;// by multiplying reverse to 10 it push the digit ot left and make space for coming digit
        temp/=10;//removes last degit

     }
     reverse*=sigh;
     printf("reversed number: %lld\n",reverse);

    return 0;
}

//this logic looked really hard first but after trying
 //again and again makes it easy to understand