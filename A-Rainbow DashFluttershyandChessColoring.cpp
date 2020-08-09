#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin >> t;
    while(t--)
    {
        int n=0,result=0;
        cin >> n;
        int temp=n*n;
        while(n>=0)
        {
            temp-=(2*n)+(2*(n-2));
            n=n-2;
            result++;
        }
        cout << result << endl;
    }
    return 0;
}
