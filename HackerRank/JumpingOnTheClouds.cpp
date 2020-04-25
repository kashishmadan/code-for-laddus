#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int jump=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==0 && arr[i+2]==0)
        {
            jump++;
            i++;
        }
        else if(arr[i]==0 && arr[i+1]==0)
         jump++;
    }
    cout << jump;
}
