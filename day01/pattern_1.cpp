
#include <iostream>
using namespace std;
void pattern01(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }cout<<endl;
    }
}
void pattern02(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n+i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main(){
    int n;
    cout<<"enter number of rows..."<<endl;
    cin>>n;
    pattern01(n);
    return 0;
}