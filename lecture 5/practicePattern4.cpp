#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            // Border
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << 1 << " ";
            }
            // Middle row
            else if (i == 3) {
                cout << (j == 3 ? 6 : 3) << " ";
            }
            // Upper middle
            else if (i == 2) {
                cout << j << " ";
            }
            // Lower middle
            else if (i == 4) {
                cout << (n - j + 1) << " ";
            }

        }
        cout << endl;
    }

    return 0;
}
