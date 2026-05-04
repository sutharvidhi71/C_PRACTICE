#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file2.txt", "w+");
    if (fp == NULL)
    {
        printf("error opening file \n");
        return 1;
    }
    else
    {
        printf("file opened successfully\n");
    }

    printf("enter the name of the file\n");//write into file
    char name[20];
    scanf("%s ", name);
    fprintf(fp, "the name of the file is %s", name);
    rewind(fp);//to set the file pointer to the beginning of the file

    int dill;
    printf("enter 1 to print file content or 0 to end program");//to read the file and print the content
    scanf("%d", &dill);
    if (dill == 1)
    {
        while ((fscanf(fp, "%s ", name)) != EOF)
        {
            printf("%s", name);
        }
    }
    else{
        exit(0);
    }
    fclose(fp);
    return 0;
}