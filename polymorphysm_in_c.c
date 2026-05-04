//trying polymorphism in c using function pointers

#include<stdio.h>

void namee(char *name){
    printf("your name is %s\n",name);
}
void agee(int age){
    printf("your age is %d\n",age);
}
void display(void *func,char type , int age, char *name){
    if (type=='n'){
        void(*pte)(char*)=func;
        pte((char*)name);
    }
    else if (type=='a'){
        void (*pte)(int)=func;
        pte(age);
    }
    else{
        printf("invalid type");
    }

}
int main(){
char name[10];
int age;

printf("enter your name:-");
scanf("%s",name);
printf("enter your age:-");
scanf("%d",&age);

display(namee,'n',age,name);
display(agee,'a',age,name);

    return 0;
}

---------output----------
enter your name:-vidhi
enter your age:-19
your name is vidhi
your age is 19