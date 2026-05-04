#include<stdio.h>
int main(){

        FILE *fp;
        fp=fopen("file.txt","w");
        if(!fp){
                printf("Error opening file");
                return 1;
        }
        else{
            printf("File opened successfully");
        }
        fprintf(fp,"(file.txt) is created by main.c program\n");
        fclose(fp);
        return 0;
}