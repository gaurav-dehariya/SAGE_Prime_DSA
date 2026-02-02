#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int rows = 5;
    vector<int> primes;

    // 1. Generate the exact number of primes we need (up to 19)
    int num = 2;
    while (primes.size() < 8) { // We only need the first 8 primes for this pattern
        if (isPrime(num)) {
            primes.push_back(num);
        }
        num++;
    }

    // 2. Define the pattern using arrays (Data-Driven approach)
    // This replaces the complex if/else logic
    int counts[] = {5, 2, 1, 2, 5};  // How many numbers per row
    int starts[] = {0, 5, 7, 5, 0};  // Where to start in the primes array

    // 3. Print the pattern
    for (int row = 0; row < rows; row++) {
        
        // Calculate spaces to center the text (Hourglass shape)
        // Row 0 needs 0 spaces, Row 2 needs 2 spaces
        int spaces = 2 - abs(2 - row); 

        for (int s = 0; s < spaces; s++) cout << "  ";

        // Print the numbers
        for (int i = 0; i < counts[row]; i++) {
            cout << primes[starts[row] + i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}