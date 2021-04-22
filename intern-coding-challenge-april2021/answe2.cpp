// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<bits/stdc++.h>
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int counter=0;
    for(int i=0;i<B.size()+1;i++)
    {
      for(int j=0;j<B.size();j++)
      {
        if(B[j]==A[j])
        {
          rotate(B.begin(),B.begin()+B.size()-1,B.end());
          counter++;
          i=-1;
          break;
        }
      }
      if(counter<=B.size() && i==-1)
        continue;
      else break;
    }
    if(counter>B.size())
      counter=-1;
    return counter;
}
