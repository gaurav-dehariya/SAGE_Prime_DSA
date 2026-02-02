#include <iostream>
using namespace std;

int main() {
    int rows; // You can change the number of rows here
    cin>>rows;
    int m= rows/2 +1;

    for (int i = 1; i <= m; ++i) {
        // Inner loop 1: Print leading spaces for alignment
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        
        // Inner loop 2: Print stars (2*i - 1 stars per row)
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (rows%2 == i+1){
                cout<<" ";
            }else{
                cout<<"1";
            }
        }

        // for (int j=1; j<=2*i-2; j++){
        //     cout<<" ";
        // }

        // Move to the next line after each row
        cout << endl;
    }
    
    return 0;
}
