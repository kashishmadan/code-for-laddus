#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t=0,n=0,i=0,j=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int even=0,odd=-1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((i%2==0 && j%2==0)||(i%2!=0 && j%2!=0))
                {
                    odd+=2;
                    cout << odd << " ";
                }
                else if((i%2==0 && j%2!=0)||(i%2!=0 && j%2==0))
                {
                    even+=2;
                    cout << even << " ";
                }
                else continue;
            }
            cout << endl;
        }
    }
    return 0;
}
