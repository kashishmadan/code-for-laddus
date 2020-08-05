#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t=0;
    cin >> t;
    while(t--)
    {
        int n=0;
        cin >> n;
        int a[n],b[n],mina=-1,minb=-1;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(i==0) mina=a[i];
            if(mina>a[i])
                mina=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            if(i==0) minb=b[i];
            if(minb>b[i])
                minb=b[i];
        }
        //cout << "mina,minb: " << mina <<" " << minb << endl;
        long long int result=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mina)
            {
                if(b[i]==minb)
                    result+=a[i]-mina;
                else
                {
                    if((a[i]-mina)>(b[i]-minb))
                    {
                        result+=a[i]-mina;
                    }
                    else
                    {
                        result+=b[i]-minb;
                    }
                }
            }
            else if(b[i]>minb)
            {
                if(a[i]==mina)
                    result+=b[i]-minb;
                else
                {
                    if((a[i]-mina)>(b[i]-minb))
                    {
                        result+=a[i]-mina;
                    }
                    else
                    {
                        result+=b[i]-minb;
                    }
                }
            }
            //cout << "i= " << i << " & result= " << result << endl;
        }
        cout << result << endl;
    }
    return 0;
}
