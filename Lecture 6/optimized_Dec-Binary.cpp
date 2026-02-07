#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << "Binary Digit: 0\n";
        return 0;
    }

    string binary = "";

    while (n > 0) {
        binary.push_back((n % 2) + '0');
        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    cout << "Binary Digit: " << binary << endl;
    return 0;
}
