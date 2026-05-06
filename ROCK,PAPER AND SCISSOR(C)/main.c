#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>  // For Sleep() on Windows
#define SLEEP(ms) Sleep(ms)
#else
#include <unistd.h>
#define SLEEP(ms) sleep((ms)/1000)
#endif

#include <string.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

enum Choice { ROCK = 1, PAPER, SCISSORS };

typedef struct {
    int wins;
    int losses;
    int draws;
} Stats;

void clearScreen() {
    printf("\033[H\033[J");
}

void countdown() {
    printf("\n");
    for(int i=3; i>=1; i--){
        printf("%d...\n",i);
        SLEEP(1000);
    }
    printf("Shoot!\n\n");
}

void printAscii(int c){
    if(c==ROCK){
        printf("    _______\n");
        printf("---'   ____)\n");
        printf("      (_____)\n");
        printf("      (_____)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
    } else if(c==PAPER){
        printf("     _______\n");
        printf("---'    ____)____\n");
        printf("           ______)\n");
        printf("          _______)\n");
        printf("         _______)\n");
        printf("---.__________)\n");
    } else if(c==SCISSORS){
        printf("    _______\n");
        printf("---'   ____)____\n");
        printf("          ______)\n");
        printf("       __________)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
    }
}

int decideWinner(int a, int b){
    return (a - b + 3) % 3;
}

int getChoice(){
    int c;
    printf("\n");  // Ensure newline
    while(1){
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Enter choice: ");
        fflush(stdout);
        if (scanf("%d", &c) == 1 && c>=1 && c<=3)
            return c;
        printf("Invalid choice\n");
        while (getchar() != '\n');  // Clear input buffer
    }
}

int computerAI(int playerLast){
    int r = rand() % 100;
    if(playerLast != 0 && r < 40){
        if(playerLast == ROCK) return PAPER;
        if(playerLast == PAPER) return SCISSORS;
        if(playerLast == SCISSORS) return ROCK;
    }
    return rand() % 3 + 1;
}

void saveScore(const char name[], int wins){
    FILE *f = fopen("leaderboard.txt", "a");
    if(f){
        fprintf(f, "%s %d\n", name, wins);
        fclose(f);
    }
}

void showLeaderboard(){
    FILE *f = fopen("leaderboard.txt", "r");
    if(!f){
        printf("No leaderboard yet\n");
        return;
    }
    char name[50];
    int score;
    printf("\nLeaderboard\n");
    while(fscanf(f, "%s %d", name, &score) == 2)
        printf("%s : %d\n", name, score);
    fclose(f);
}

void showStats(Stats s){
    printf("\nStatistics\n");
    printf("Wins : %d\n", s.wins);
    printf("Losses : %d\n", s.losses);
    printf("Draws : %d\n", s.draws);
}

void playPVC(){
    char name[50];
    int rounds, playerLast = 0;
    Stats stats = {0, 0, 0};
    printf("Enter your name: ");
    fflush(stdout);
    scanf("%s", name);
    printf("Best of (3/5/7): ");
    scanf("%d", &rounds);
    int pScore = 0, cScore = 0;
    for(int i = 1; i <= rounds; i++){
        clearScreen();
        printf("Round %d\n\n", i);
        int player = getChoice();
        countdown();
        int comp = computerAI(playerLast);
        playerLast = player;
        printf("%s chose:\n", name);
        printAscii(player);
        printf("\nComputer chose:\n");
        SLEEP(1000);
        printAscii(comp);
        int r = decideWinner(player, comp);
        if(r == 0){
            printf(YELLOW "Draw!\n" RESET);
            stats.draws++;
        } else if(r == 1){
            printf(GREEN "You win this round!\n" RESET);
            pScore++;
            stats.wins++;
        } else {
            printf(RED "Computer wins this round!\n" RESET);
            cScore++;
            stats.losses++;
        }
        printf("\nScore: %s=%d  Computer=%d\n", name, pScore, cScore);
        SLEEP(2000);
    }
    clearScreen();
    printf("FINAL RESULT\n");
    if(pScore > cScore){
        printf(GREEN "%s wins the game!\n" RESET, name);
        saveScore(name, pScore);
    } else if(pScore < cScore){
        printf(RED "Computer wins the game!\n" RESET);
    } else
        printf(YELLOW "Game Draw!\n" RESET);
    showStats(stats);
    printf("\nPress Enter to continue...");
    getchar();
}

void playPVP(){
    char p1[50], p2[50];
    printf("Player 1 name: ");
    scanf("%s", p1);
    printf("Player 2 name: ");
    scanf("%s", p2);
    countdown();
    int c1 = getChoice();
    clearScreen();
    int c2 = getChoice();
    printf("%s chose:\n", p1);
    printAscii(c1);
    printf("\n%s chose:\n", p2);
    printAscii(c2);
    int r = decideWinner(c1, c2);
    if(r == 0)
        printf(YELLOW "Draw\n" RESET);
    else if(r == 1)
        printf(GREEN "%s Wins!\n" RESET, p1);
    else
        printf(GREEN "%s Wins!\n" RESET, p2);
    printf("\nPress Enter to continue...");
    getchar();
}

int main(){
    srand((unsigned)time(NULL));
    int choice;
    while(1){
        printf(CYAN "\n==== ROCK PAPER SCISSORS ====\n" RESET);
        printf("1. Player vs Computer\n");
        printf("2. Player vs Player\n");
        printf("3. Leaderboard\n");
        printf("4. Exit\n");
        printf("Choice: ");
        fflush(stdout);
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input\n");
            continue;
        }
        clearScreen();
        if(choice == 1)
            playPVC();
        else if(choice == 2)
            playPVP();
        else if(choice == 3)
            showLeaderboard();
        else if(choice == 4)
            break;
        else
            printf("Invalid option\n");
        printf("\nPress Enter to continue...");
        while (getchar() != '\n');
    }
    printf("Thanks for playing\n");
    return 0;
}

