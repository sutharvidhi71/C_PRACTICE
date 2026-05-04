//sum of two arrays
#include<stdio.h>
int main(){
        int arr1[5]={1,1,1,1,1};
        int arr3[5]={1,1,1,1,1};
        int arr2[5];
        for(int i=0;i>5;i++){
            arr2[i]=arr1[i]+arr3[i];
            printf("sum of array elements:%d\n",arr2[i]);
        }
return 0;
}