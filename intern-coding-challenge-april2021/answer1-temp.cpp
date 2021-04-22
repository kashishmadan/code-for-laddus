int solution(string &S)
{
  int counter=0;
  for(int i=0;i<S.length();i++)
  {
    for(int j=i+1;j<S.length();j++)
    {
      if(S[i]==S[j])
      {
        string temp = S.substr(i,j-i+1);
        int r = solution(temp);
        counter+=r;
        i=j;
        break;
      }
    }
  }

  return counter;
}
