#include <iostream>
using namespace std;

int main() {
    long long N;
    cout<<"Enter Num: ";
    cin >> N;

    int oddSum = 0, evenSum = 0;
    int position = 1;  // rightmost digit position = 1

    while (N > 0) {
        int digit = N % 10;

        if (position % 2 == 1)
            oddSum += digit;
        else
            evenSum += digit;

        N /= 10;
        position++;
    }

    cout << oddSum << endl;
    cout << evenSum << endl;

    return 0;
}
