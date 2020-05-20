
/*Complete the function below*/
long long minDist(long long arr[], long long n, long long x, long long y) {
    long long ptr = -1, min_d = INT_MAX; 
      
    for(long long i=0 ; i<n ; i++) 
    { 
        if(arr[i]==x || arr[i]==y) 
        { 
            if( ptr != -1 && arr[i] != arr[ptr]) 
            {
                if(min_d>=(i-ptr))
                 min_d=i-ptr;
            }
            ptr=i; 
        } 
    } 
    if(min_d==INT_MAX) 
        return -1; 
  
    return min_d; 
    
}
