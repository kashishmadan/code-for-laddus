#include<iostream>
using namespace std;
int BinarySearch(int a[],int low,int high,int key)
{
    if(low==high)
    {
        if(a[low]==key)
            return low;
        else
            return -1;
    }
    int mid=(low+high)/2;
    if(a[mid]==key)
        return mid;
    if(a[mid]<key)
        BinarySearch(a,mid+1,high,key);
    else
        BinarySearch(a,low,mid-1,key);
}
int main()
{
    int n=0,i=0,key=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i]; //sorted array as an input
    cin >> key;
    int index=BinarySearch(arr,0,n-1,key);
    if(index==-1)
        cout << "Not found!" << endl;
    else
        cout << "Found at index: " << index << endl;
    return 0;
}
