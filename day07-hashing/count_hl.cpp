#include <bits/stdc++.h>
using namespace std;

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

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    // max
    int maxFreq = 0;
    int maxElement;

    for (auto it : mp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }
    cout << "maximum occurrence is " << maxFreq << " times of element " << maxElement << endl;

    // min
    int minFreq = 0;
    int minElement;

    for (auto it : mp)
    {
        if (it.second < minFreq)
        {
           minFreq = it.second;
            minElement = it.first;
        }
    }
    cout << "minimum occurrence is " << minFreq << " times of element " << minElement << endl;

    return 0;
}