🔷 1. What this program is

This is a console-based Rock-Paper-Scissors game with:

Player vs Computer (with basic AI)
Player vs Player
Score tracking (stats + leaderboard file)
Animations (countdown + delay)
ASCII graphics
Cross-platform compatibility (Windows/Linux)

👉 So this is not just “C basics”—it includes:

Control flow
Functions
Structs
File handling
Random numbers
Macros
Platform-dependent code
🔷 2. High-Level Architecture (VERY IMPORTANT)

Think of this program as 3 layers:

🧠 Layer 1: Core Logic
decideWinner()
computerAI()
🎮 Layer 2: Game Modes
playPVC() (Player vs Computer)
playPVP() (Player vs Player)
🖥️ Layer 3: UI / Utilities
printAscii()
countdown()
clearScreen()
getChoice()
showStats()
showLeaderboard()
saveScore()
🚪 Entry Point
main() → controls everything
🔷 3. Program Execution Flow (STEP-BY-STEP)
👉 Start from main()
int main()
What it does:
Initializes random seed:
srand((unsigned)time(NULL));

👉 Why?

Ensures random numbers are different every run
Without this → same sequence every time
Infinite menu loop:
while(1)
Menu options:
1 → playPVC()
2 → playPVP()
3 → showLeaderboard()
4 → Exit

👉 So the main function is a controller:
It does NOT handle game logic itself — it delegates work to other functions.

🔷 4. Data Structure (Struct)
typedef struct {
    int wins;
    int losses;
    int draws;
} Stats;
What it is:

A structure to store player performance.

Why important:
Groups related data
Cleaner than separate variables
If missing:

You’d need:

int wins, losses, draws;

→ messy and harder to pass around

🔷 5. Core Game Logic
🔹 decideWinner(int a, int b)
return (a - b + 3) % 3;
What it does:

Returns:

0 → Draw
1 → Player wins
2 → Computer wins
Why this works:

Rock = 1, Paper = 2, Scissors = 3

This formula converts the cyclic relation into math.

If missing:

You’d need many if-else:

if(a == ROCK && b == SCISSORS) ...

👉 That becomes long and error-prone.

🔹 computerAI(int playerLast)
What it does:
40% chance → counter player's last move
60% chance → random
Why important:

Makes game less predictable than pure random.

Flow:
if(playerLast != 0 && r < 40)

Then:

Rock → return Paper
Paper → return Scissors
Scissors → return Rock
🔷 6. Input System
🔹 getChoice()
What it does:
Takes user input
Validates it
Keeps asking until correct
Key concept:
while(1)

→ infinite loop until valid input

Important line:
while (getchar() != '\n');

👉 Why?

Clears input buffer
Prevents garbage input issues
If missing:
Input bugs
Infinite loops
Wrong values read
🔷 7. UI Functions
🔹 printAscii(int c)

Prints shapes for:

Rock
Paper
Scissors

👉 Pure display logic

🔹 countdown()
3...
2...
1...
Shoot!
Uses:
SLEEP(1000);
🔹 Cross-platform trick:
#ifdef _WIN32
Why important:
Windows → Sleep(ms)
Linux → sleep(seconds)

👉 So macro:

#define SLEEP(ms)

acts as abstraction layer

🔹 clearScreen()
printf("\033[H\033[J");

👉 ANSI escape code

🔷 8. File Handling
🔹 saveScore()
FILE *f = fopen("leaderboard.txt", "a");
Mode "a":
Append mode
Adds new score without deleting old
🔹 showLeaderboard()

Reads file:

fscanf(f, "%s %d", name, &score)
If file doesn’t exist:
if(!f)

→ prints "No leaderboard yet"

🔷 9. Game Mode: Player vs Computer
🔹 playPVC()
Flow:
Input:
Name
Number of rounds
Loop through rounds:
for(int i = 1; i <= rounds; i++)
Each round:
Get player input
Generate computer move
Show ASCII
Decide winner
Update:
score
stats
Final result:
Compare scores
Save score if player wins
Show stats

👉 Key variables:

int pScore, cScore;
Stats stats;
int playerLast;
🔷 10. Game Mode: Player vs Player
🔹 playPVP()
Flow:
Take names
Countdown
Player 1 chooses
Clear screen
Player 2 chooses
Show results

👉 Why clear screen?
To hide Player 1’s move

🔷 11. Hidden Complexity (IMPORTANT)
⚠️ Problem 1: getchar() issues

After scanf, newline stays in buffer.

That’s why:

while (getchar() != '\n');

is used repeatedly.

⚠️ Problem 2: getchar() after scanf
printf("Press Enter...");
getchar();

👉 Might skip instantly because newline already exists.

⚠️ Problem 3: No early win logic

If best of 5:

Game still runs all 5 rounds
Doesn’t stop at 3 wins
🔷 12. Why This Project is Strong

It covers:

Concept	Used
Functions	✔
Structs	✔
File handling	✔
Macros	✔
Enums	✔
Loops	✔
Conditional logic	✔
Input validation	✔
Random numbers	✔
Platform-specific code	✔
🔷 13. What Happens If Key Parts Are Missing
Component	Impact
srand()	Same random every run
Input validation	Program breaks
Struct	Messy code
AI logic	Too predictable
File handling	No persistence
Sleep	No game feel
🔷 14. Mental Model (MOST IMPORTANT)

Think like this:

main()
  ├── playPVC()
  │     ├── getChoice()
  │     ├── computerAI()
  │     ├── decideWinner()
  │     ├── printAscii()
  │     ├── saveScore()
  │     └── showStats()
  │
  ├── playPVP()
  │     ├── getChoice()
  │     ├── decideWinner()
  │     └── printAscii()
  │
  └── showLeaderboard()

👉 This is the call graph of the program.