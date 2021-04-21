// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int checkSubstr(string &s, int i, vector<int> &l, vecotr<int> &r)
{
  int right = r[s[i]] - 'a'];
  for(auto j = i; j<=right; ++j)
  {
    if(l[s[j] - 'a'] < i)
      return -1;
    right = max(right, r[s[j] - 'a']);
  }
  return right;
}
int solution(string &s) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> l(26, INT_MAX), r(26, INT_MIN);
    vector<string> res;
    for(int i=0;i<s.size();++i)
    {
      l[s[i]-'a'] = min(l[s[i]-'a'],i);
      r[s[i]-'a'] = i;
    }
    int right=-1;
    for(int i=0;i<s.size();++i)
    {
      if(i==l[s[i]-'a']) {
        int new_right=checkSubstr(s,i,l,r);
        if(new_right !=-1)
        {
          if(i>right)
            res.push_back("");
          right=new_right;
          res.back()=s.substr(i,right-i+1);
        }
      }
    }
    int counter=0;
    for(int i=0;i<res.size();i++)
    {
      int temp=res[i].length();
      if(temp>=2)
      {
        if(res[i][0]==res[i][temp-1])
          counter++;
      }
    }
    return counter;
}
