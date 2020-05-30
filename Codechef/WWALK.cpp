#include <iostream>
using namespace std;

int main() {
    long long int t,n,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int a[n],b[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];
        long long int answer=0,a_dist=0,b_dist=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i] && a_dist==b_dist)
            {
                answer+=a[i];
            }
            a_dist+=a[i];
            b_dist+=b[i];
        }
        cout << answer << endl;
    }
	// your code goes here
	return 0;
}
