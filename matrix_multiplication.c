#include<stdio.h>
int main(){
    int a[2][3], b [3][4], c[2][4]; ;
    printf("enter the element of matrix a\n");

    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
         scanf("%d",&a[i][j]);
        }
        printf("\t");
    }
    printf("enter the element of matrix b\n");
       for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
         scanf("%d",&b[i][j]);
         printf("\t");
       }
       }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                
                c[i][j] += a[i][k]*b[k][j];
                
            }
        }
    }
    printf("the result of matrix multiplication is\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}