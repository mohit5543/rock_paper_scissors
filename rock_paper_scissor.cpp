#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(NULL));

    int computer = rand() % 5 + 1; // random number between 1 and 5
    int user = 0;

    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors Lizard Spock!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊ Rock\n";
    std::cout << "2) 🖐️ Paper\n";
    std::cout << "3) ✌️ Scissors\n";
    std::cout << "4) 🦎 Lizard\n";
    std::cout << "5) 🖖 Spock\n";

    std::cout << "Shoot! ";
    std::cin >> user;

    std::string choices[6] = {"", "Rock", "Paper", "Scissors", "Lizard", "Spock"};

    std::cout << "You chose: " << choices[user] << "\n";
    std::cout << "Computer chose: " << choices[computer] << "\n";

    if (user == computer) {
        std::cout << "It's a tie!\n";
    } else if (
        (user == 1 && (computer == 3 || computer == 4)) || // Rock crushes Scissors, Rock crushes Lizard
        (user == 2 && (computer == 1 || computer == 5)) || // Paper covers Rock, Paper disproves Spock
        (user == 3 && (computer == 2 || computer == 4)) || // Scissors cuts Paper, Scissors decapitates Lizard
        (user == 4 && (computer == 2 || computer == 5)) || // Lizard eats Paper, Lizard poisons Spock
        (user == 5 && (computer == 1 || computer == 3))    // Spock vaporizes Rock, Spock smashes Scissors
    ) {
        std::cout << "You win!\n";
    } else {
        std::cout << "You lose!\n";
    }

    return 0;
}
