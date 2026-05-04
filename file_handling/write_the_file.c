#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("file1.txt","w");
    char c;
    if(ptr==NULL){
        printf("some error has occure during opening the file\n");
        return 1;
    }
    else{
        printf("file opened successfuly\n");
    }
    while((c=getc(stdin))!='\n'){
        
        putc(c,ptr);
     
    }
    fclose(ptr);
    return 0;
}