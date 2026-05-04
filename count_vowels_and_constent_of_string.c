// C program to count the number of vowels and consonants in a string
#include<stdio.h>
int main()
{
   int vowel=0,constunt=0;
   char str[7]="vidhi";
   for(int i=0;str[i]!='\0';i++){
       if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O'  || str[i]=='o' || str[i]=='U' || str[i]=='u')
       {
           vowel++;
       }
   
   else{
       constunt++;
   }
}
   printf("number of vowels : %d \n number of constunt : %d",vowel,constunt);
   return 0;
}

// ----------------------key point to remember:------------------

// for string loop we should always consider '\0' (null character) as the termination condition.

// because every string ends with '\0' value its perfact value for termination condition of string loop.

// every time when we use logical operator to apply multiple condition in loop 
// we must include varaible in every condition 

// example:
// for(int i=0;str[i]!='\0';i++){
//        if(str[i]=='A' ||'a'||'E' || 'e' ||'u') this is wrong it will make every condition true because of 'a' and 'e' and 'u' are non zero value
//         so it will make every condition true and it will count every character as vowel which is wrong
//        {
//            vowel++;
//        }
   
//    else{
//        constunt++;
//    }
// }
