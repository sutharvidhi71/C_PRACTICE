#include <stdio.h>
// #include "C:user/Sutha/OneDrive/Desktop/git demo/c_problems/preprocesor_macros_drives/my_header.c"
#define squer(x) x*x

int main(){
    printf("%d \n",squer(5));
    printf(" today's date%s \n",__DATE__);
    printf(" TIme is %s \n",__TIME__);
    printf("total line in code %d",__LINE__);
    printf("if ansi %d", __STDC__);
    printf(" FIle name%s \n",__FILE__);
    return 0;
}