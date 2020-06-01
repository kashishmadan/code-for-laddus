#include <iostream>
using namespace std;
int main()
{
	int t,r,c,answer;
	cin >> t;
	while(t--)
	{
		cin >> r >> c;
		answer=0;
		if((r*c)%2==0)
			answer=(r*c)/2;
		else
			answer=((r*c)/2)+1;
		cout << answer << endl;
	}
	return 0;
}
