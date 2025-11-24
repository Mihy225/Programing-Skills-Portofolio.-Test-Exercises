#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer;

    // Ask the question
    cout << "What is the capital of France? ";
    getline(cin, answer);

    // Check the answer
    if (answer == "Paris" || answer == "paris") {
        cout << "Correct! The capital of France is Paris." << endl;
    } else {
        cout << "Wrong! The correct answer is Paris." << endl;
    }

    return 0;
}
