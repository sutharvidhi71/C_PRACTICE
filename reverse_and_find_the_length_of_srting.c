//find the length of the string and reverse the string
#include<stdio.h>
#include<string.h>
int main()
{
    int num=0;
    char str[10]="vidhi";
    int length=0;
     printf("reversed string : ");
    for(int i=strlen(str)-1;i>=0;i--)//reverse logic
    {
       
        printf("%c",str[i]);
    }
    printf("\n");
    for(int i=0;str[i]!='\0';i++){//length logic 
        num++;
        }
        printf("lenght of string : %d\n",num);
    while(str[length]='\0'){
        length++;
    }    
          printf("lenght of string : %d\n",length);
    return 0;
}