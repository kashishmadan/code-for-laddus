#include <iostream>
using namespace std;

int main() {
	//code
	int t=0;
	cin >> t;
	while(t--)
	{
	    int n=0,num=0,arrsum=0,sum=0;
	    cin >> n;
	    sum=(n*(n+1))/2;
	    for(int i=0;i<(n-1);i++)
	    {
	        cin >> num;
	        arrsum+=num;
	    }
	    cout << sum-arrsum << endl;
	}
	return 0;
}
