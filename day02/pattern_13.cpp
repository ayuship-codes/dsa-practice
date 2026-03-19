#include <iostream>
using namespace std;
/*    A
     ABA
    ABCBA
   ABCDCBA
*/

void pattern(int n){
    for (int i=0;i<n;i++){
       char ch='A';
       for(int j=0;j<=i;j++){
        
        cout<<ch;
       }
       for(int j=0;j<n-i-1;j++){
        cout<<"- ";
       }
        
        cout<<endl;
    }
}



int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    pattern(n);
    return 0;
}