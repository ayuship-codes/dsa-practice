#include <bits/stdc++.h>
using namespace std;

// using map
//map <key, value>

int main()
{
    int n, arr[30];
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // hashing

    map<int, int> mp;             //for char - map<char,int>
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // queries
    int q;
    cout << "number of queries :";
    cin >> q;

    while (q--)
    {
        int num;
        cout << "enter number to check occurence:";
        cin >> num;
        cout << "occurence:";
        cout << mp[num] << endl;
    }

    // map stores keys in sorted order
    // iterate map
    for (auto it : mp)
    {
        cout << it.first << "-->" << it.second << endl;
    }

    return 0;
}