#include<iostream>
using namespace std;

int main(){
    string s="abcdefacdeba";   
    cout<<s<<endl;

    //hashing
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']+=1;
    }
    //when exclusively only lowecase wouldn't have asked then
    // hash[s[i]]+=1 as total items in ASCII are 256. then it auto castes to ascii

    int q;
    cout<<"number of queries :";
    cin>>q;

    while(q--){
        char ch;
        cout<<"enter alphabet to check occurence:";
        cin>>ch;
        cout<<"occurence:";
        cout<<hash[ch - 'a']<<endl;
    }

    return 0;
}