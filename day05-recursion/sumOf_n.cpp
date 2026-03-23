#include<iostream>
using namespace std;
/*
int sum(int n){
    if(n==0) return 0;    
    return n + sum(n-1);
}
*/
int sum(int n,int s){
    if (n==0) return s;
    return sum(n-1,s+n);
}
int main(){
    cout<<"sum is: ";
    //cout<< sum(5);
    cout<<sum(5,0);
    return 0;
}
