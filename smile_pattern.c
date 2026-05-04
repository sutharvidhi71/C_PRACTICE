//this is my first program in which i did all code by 
//self just by seeing output pettern 
//smilles in petter are looking great!


#include<stdio.h>
int main(){
    int row;

    printf("enter the number of rows:-");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++) {
            printf(":)\t");
        }
        printf("\n");
    }

    for(int k=row;k>=1;k--){
        for (int z=1;z<=k;z++){
            printf(":)\t");
        }
        printf("\n");
    }
    return 0;
}



---------output-------------
enter the number of rows:-3
:)
:)      :)
:)      :)      :)
:)      :)      :)
:)      :)
:)
