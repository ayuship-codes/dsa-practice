#include<iostream>
using namespace std;
/*
arr = [1,3,2,1,3]

hash[1] += 1 → 1  
hash[3] += 1 → 1  
hash[2] += 1 → 1  
hash[1] += 1 → 2  
hash[3] += 1 → 2

hash = [0,2,1,2,0,0,0,0,0,0,0,0,0]
         ↑ ↑ ↑
         1 2 3
*/
int main(){
    int n, arr[30];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //hashing
    //hash[max(arr)+1]
    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    //q is for how many terms to check occurence
    int q;
    cout<<"number of queries :";
    cin>>q;

    while(q--){
        int num;
        cout<<"enter number to check occurence:";
        cin>>num;
        cout<<"occurence:";
        cout<<hash[num]<<endl;
    }

    return 0;
}