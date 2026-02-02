#include <iostream>
using namespace std;

int main() {
    
    int N = 3;

    // Upper half (including middle)
    for (int i = N; i >= 1; i--) {

        // leading spaces
        for (int s = 0; s < N - i; s++)
            cout << " ";

        // 1 0 1 pattern
        for (int j = 1; j <= 2*i - 1; j++)
            cout << (j % 2);

        cout << endl;
    }

    // Lower half
    for (int i = 2; i <= N; i++) {

        // leading spaces
        for (int s = 0; s < N - i; s++)
            cout << " ";

        // 1 0 1 pattern
        for (int j = 1; j <= 2*i - 1; j++)
            cout << (j % 2);

        cout << endl;
    }

    return 0;
}
