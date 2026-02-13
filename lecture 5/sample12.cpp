#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper half (including middle row)
    for (int i = 0; i <= N; i++) {
        
        // Print left side numbers
        for (int j = N; j > i; j--) {
            cout << j << " ";
        }

        // Print middle spaces
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "  ";
        }

        // Print right side numbers
        for (int j = i + 1; j <= N; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    // Lower half
    for (int i = N - 1; i >= 0; i--) {
        
        // Print left side numbers
        for (int j = N; j > i; j--) {
            cout << j << " ";
        }

        // Print middle spaces
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "  ";
        }

        // Print right side numbers
        for (int j = i + 1; j <= N; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
