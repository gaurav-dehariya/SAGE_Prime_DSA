#include <iostream>
#include <vector>
using namespace std;

vector<int> convert(int n) {
    vector<int> number;

    if (n == 0) number.push_back(0);

    while (n != 0) {
        number.push_back(n % 10);
        n /= 10;
    }

    return number;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    vector<int> number = convert(n);

    vector<int> ans(number.size() + 1, 0);

    for (int i = 0; i < number.size(); i++) {
        if (number[i] < ans.size())
            ans[number[i]] = i + 1;
    }

    for (int i = number.size(); i >= 1; i--) {
        cout << ans[i];
    }

    cout << endl;

    return 0;
}
