#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess;
    int chances = 0;
    srand(time(0)); 
    randomNumber = rand() % 100 + 1; 

    do
    {
        cout << "Enter a guess number between 1 and 100: ";
        cin >> guess;
        chances++;

        if (guess > randomNumber){
            cout << "The "<<guess<<" is high!\n\n";
        }
        else if (guess < randomNumber){
            cout << "The "<<guess<<" is low!\n\n";
        }
        else{
            cout << "\nCongratulations!! Your guess is right "<<guess <<"in "<< chances << " guesses!\n";
        }
    } 
        while (guess != randomNumber);

	return 0;
}
