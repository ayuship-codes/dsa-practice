#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<=i;j++){
            cout<<" ";
        }cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of rows..";
    cin>>n;
    pattern(n);
    return 0;

}