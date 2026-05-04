//managing constant changing id of employee with dynamic memory allocation in c language.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int emp,id_char;

        printf("Enter the number of employees: \n");
        scanf("%d",&emp);

    for(int i=0;i<emp;i++){

        printf("enter length of id of employee %d: \n",i+1);
        scanf("%d",&id_char);

        char *id=(char*)malloc(id_char*sizeof(char));
        printf("enter id of employee %d: \n",i+1);
        scanf("%s",id);
        printf("id of employee %d is: %s\n",i+1,id);
        free(id);
    }
    return 0;
}