#include<iostream>
using namespace std;

int greetings(int n){
    if (n==0) return 0;
    cout<<"Good Morning"<<endl;
    return greetings(n-1);
}
int main(){
    greetings(5);
    return 0;
}