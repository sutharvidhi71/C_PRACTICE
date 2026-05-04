#include<stdio.h>
int main(){
    FILE *ptr;
    char c;
    ptr=fopen("file.txt","r");
 if(ptr==NULL){
    printf("error opening the file\n");
 }
 else{
    printf("file opened successfuly\n");
 }

 while((c=fgetc(ptr))!=EOF)
 {
    printf("%c",c);
 }
 fclose(ptr);
    return 0;
}