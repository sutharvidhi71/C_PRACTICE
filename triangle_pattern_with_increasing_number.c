//triangle pattern with increasing number
#include<stdio.h>
int main(){
int n;
int mun=1;
printf("enter number of rows:-");
scanf("%d",&n);

for(int i=1;i<=n;i++)//controls the row of pettern
{
    for(int j=1;j<=i;j++)//printf the pettern in rows
    {
        printf("%d",mun++);
    }
    printf("\n");//to start new row
}
    return 0;
}