#include <iostream>
using namespace std;

// Function to check if number is even or odd
string checkEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int value;

    // Ask user for a number
    cout << "Enter a number: ";
    cin >> value;

    // Call the function and store the result
    string result = checkEven(value);

    // Output the result
    cout << result << endl;

    return 0;
}
