#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int size = 2 * N + 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value = max(abs(i - N), abs(j - N));
            cout << N - value << " ";
        }
        cout << endl;
    }

    return 0;
}
