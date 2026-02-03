#include <iostream>
using namespace std;

int main() {
    int n, r, rev=0;
    int sum =0;
    cin>>n;

    while (n != 0)
    {
        r = n%10;
        // rev = rev* 10 + r;
        sum = sum+r;
        n/=10;
    }

    cout<<"Sum of Digit: "<<abs(sum);
    return 0;
    
}