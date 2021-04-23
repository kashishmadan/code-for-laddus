int fun(vector<int> &A)
{
  int start=4,maxx=0,minn=0;
  vector<int> result=A;
  for(int i=0;i<A.size();i++)
  {
    if(i==0){
      result[i]=start+A[i];
      maxx=minn=result[i];
    }
    else
      result[i]=result[i-1]+A[i];

    if(result[i]>maxx)
      maxx=result[i];
    if(result[i]<minn)
      minn=result[i];
  }
  return (maxx-minn);
}
int solution(vector<int> &A)
{
  int max_diff=fun(A);
  int counter=0,temp1=0,temp2=0;
  for(int i=0;i<A.size();i++)
  {
    if(A[i]==1)
    {
      A[i]=-1;
        temp1=fun(A);
      A[i]=0;
        temp2=fun(A);
      if(temp1<max_diff || temp2<max_diff)
        counter++;
      A[i]=1;
    }
    else if(A[i]==0)
    {
      A[i]=-1;
        temp1=fun(A);
      A[i]=1;
        temp2=fun(A);
      if(temp1<max_diff || temp2<max_diff)
        counter++;
      A[i]=0;
    }
    else if(A[i]==-1)
    {
      A[i]=1;
        temp1=fun(A);
      A[i]=0;
        temp2=fun(A);
      if(temp1<max_diff || temp2<max_diff)
        counter++;
      A[i]=-1;
    }
  }
  return counter;
}
