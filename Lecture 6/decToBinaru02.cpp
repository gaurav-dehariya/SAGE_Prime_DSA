#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int binary[32];   // to store binary digits
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;  // remainder (0 or 1)
        n = n / 2;          // divide number
        i++;
    }

    cout << "Binary Digit: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    return 0;
}
