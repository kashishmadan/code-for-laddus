#include<iostream>
using namespace std;
int main()
{
	int t=0,n=0;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int arr[n],chef5=0,chef10=0,chef15=0,count=0;
		for(int i=0;i<n;i++)
			cin >> arr[i];
		for(int i=0;i<n;i++)
		{
			if(arr[i]==5)
			{
				chef5++;
				count++;
			}
			else if(arr[i]==10)
			{
				if(chef5>0)
				{
					chef10++;
					chef5--;
					count++;
				}
				else break;
			}
			else if(arr[i]==15)
			{
				if(chef10>0)
				{
					chef15++;
					chef10--;
					count++;
				}
				else if(chef5>1)
				{
					chef5-=2;
					chef15++;
					count++;
				}
				else break;
			}
		}
		if(count==n)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
