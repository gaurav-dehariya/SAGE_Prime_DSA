#include <iostream>
using namespace std;

int main(){
    int n=12;
    int k=5;

    for (int i=1; i<=n; ++i){
        if(n%i==0){
            k--;
            if(k==0) {
                cout<<i<<endl;
                  return 0;
            } 
        }
    }
    cout<<-1<<endl;
    return 0;


}