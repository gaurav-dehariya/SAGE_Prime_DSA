#include <iostream>
using namespace std;

// Function to calculate sum of digits
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int original = n;

    // Step 1: Check if prime
    bool isPrime = true;
    if (n <= 1) isPrime = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Not Boston" << endl;
        return 0;
    }

    // Step 2: Sum of digits of original number
    int sumNumber = digitSum(original);

    // Step 3: Find sum of digits of prime factors
    int sumFactors = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            sumFactors += digitSum(i);
            n /= i;
        }
    }

    // If n > 1, it is also a prime factor
    if (n > 1) {
        sumFactors += digitSum(n);
    }

    // Step 4: Compare
    if (sumNumber == sumFactors)
        cout << "Boston Number" << endl;
    else
        cout << "Not Boston" << endl;

    return 0;
}
