#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
long len=s.length(),count=0,count_extra=0,i;
long extra=(n%len);
long times=(n/len);
for(i=0;i<len;i++)
{
    if(s[i]=='a')
    {
        count++; 
        if(i<extra)
         count_extra++;
    }
}

return (count*times)+count_extra;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
