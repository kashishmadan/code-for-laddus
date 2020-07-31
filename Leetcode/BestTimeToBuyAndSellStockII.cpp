class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int n=prices.size();
        int res=0;
        while(i<n)
        {
            int j=i;
            while(j<n-1 and prices[j]>prices[j+1])
            {
                j++;
            }
            int b=prices[j];
            
            if(j<n-1)
                j=j+1;
            else
                break;
            
            while(j<n and prices[j]>prices[j-1])
            {
                j++;
            }
            res+=prices[j-1]-b;
            
            if(j<n-1)
                i=j;
            else
                break;  
            
        }
        return res;
        
    }
};
