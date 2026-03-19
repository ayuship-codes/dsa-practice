#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        /*1
          1 2
          1 2 3
          1 2 3 4
        */
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of rows..";
    cin>>n;
    pattern(n);
    return 0;

}