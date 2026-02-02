#include <iostream>
using namespace std;

int main() {
    // The grid is 5 rows by 5 columns
    int size;
    cin>>size;
    int q = (size)/2;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            // 1. Check for the specific center point (Row 2, Column 2)
            if (i == q && j == q) {
                cout << "@ ";
            }
            // 2. Check for the borders (First/Last Row OR First/Last Column)
            else if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << "* ";
            }
            // 3. Fill the remaining inner area
            else {
                cout << "# ";
            }
        }
        // Move to the next line after printing a row
        cout << endl;
    }

    return 0;
}