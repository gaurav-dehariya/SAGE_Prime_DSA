#include <iostream>
using namespace std;

int main() {
    int n =7;
    int m = n/2+1;

    // Upper half (including middle)
    for (int i = 1; i <= m; i++) {

        // Left spaces
        for (int s = m; s >= i; s--) {
            cout << "  ";
        }

        // First number
        cout << i;

        // Inner spaces and second number
        if (i >= 1) {
            for (int s = 1; s <= 2 * i - 1; s++) {
                cout << "  ";
            }
            cout << i;
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {

        // Left spaces
        for (int s = n; s >= i; s--) {
            cout << "  ";
        }

        // First number
        cout << i;

        // Inner spaces and second number
        if (i >= 1) {
            for (int s = 1; s <= 2 * i - 1; s++) {
                cout << "  ";
            }
            cout << i;
        }

        cout << endl;
    }

    return 0;
}
