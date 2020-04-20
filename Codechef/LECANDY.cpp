// Kashish Madan 21-04-2020
// LinkedIn https://www.linkedin.com/in/kashishmadan/
// Codechef https://www.codechef.com/users/kashish_madan/

#include <iostream>
using namespace std;

int main() 
{
	int t=0;
	cin >> t;
	while(t--)
	{
	    int n=0,c=0,i=0;
	    cin >> n >> c;
	    int num=0,sum=0;
	    for(i=0;i<n;i++)
	    {
	        cin >> num;
	        sum+=num;
	    }
	    if(sum<=c)
	     cout << "Yes" << endl;
	    else
	     cout << "No" << endl;
	}
	return 0;
}
