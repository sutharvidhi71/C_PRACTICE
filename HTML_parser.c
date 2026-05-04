#include<stdio.h>
#include<string.h>

void parseHTML(char *str)
{
    int in = 0;
    int index = 0;

    // Remove HTML tags
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '<'){
            in = 1;
            continue;
        }
        else if(str[i] == '>'){
            in = 0;
            continue;
        }
        else if(in == 0){
            str[index++] = str[i];
        }
    }

    str[index] = '\0';   // terminate string

    // Remove extra spaces
    int i = 0, j = 0;
    while(str[i] == ' ') i++;   // remove leading spaces

    for(; str[i] != '\0'; i++)
    {
        if(!(str[i] == ' ' && str[i+1] == ' '))
        {
            str[j++] = str[i];
        }
    }

    if(j > 0 && str[j-1] == ' ') j--; // remove trailing space

    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("before: %s\n", str);

    parseHTML(str);

    printf("after : %s\n", str);

    return 0;
}