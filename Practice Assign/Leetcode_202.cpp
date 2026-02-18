#include <iostream>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;

        if (n == 1 || n == 7) {
            return true;
        }
        else if (n < 10) {
            return false;
        }
        else {
            while (n != 0) {
                int k = n % 10;
                sum += k * k;
                n = n / 10;
            }
        }

        return isHappy(sum);
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution sol;

    if (sol.isHappy(n)) {
        cout << "The number is a Happy Number!" << endl;
    } else {
        cout << "The number is NOT a Happy Number." << endl;
    }

    return 0;
}
