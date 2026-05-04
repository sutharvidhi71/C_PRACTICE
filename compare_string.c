#include<stdio.h>

int i = 0, flag = 0;
while(s1[i] != '\0' && s2[i] != '\0')
{
    if (s1[i] != s2[i])
    {
        flag = 1;
        break;
    }
    i++;
}
