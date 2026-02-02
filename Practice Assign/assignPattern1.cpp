#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;
    int m = n / 2 +1;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (j==m && i==m){
                cout<<"@ ";
            }else if ( i==1 || i==n || j==1 || j==n){
                cout<<"+ ";
            }else{
                cout<<"# ";
            }
        }
        cout<<endl;
    }
}