#include<iostream>
using namespace std;
/*    *
     ***
    *****
   *******
   ********
   ********
    ******
     ****
      **
      
*/
void pattern1(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of rows..";
    cin>>n;
    pattern1(n);
    pattern2(n);
    return 0;

}