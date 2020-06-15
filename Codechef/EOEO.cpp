#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long long int t=0,ts=0,js=0;
    cin >> t;
    while(t--)
    {
        cin >> ts;
        if(ts==1)
            cout << "0" << endl;
        else if(ts%2!=0)
        {
            cout << ts/2 << endl;
        }
        else if(ts%2==0)
        {
            while(ts>1)
            {
                ts=ts/2;
                if(ts%2!=0)
                {
                    cout << ts/2 << endl;
                    break;
                }
                else if(ts==1)
                    break;
            }
        }
    }
    return 0;
}
