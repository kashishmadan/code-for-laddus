#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
int curr_level=0; //sea level
int count=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='U')
     curr_level++;
    else if(s[i]=='D')
     curr_level--;
    if(curr_level==0 && s[i]=='U')
     count++;
}
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
