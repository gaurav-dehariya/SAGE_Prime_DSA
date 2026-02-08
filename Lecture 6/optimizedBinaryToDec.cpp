#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = stoi(binary, nullptr, 2);
    cout << "Decimal number: " << decimal;

    return 0;
}
