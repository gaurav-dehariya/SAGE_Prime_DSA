#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // upper half + middle
    for (int i = N; i >= 0; i--) {
        // spaces
        for (int s = 0; s < N - i; s++)
            cout << "  ";

        // decreasing numbers
        for (int j = i; j >= 0; j--)
            cout << j << " ";

        // increasing numbers
        for (int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }

    // lower half
    for (int i = 1; i <= N; i++) {
        // spaces
        for (int s = 0; s < N - i; s++)
            cout << "  ";

        // decreasing numbers
        for (int j = i; j >= 0; j--)
            cout << j << " ";

        // increasing numbers
        for (int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}
