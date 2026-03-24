#include<iostream>
using namespace std;
int palindrome(int i,string &s){
    if(i>=s.size()/2) return 1;
    if(s[i]!=s[s.size()-i-1] ) return 0;
    return palindrome(i+1,s);
}
int main(){
    string s1="madam";
    string s2="madsm";
    cout<<palindrome(0,s1)<<endl;
    cout<<palindrome(0,s2);
    return 0;
}