#include<stdio.h>
int main(){
    int arr[5]={10,5,11,2,17};
    int i,j,temp;
    for(i=0;i<5;i++){
        for(j=1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int k = 0; k < 5; k++){
        printf("%d ",arr[k]);
    }
    
    return 0;
}