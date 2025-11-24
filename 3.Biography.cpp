#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    // Ask for name
    cout << "Enter your name: ";
    getline(cin, name);

    // Ask for hometown
    cout << "Enter your hometown: ";
    getline(cin, hometown);

    // Ask for age
    cout << "Enter your age: ";
    cin >> age;

    // Display all together
    cout << "Name: " << name << ", Hometown: " << hometown << ", Age: " << age << endl;

    return 0;
}
