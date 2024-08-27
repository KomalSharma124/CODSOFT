#include <bits/stdc++.h>
using namespace std;

int main() {
    
    srand(time(0));
    
    int randomNumber = rand() % 100 + 1;        // Generate random number between 1 and 100
    int userGuess = 0;

    cout << "Generated a random number between 1 and 100.<<endl";
    cout << "Can you guess what it is?<<endl";

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        cout << "Enter your number which is guessed: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number.\n";
        }
    }
     return 0;

}