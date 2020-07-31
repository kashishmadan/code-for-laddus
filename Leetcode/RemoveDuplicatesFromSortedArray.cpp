class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        int j=0;
        vector<int>::iterator i;
        for(i=nums.begin();i<(nums.end()-1);i++)
        {
            if(*i != *(i+1) )
            {
                nums[j]=*i;
                j++;
            }
        }
        nums[j]=*i;
        j++;
        return j;
    }
};
