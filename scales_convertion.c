// Online C compiler to run C program online
#include <stdio.h>

void chs1(){
    float masure,result;
    printf("Enter Kilometers to convert into Miles: ");
    scanf("%f",&masure);
    
    result=masure *0.621371;
    printf(" %f Kilometers into Miles is %f",masure,result);
}
void chs5(){
    float masure,result;
    printf("Enter Inches to convert into Feet: ");
    scanf("%f",&masure);
    
    result=masure*0.6213711;
        printf(" %f inches into feet is %f",masure,result);

}
void chs4(){
    float masure,result;
    printf("Enter Centimeters into to Inches: ");
    scanf("%f",&masure);
    
    result=masure*0.393701;
        printf(" %f Centimeters into inches is %f",masure,result);

}
void chs3(){
    float masure,result;
    printf("Enter Pounds into to Kilograms ");
    scanf("%f",&masure);
    
    result=masure*0.453592;
        printf(" %f pounds into kilogram is %f",masure,result);

}
void chs2(){
    float masure,result;
    printf("Enter Inches into to Meters ");
    scanf("%f",&masure);
    
    result=masure*0.0254;
        printf(" %f inches into meters is %f",masure,result);

}
int main() {
    int choise;
    printf("------------scal convertion------------\n\n");
    printf("1. kms to miles\n");
    printf("2. inches to meteres\n");
    printf("3. pound to kgs\n");
    printf("4. cms to inches\n");
    printf("5. inches to foot\n");
   printf("enter the number of your choise :  ");
scanf("%d",&choise);
switch(choise){
    case 1: chs1();
    break;
    case 2: chs2();
    break;
    case 3: chs3();
    break;
    case 4: chs4();
    break;
    case 5: chs5();
    break;
    default:printf("enter correct choice !!");
}
    return 0;
}