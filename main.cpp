#include <iostream>

using namespace std;

int main()
{
    bool gameRunning = true;
    int tries = 1;
    const int maxTries = 5;
    const int targetNumber = rand() % 100;
    while (gameRunning)
    {
        int guess;
        cout << "What's your guess?" << endl;
        cin >> guess;
        if (targetNumber == guess)
        {
            cout << "Congratulations! You guessed the right number!" << endl;
            gameRunning = false;
            break;
        }
        if (tries >= maxTries)
        {
            cout << "Sorry, you have run out of tries! The number was " << targetNumber << endl;
            gameRunning = false;
            break;
        }
        const int triesRemaining = (maxTries - tries);
        const string triesRemainingString = "You have " + to_string(triesRemaining) + " tries remaining";
        if (targetNumber < guess)
        {
            cout << "You guessed higher. " << triesRemainingString << endl;
            tries += 1;
        }
        else
        {
            cout << "You guessed lower. " << triesRemainingString << endl;
            tries += 1;
        }
    };
    cout << "Thanks for playing!" << endl;
    return 0;
}