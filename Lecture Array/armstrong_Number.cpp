#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int op=n;
    int temp=n;
    int sum=0;
    int l=0;

    while (temp != 0) {
        l++;
        temp /= 10;
    }

    // temp = n;  // reset temp

    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    if(op==sum){
        cout<<"Armstrong"<<endl;
    }else{
        cout<<"Not Armstrong"<<endl;
    }
    return 0;

}