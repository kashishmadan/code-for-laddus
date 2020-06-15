#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin >> t;
	while(t--)
	{
	    cin >> n >> k;
	    int arr[n];
	    int sum1=0,sum2=0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	        sum1+=arr[i];
	        if(arr[i]>k)
	         arr[i]=k;
	        sum2+=arr[i];
	    }
	    cout << (sum1-sum2) << endl;
	}
	return 0;
}
