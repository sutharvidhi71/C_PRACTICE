//simple C program to print a right-angled triangle pattern using asterisks
#include<stdio.h>
int main(){
int row;

printf("enter number of row:-");
scanf("%d",&row);

for(int i=1;i<=row;i++){

    for(int j=1;j<=i;j++){

        printf("*");
    }
printf("\n");
}
return 0;
}