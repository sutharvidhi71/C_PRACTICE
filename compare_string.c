//compare two strings

#include<stdio.h>

int main(){

    char str1[] = "coco" , str2[] = "coco";
    int i = 0, flag = 0;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
        
    }
    if(!flag){
        printf("strings are same ");
    }
    else
        printf("they are not");
    
    return 0;
}