#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    long a=0;
    long b=1;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<a<<"  ";
            long z = a+b;
            a = b;
            b = z;
        }
        cout<<endl;
    }
    return 0;
}