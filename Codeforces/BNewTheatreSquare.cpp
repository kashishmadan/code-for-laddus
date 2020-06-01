#include <iostream>
using namespace std;
int main()
{
    int t=0,n,m,x,y,i,j;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> x >> y;
        int arr[m],answer=0;
        char c;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> c;
                if(c=='.')
                    arr[j]=1;
                else
                    arr[j]=0;
            }
            for(j=0;j<m;j++)
            {
                if((j+1)<m && arr[j]==1 && arr[j]==arr[j+1])
                {
                    if((2*x)<=y)
                        answer+=(2*x);
                    else
                        answer+=y;
                    j++;
                }
                else if((j+1)<m && arr[j]==1 && arr[j+1]==0)
                {
                    answer+=x;
                    j++;
                }
                else if(arr[j]==1)
                    answer+=x;
            }
        }
        cout << answer << endl;
    }
	return 0;
}
