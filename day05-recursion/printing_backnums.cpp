#include<iostream>
using namespace std;

/*
int print(int i,int n){
    
    if(i<1) return 0;
    cout<<i<<" ";
    return print(i-1,n);  
}
*/
int print(int n){
    if (n==0) return 0;
    cout<<n<<" ";
    return print(n-1);
}
int main(){
    // print(10,10);
    print(10);
    return 0;
}