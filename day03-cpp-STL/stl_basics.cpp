#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //pairs
    pair<string,int> p1;
    p1=make_pair("student",20);
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,pair<int,int>> p2;
    p2.first=10;
    p2.second.first=20;
    p2.second.second=30;
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    //vectors-dynamic behaviour
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.emplace_back(4);
    vector<int> v2(4,10);
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*(it);
    }
    for(auto it=v2.begin();it!=v2.end();it++)
    {
        cout<<*(it);
    }

    //set-sorted and unique elements 
    //multiset-sorted but not unique elements

    return 0;
}