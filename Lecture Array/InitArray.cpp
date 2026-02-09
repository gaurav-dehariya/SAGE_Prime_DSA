#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5];

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 1;

    int arr_a[] = {1, 2, 3, 4, 5};

    int n;
    cin >> n;
    vector<int> arr_b(n);   // FIXED

    int size = sizeof(arr_a) / sizeof(arr_a[0]);

    for (int i = 0; i < size; ++i) {
        cout << arr_a[i] << "  ";
    }

    cout << endl;

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "  ";
    }

    return 0;
}
