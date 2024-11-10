#include <iostream>
using namespace std;
int main() {
    char* MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", 
        "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    char pin[5];
    cout << "Enter a 4-digit PIN: ";
    cin >> pin;
    bool valid = true;
    for (int i = 0; i < 4; ++i) {
        if (pin[i] < '0' || pin[i] > '9') {
            valid = false;
            break;
        }
    }

    if (!valid || pin[4] != '\0') {
        cout << "Invalid input." << endl;
        return 0;
    }
    for (int i = 0; i < 4; ++i) {
        int digit = pin[i] - '0'; 
        int moveIndex = (digit + i) % 10;
        cout << MOVES[moveIndex] << " ";
    }
    cout << endl;

    return 0;
}
