#include <stdio.h>

int main() {
	//code
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
	    int n=0,i=0;
	    scanf("%d",&n);
	    int arr[n],maxsum=0,currsum=0,max=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        if(i==0 || max<arr[i])
	            max=arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if((currsum+arr[i])>=0)
	            currsum+=arr[i];
	        else
	            currsum=0;
	        if(maxsum<currsum)
	            maxsum=currsum;
	    }
	    if(max<0)
	        maxsum=max;
	    printf("%d\n",maxsum);
	}
	return 0;
}
