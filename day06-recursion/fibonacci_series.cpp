#include<iostream>
using namespace std;
//to print n number of fibonacci series
int fibo_s(int n){
    if(n==0 || n==1) return n;
    return fibo_s(n-1)+fibo_s(n-2);
}
int main(){
    int n;
    cout<<"enter size of fibonacci series:";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout << fibo_s(i) << " ";
    }
    return 0;
}