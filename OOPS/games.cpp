#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {
private:
    enum Choice { ROCK, PAPER, SCISSORS };
    string choices[3] = {"Rock", "Paper", "Scissors"};

public:
    Game() {
        srand(time(0)); // Seed the random number generator
    }

    Choice getUserChoice() {
        int choice;
        cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
        cin >> choice;
        while (choice < 0 || choice > 2) {
            cout << "Invalid choice. Please enter 0, 1, or 2: ";
            cin >> choice;
        }
        return static_cast<Choice>(choice);
    }

    Choice getComputerChoice() {
        return static_cast<Choice>(rand() % 3);
    }

    void displayChoice(string player, Choice choice) {
        cout << player << " chose " << choices[choice] << endl;
    }

    string determineWinner(Choice userChoice, Choice computerChoice) {
        if (userChoice == computerChoice) {
            return "It's a tie!";
        }
        if ((userChoice == ROCK && computerChoice == SCISSORS) ||
            (userChoice == PAPER && computerChoice == ROCK) ||
            (userChoice == SCISSORS && computerChoice == PAPER)) {
            return "You win!";
        }
        return "Computer wins!";
    }

    void playGame() {
        Choice userChoice = getUserChoice();
        Choice computerChoice = getComputerChoice();

        displayChoice("You", userChoice);
        displayChoice("Computer", computerChoice);

        cout << determineWinner(userChoice, computerChoice) << endl;
    }
};

int main() {
    Game game;

    string playAgain;
    game.playGame();

    cout << "Thanks for playing!" << endl;
    return 0;
}