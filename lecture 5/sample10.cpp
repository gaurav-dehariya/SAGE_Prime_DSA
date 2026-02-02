#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m = (n + 1) / 2;

    // Upper half
    for (int i = 1; i <= m; i++) {

        for (int j = n - i; j >= i; j--) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        for (int j = 1; j <= 2 * i - 3; j++) {
            cout << "  ";
        }

        if (i >= 2) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    // Lower half
    for (int i = m - 1; i >= 1; i--) {

        for (int j = n - i; j >= i; j--) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        for (int j = 1; j <= 2 * i - 3; j++) {
            cout << "  ";
        }

        if (i >= 2) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    return 0;
}