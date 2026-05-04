#include<stdio.h>

struct cart{
    char name[50];
    char item[50];
    char outlet[50];

};
int main()

{
    FILE *fp;
    fp=fopen("reciept.txt","a+");

        if(fp==NULL){
            printf("problem in opening the file\n");
            return 1;
        }


struct cart cart;

printf("------fill in the details of puchase -------\n");

printf("Name of buyer : ");
scanf("%s",&cart.name);

printf("\nItem purchased : ");
scanf("%s",&cart.item);

printf("Outlet : ");
scanf("%s",&cart.outlet);

fprintf(fp,"                       ----------RECIEPT---------\n");
fprintf(fp,"Thanks %s for puchasing %s from our outlet. we wish to serve you again soon",cart.name , cart.item);
fclose(fp);
    return 0;
}