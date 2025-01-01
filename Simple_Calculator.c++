#include <iostream>
using namespace std;

void calculate(int num1, int num2, char opr)
{
    int ans;
    switch (opr)
    {
    case '+':
        ans = num1 + num2;
        cout << "Result:" << ans << endl;
        break;
    case '-':
        ans = num1 - num2;
        cout << "Result:" << ans << endl;
        break;
    case '*':
        ans = num1 * num2;
        cout << "Result:" << ans << endl;
        break;
    case '/':
        ans = num1 / num2;
        cout << "Result:" << ans << endl;
        break;
    case '%':
        ans = num1 % num2;
        cout << "Result:" << ans << endl;
        break;
    default:
        cout << "Please Enter correct Operation" << endl;
        break;
    }
}

int main()
{
    int num1, num2;
    char opr, user;

    cout << "Addition --> +\nSubtraction --> -\nMultiplication --> *\nDivision --> /\nModulus --> %" << endl;
    do
    {
        cout << "Enter two Numbers to perform Arthimetic operation" << endl;
        cin >> num1 >> num2;
        cout << "Enter the operation to be perfomed" << endl;
        cin >> opr;
        calculate(num1, num2, opr);
        cout << "Do you want to perform arithematic operation again? Type y/n" << endl;
        cin >> user;
    } while (user == 'y' || user == 'Y');

    return 0;
}