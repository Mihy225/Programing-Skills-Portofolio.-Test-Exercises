#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchTerm;
    bool found = false;

    cout << "Enter a name to search: ";
    cin >> searchTerm;

    for (int i = 0; i < 6; i++) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "The name " << searchTerm << " was found in the array." << endl;
    } else {
        cout << "The name " << searchTerm << " was not found in the array." << endl;
    }

    return 0;
}
