#include <iostream>
using namespace std;
int generate_Num()
{
    int n = rand() % 100;
    return n;
}
void guess()
{
    char play;
    int user;
    while (true)
    {
        cout << "Do you want to start the game? Type y/n" << endl;
        cin >> play;
        if (play == 'y' || play == 'Y')
        {
            int num = generate_Num();
            while (true)
            {
                cout << "Guess the number" << endl;
                cin >> user;
                if (user == num)
                {
                    cout << "Hurray! You guessed the number correctly." << endl;
                    break;
                }
                else if (user > num)
                {
                    cout << "Try again. Your Number is larger than the number to be guessed." << endl;
                }
                else if (user < num)
                {
                    cout << "Try again. Your Number is smaller than the number to be guessed." << endl;
                }
            }
        }
        else
        {
            cout << "Hope you Liked the Game!! Thank You!!" << endl;
            break;
        }
    }
}

int main()
{
    cout << "Let's Start the Number Guessing Game" << endl;
    cout << "Guess the Number between 0-100" << endl;
    guess();
}