long long thirdLargest(long long a[], long long n)
{
     //Your code here
     if(n<3)
        return -1;
     sort(a,a+n,greater<long long>());
     return a[2];
}
