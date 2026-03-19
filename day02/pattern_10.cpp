#include<iostream>
using namespace std;
/*
   1      1
   12    21
   123  321
   12344321
*/

void pattern(int n){
    int s=2*(n-1);
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //stars
        // for(int j=1;j<=2*n-2*i;j++)
        for(int j=1;j<=2*n-2*i;j++){    
            cout<<" ";
        }
        s=s-2;
        //spaces
        for(int j=i;j>=1;j--){
            cout<<j;
        }cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of rows..";
    cin>>n;
    pattern(n);
    return 0;

}