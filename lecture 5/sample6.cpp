#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    // Read input N
    if (cin >> N) {
        
        // Total rows is 2*N + 1
        for (int row = 0; row <= 2 * N; row++) {
            
            // Calculate how "deep" we are into the pattern.
            // For N=5: 0, 1, 2, 3, 4, 5, 4, 3, 2, 1, 0
            int depth = (row <= N) ? row : (2 * N - row);
            
            // Total columns is 2*N + 1
            for (int col = 0; col <= 2 * N; col++) {
                
                // Calculate the value at this column position.
                // It decreases from N to 0 and increases back to N.
                int val = (col <= N) ? (N - col) : (col - N);
                
                // Determine if we print the number or a placeholder space.
                // We print numbers that are high enough for the current depth.
                if (val >= (N - depth)) {
                    cout << val;
                } else {
                    cout << " ";
                }
                
                // Print the required space between values
                // We do this for every column except the very last one.
                if (col < 2 * N) {
                    cout << " ";
                }
            }
            // Move to the next line after finishing a row
            cout << endl;
        }
    }
    return 0;
}