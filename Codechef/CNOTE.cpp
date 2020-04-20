#include <iostream>
using namespace std;

int main() {
	long long int t=0;
	cin >> t;
	while(t--)
	{
	    long long int x=0,y=0,k=0,n=0,i=0;
	    cin >> x >> y >> k >> n;
	    long long int p=0,c=0;
	    long long int need=x-y;
	    long long int minprice=-1;
	    for(i=0;i<n;i++)
	    {
	        cin >> p >> c;
	        if(minprice==-1 && p>=need)
	         minprice=c;
	        if(minprice>c && p>=need)
	         minprice=c;
	    }
	    if(need==0 || (minprice<=k && minprice>-1) ) 
	     cout << "LuckyChef" << endl;
	    else 
	     cout << "UnluckyChef" << endl;
	    
	}
	return 0;
}
