#include<stdio.h>
#include<stdlib.h>

//this is a whole if else ledder in which
//it makes sure of different os compatibility
//because for window we use Sleep(micro seconds)
//and for unix we use sleep(seconds)
//so this two function are use based on os 
//so it is good to use preprosessor like this 
#ifdef _WIN32//os check for window
#include<windows.h>
#define SLEEP(ms) Sleep(ms)
#else
#include<unistd.h>
#define SLEEP(ms) sleep((ms)/1000)
#endif

#include<string.h>

#define REED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

enum choise{STONE=1, PAPER, SCISSORS};

struct stats{
    int wins;
    int losses;
    int draws;
};

void clearScreen(){//to clear screen after user put thier choise for suspence
    printf("\033[H\033[J");
}

void countDown(){//counting function for real game feel
    for (int i=3;i>=1;i--){
        printf("%d...",i);
        SLEEP(2000);
    }
    printf("shoot!");
}

int main(){
    srand((unsigned)time(NULL));
    int choise;
    while(1){

        printf("--------- ROCK  PAPER  SCISSORS--------");
        printf("     1. Player vs Computer\n");
        printf("     2. Player vs Player\n");
        printf("     3. Leader board\n");
        printf("     4. Exit\n");
        printf("Enter your choise: ");
        fflush(stdout);
    }
    return 0;
}