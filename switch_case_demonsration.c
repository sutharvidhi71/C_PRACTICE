// takes number between 1 to 12 to find month name and number of dats
//by using switch case
#include<stdio.h>
int main(){
    int m;

    printf("enter month number to find number of days:-");
    scanf("%d",&m);

    switch(m){
        case 1:
            printf("days in january is 31");
            break;
        case 2:
            printf("days in february is 28");
            break;
        case 3:
            printf("days in march is 31");
            break;
        case 4:
            printf("days in april is 30");
            break;
        case 5:
            printf("days in may is 31");
            break;
        case 6:
            printf("days in june is 30");
            break;
        case 7:
            printf("days in july is 31");
            break;
        case 8:
            printf("days in august is 31");
            break;
        case 9:
            printf("days in september is 30");
            break;
        case 10:
            printf("days in october is 31");
            break;
        case 11:
            printf("days in november is 30");
            break;
        case 12:
            printf("days in december is 31");
    }
    return 0;
}