#include <iostream>
using namespace std;
int main()
{
    int t=0,n=0,m=0,k=0;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k;
        int answer=0;
        if((n/k)>=m)
            answer=m;
        else
        {
            int plaincard=n-m;
            int x=n/k;
            m=m-x;
            int y=(plaincard/(k-1));
            y=(n/k)-y;
            answer=x-y;
        }
        cout << answer << endl;
    }
	return 0;
}
