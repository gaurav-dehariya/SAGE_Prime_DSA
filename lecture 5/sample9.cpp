#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        int stars, spaces;

        // upper half
        if (i <= mid) {
            stars = mid - i + 1;
            spaces = 2 * i - 1;
        }
        // lower half
        else {
            stars = i - mid + 1;
            spaces = 2 * (n - i - 1) - 1;
        }

        // left stars
        for (int j = 0; j < stars; j++) {
            cout << "*\t";
        }

        // middle spaces
        for (int j = 0; j < spaces; j++) {
            cout << "\t";
        }

        // right stars (avoid extra stars on first & last line)
        if (i == 0 || i == n - 1) {
            stars--;
        }

        for (int j = 0; j < stars; j++) {
            cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}
