#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    int count = 0;
	    for(int i=0;i<(str.length()-1);)
	    {
	        if((i+1)<str.length() && str[i]=='x' && str[i+1]=='y')
	        {
	            count++;
	            i=i+2;
	        }
	        else if((i+1)<str.length()&& str[i]=='y' && str[i+1]=='x')
	        {
	            count++;
	            i=i+2;
	        }
	        else 
	            i++;
	    }
	    cout << count << endl;
	}
	return 0;
}
