
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void divisors(int n)
{
   /* for(int i=1;i<=n;i++){
       if(n%i==0){
         cout<<i<<" ";
       }
    }*/
   //now using vectors
   vector<int> v;
   for(int i=1;i<=sqrt(n);i++){
     if(n%i==0){
        v.push_back(i);
        if(n/i != i){
            v.push_back(n/i);
        }
     }
   }
   sort(v.begin(),v.end());
   for(auto it:v){
    cout<<it<<", ";
   } 
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    cout << " divisors of number are:";
    divisors(n);
    return 0;
}