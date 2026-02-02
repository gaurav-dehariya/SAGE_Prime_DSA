#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int m = n/2+1;

    for (int i=m; i>=1; i--){
        for (int j=i; j<=m; j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            // cout<<"1 ";
            if (j%2==0){
                cout<<"0 ";
            }else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    for (int i=2; i<=m; i++){
        for (int j=i; j<=m; j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            // cout<<"1 ";
            if (j%2==0){
                cout<<"0 ";
            }else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}