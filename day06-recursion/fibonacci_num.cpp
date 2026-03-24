#include<iostream>
using namespace std;
//printing fibonacci number by position
int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int pos;
    cout<<"enter position :";
    cin>>pos;
    cout<<fib(pos);
    return 0;
}