#include <iostream>
using namespace std;

int main() {
    int password;
    const int correctPassword = 12345;

    cout << "Enter the password: ";
    cin >> password;

    while (password != correctPassword) {
        cout << "Incorrect password. Try again: ";
        cin >> password;
    }

    cout << "Welcome to the Secure Area!" << endl;
    return 0;
}
