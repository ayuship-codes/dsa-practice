#include<iostream>
using namespace std;

int count_digits(int n){
        int count=0;
        while(n>0){
           int a=n%10;     //a=last digit
           count=count+1;
           n=n/10;
        }
    return count;
}
int count_odd_digits(int n){
    int count=0;
        while(n>0){
           int a=n%10;     //a=last digit
           if(a%2==0){
               count=count+1;
           }
           n=n/10;
        }
    return count;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Number of digits is:";
    cout<<count_digits(n)<<endl;
    cout<<"Number of odd digits in n is:";
    cout<<count_odd_digits(n);
    return 0;
}