#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t=0;
    cin >> t;
    while(t--)
    {
        int n=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        int count=0,temp=0;
        for(int i=1;i<n;i++)
        {
            temp=abs(arr[i]-arr[i-1]);
            if(temp==1 || temp==0)
                count++;
        }
        //cout << "count: " << count << endl;
        if(count==(n-1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
