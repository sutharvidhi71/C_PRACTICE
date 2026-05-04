//manipulating array using functions to double and square the elements based on user choice

#include<stdio.h>
#include<stdlib.h>
void _double_arr(int *arr,int n)
{
    for(int i=0;i<n;i++){
        arr[i]=2*arr[i];
    }
}
void print_arr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
void square_arr(int *arr,int n){
    for(int i=0;i<n;i++){
        arr[i]*=arr[i];
    }
}

int main(){

int n;
char choise;
printf("enter size of array:-\n");//to store size of array
scanf(" %d",&n);

int *arr=(int*)malloc(n*sizeof(int))//dynamic memory allocation for array of size n
printf("enter your chioise:-\n");
scanf(" %c",&choise);

printf("enter %d elements of array:-\n",n);//to store elements of array
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

switch(choise){
case 'd':
    _double_arr(arr,n);
    printf("after doubling the array elements are:-\n");
    print_arr(arr,n);
    break;
case 's':
    square_arr(arr,n);
    printf("after squering the array elements are:-\n");
    print_arr(arr,n);
    break;
default:
    printf("invalid choise");
    free(arr);    
    break;
}
free(arr);//to free the dynamically allocated memory
    return 0;
}

-----------output-------------
enter size of array:-
5
enter your chioise:-
d
enter 5 elements of array:-
1
2
3
4
5
after doubling the array elements are:-
2
4
6
8
10