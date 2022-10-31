#include <iostream>
using namespace std;

int main ()
{
    cout << "How many users accessed our platform today? ";
    int userAmount;
    cin >> userAmount;
    int userQuota = 1'000;
    bool userQuotaMet = false; //flag variable assumes users have not met quota before running program.

    if (userAmount >= userQuota) //alters userQuotaMet based on user input.
    {
        userQuotaMet = true;
    }
    else
    {
        userQuotaMet = false;
    }
    //SEPARATION B/W TWO IF-ELSE STATEMENTS.
    if (userQuotaMet) //condition checks if bool is true after logic.
    {
        cout << "You met your daily user goal!";
    }
    else
    {
        cout << "Please check in with your direct supervisor today.";
    }
    return 0;
}
