class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),i=0,dup=0;
        int temp[n];
        for(i=0;i<n;i++)
            temp[i]=0;
        vector<int>::iterator itr;
        for(itr=nums.begin();itr!=nums.end();itr++)
        {
            temp[(*itr)-1]++;
            if(temp[(*itr)-1]>=2)
            {
                dup=*itr;
                break;
            }
        }
        return dup;
    }
};
