#include <iostream>
using namespace std;

int countDigit(long long n, int digit) {
    int count = 0;

    // Special case: when number is 0
    if (n == 0 && digit == 0)
        return 1;

    while (n > 0) {
        int lastDigit = n % 10;

        if (lastDigit == digit)
            count++;

        n /= 10;
    }

    return count;
}

int main() {
    long long N;
    int D;

    cin >> N;
    cin >> D;

    cout << countDigit(N, D);

    return 0;
}
