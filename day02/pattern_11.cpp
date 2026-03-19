#include <iostream>
using namespace std;
/* A
   A B 
   A B C 
   A B C D
*/

void pattern(int n){
    for (int i=0;i<n;i++){
       for(char j='A';j<='A'+i;j++){
        cout<<j<<" ";
       }              
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter number of rows..."<<endl;
    cin>>n;
    pattern(n);
    return 0;
}