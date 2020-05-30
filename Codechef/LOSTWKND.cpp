#include <iostream>
using namespace std;

int main() {
    int t,i;
    cin >> t;
    while(t--)
    {
        int arr[6];
        for(i=0;i<6;i++)
        {
            cin >> arr[i];
        }
        int sum=0;
        for(i=0;i<5;i++)
        {
            sum+=(arr[5]*arr[i]);
        }
        if(sum<=(24*5))
         cout << "No" << endl;
        else 
        cout << "Yes" << endl;
        
    }
	// your code goes here
	return 0;
}
