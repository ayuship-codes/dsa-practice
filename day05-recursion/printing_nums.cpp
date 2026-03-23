#include<iostream>
using namespace std;
//printing 1 2 3 4 5 ....n

/*
int print_nums(int i,int n){
    if(i>n) return 0;
    cout<<i<<" ";    
    return print_nums(i+1,n);
    }
*/

//using backtracking
int print_nums(int n){
    if (n==0) return 0;
    print_nums(n-1);
    cout<<n<<" ";
    return 0;
}
int main(){
    int n;
   // cout<<"Enter starting and ending number:";
   // cin>>i;
    cout<<"enter number:";
    cin>>n;
    //print_nums(i,n);
    print_nums(n);
    return 0;
}