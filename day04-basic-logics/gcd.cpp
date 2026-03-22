#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd_num(int n1,int n2)
{
   
   /* while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;*/

    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }else{
            n2=n2%n1;
        }
    }
    if(n1==0) return n2;
    else return n1;
}
int main()
{
    int n1,n2;
    cout << "enter the number 1:";
    cin >> n1;
    cout << "enter the number 2:";
    cin >> n2;
    cout << "Greatest common factor(gcd) of number is:";
    cout << gcd_num(n1,n2);
    return 0;
}