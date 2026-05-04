#include<stdio.h>
int main(){
    int arr1[3][3], arr2[3][3], sum[3][3];
    printf("Enter elements of first 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }       
         printf("\n");

    }
    printf("Enter elements of second 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    
    printf("Sum of two 3x3 matrices is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}