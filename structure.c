// this practical includes all most all strucure consapt accept pointer to structure and structure pointer to function and structure pointer to structure

#include<stdio.h>
struct date {
    int date;
    int month;
    int year;
};
struct student{
    int roll_no;
    char name[20];
    int standerd;
    char section;
    struct date dob;
};
int main(){
    int year_of_class,number_of_students;

    printf("enter the year of class. \n");
    scanf("%d",&year_of_class);

    printf("enter total number of students in class. \n");
    scanf("%d",&number_of_students);

    struct student std[number_of_students] ;
    struct student std1[number_of_students] ;

        printf("enter the the name of stuent\n");
        scanf("%s",std1[0].name);

        printf("the name of std1[0] is %s\n",std1[0].name);

    for(int i=0;i<number_of_students;i++){

        printf("enter the roll number of student %d\n",i+1);
        scanf("%d",&std[i].roll_no);

        printf("enter the name of student %d\n",i+1);
        scanf("%s",&std[i].name);

        printf("enter the student's stander %d\n",i+1);
        scanf("%d",&std[i].standerd);

        printf("enter section of student %d\n",i+1);
        scanf(" %c",&std[i].section);

        printf("enter the date of birth of student %d\n",i+1);
        scanf("%d%d%d",&std[i].dob.date,&std[i].dob.month,&std[i].dob.year);
    }

    for(int i=0;i<number_of_students;i++){
        printf("the name of student %d is %s\n",i+1,std[i].name);
       
    }
        
    return 0;
}