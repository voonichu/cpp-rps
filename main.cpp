#include <iostream>
#include <cstdlib>
#include <string>

int main() {

    std::string user_pick = "";
    std::string ai_pick;

    // 1 = win, 2 = lose, 3 = tie
    int result;

    srand(time(NULL));
    int rand_3 = std::rand() % 3;

    // While loop to force user to type in "rock", "paper", or "scissors"

    while (user_pick != "rock" && user_pick != "paper" && user_pick != "scissors") {

        std::cout << "Rock, Paper, Scissors?\n";
        std::cin >> user_pick;

    }

    // Uses random number generated earlier to pick AI choice
    
    if (rand_3 == 0) {
        ai_pick = "rock";
    }
    else if (rand_3 == 1) {
        ai_pick = "paper";
    }
    else if (rand_3 == 2) {
        ai_pick = "scissors";
    }
    else {
        ai_pick = "error";
    }

    // Prints results with no win/lose logic

    std::cout << "User picks: " << user_pick << "\nAi picks: " << ai_pick << "\n";

    // Tied Game

    if (user_pick == "rock" && ai_pick == "rock") {
        result = 3;
    }
    if (user_pick == "paper" && ai_pick == "paper") {
        result = 3;
    }
    if (user_pick == "scissors" && ai_pick == "scissors") {
        result = 3;
    }

    // User Wins

    if (user_pick == "rock" && ai_pick == "scissors") {
        result = 1;
    }
    if (user_pick == "paper" && ai_pick == "rock") {
        result = 1;
    }
    if (user_pick == "scissors" && ai_pick == "paper") {
        result = 1;
    }

    // User loses

    if (user_pick == "rock" && ai_pick == "paper") {
        result = 2;
    }
    if (user_pick == "paper" && ai_pick == "scissors") {
        result = 2;
    }
    if (user_pick == "scissors" && ai_pick == "rock") {
        result = 2;
    }
    
    // Result print logic

    if (result == 1) {
        std::cout << "You win!\n";
    } else if (result == 2) {
        std::cout << "You lose.\n";
    } else if (result == 3) {
        std::cout << "Tie.\n";
    } else {
        std::cout << "Error\n";
    }


    return 0;
}