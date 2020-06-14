#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    // print Duplicates
    bool dup=false;
    unordered_map<int,int>::iterator j;
    for(j=m.begin();j!=m.end();j++)
    {
        if(j->second>1)
        {
            cout << j->first << endl;
            dup=true;
        }
    }
    if(dup==false)
        cout << "No duplicates";
    return 0;
}
